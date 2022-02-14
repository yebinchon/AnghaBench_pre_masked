
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8 ;
struct TYPE_3__ {int unexpected_binary; int unicode_mode; scalar_t__ convert_crlf; scalar_t__ text_mode; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_Context ;
typedef int MBuf ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int const*,int,int*) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *,int,int const**) ;
 int FUNC_4 (int *,int,int const**,int const*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int const*,int ,int) ;

__attribute__((used)) static int
FUNC_7(PGP_Context *VAR_1, MBuf *VAR_2, PullFilter *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;
 uint8 *VAR_7;
 uint8 VAR_8[4];
 int VAR_9 = 0;

 FUNC_0(VAR_3, VAR_4);
 FUNC_0(VAR_3, VAR_5);


 while (VAR_5 > 0)
 {
  VAR_6 = FUNC_3(VAR_3, VAR_5, &VAR_7);
  if (VAR_6 < 0)
   return VAR_6;
  if (VAR_6 == 0)
   break;
  VAR_5 -= VAR_6;
 }
 if (VAR_5 > 0)
 {
  FUNC_5("parse_literal_data: unexpected eof");
  return VAR_0;
 }


 VAR_6 = FUNC_4(VAR_3, 4, &VAR_7, VAR_8);
 if (VAR_6 != 4)
 {
  FUNC_5("parse_literal_data: unexpected eof");
  return VAR_0;
 }
 FUNC_6(VAR_8, 0, 4);





 if (VAR_1->text_mode)
  if (VAR_4 != 't' && VAR_4 != 'u')
  {
   FUNC_5("parse_literal_data: data type=%c", VAR_4);
   VAR_1->unexpected_binary = 1;
  }

 VAR_1->unicode_mode = (VAR_4 == 'u') ? 1 : 0;


 while (1)
 {
  VAR_6 = FUNC_3(VAR_3, 32 * 1024, &VAR_7);
  if (VAR_6 <= 0)
   break;

  if (VAR_1->text_mode && VAR_1->convert_crlf)
   VAR_6 = FUNC_1(VAR_2, VAR_7, VAR_6, &VAR_9);
  else
   VAR_6 = FUNC_2(VAR_2, VAR_7, VAR_6);
  if (VAR_6 < 0)
   break;
 }
 if (VAR_6 >= 0 && VAR_9)
  VAR_6 = FUNC_2(VAR_2, (const uint8 *) "\r", 1);
 return VAR_6;
}
