
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* jpeg_saved_marker_ptr ;
struct TYPE_3__ {scalar_t__ marker; int data_length; scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char const*,int,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(jpeg_saved_marker_ptr VAR_1, int *VAR_2, int *VAR_3)
{
 const unsigned char *VAR_4, *VAR_5;

 if (!VAR_1 || VAR_1->marker != VAR_0 + 13 || VAR_1->data_length < 42 ||
  FUNC_1((const char *)VAR_1->data, "Photoshop 3.0") != 0)
 {
  return 0;
 }

 VAR_4 = (const unsigned char *)VAR_1->data;
 VAR_5 = VAR_4 + VAR_1->data_length;
 for (VAR_4 += 14; VAR_4 + 12 < VAR_5; ) {
  int VAR_6 = -1;
  int VAR_7 = FUNC_0(VAR_4 + 4, 2, 1);
  int VAR_8 = 11 + FUNC_0(VAR_4 + 6, 2, 1);
  if (VAR_8 % 2 == 1)
   VAR_8++;
  if (FUNC_0(VAR_4, 4, 1) == 0x3842494D && VAR_8 <= VAR_5 - VAR_4)
   VAR_6 = FUNC_0(VAR_4 + VAR_8 - 4, 4, 1);
  if (VAR_6 < 0 || VAR_6 > VAR_5 - VAR_4 - VAR_8)
   return 0;
  if (VAR_7 == 0x3ED && VAR_6 == 16)
  {
   *VAR_2 = FUNC_0(VAR_4 + VAR_8, 2, 1);
   *VAR_3 = FUNC_0(VAR_4 + VAR_8 + 8, 2, 1);
   return 1;
  }
  if (VAR_6 % 2 == 1)
   VAR_6++;
  VAR_4 += VAR_8 + VAR_6;
 }

 return 0;
}
