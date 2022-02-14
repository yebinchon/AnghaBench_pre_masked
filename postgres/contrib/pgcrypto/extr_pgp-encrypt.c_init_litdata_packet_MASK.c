
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_4__ {scalar_t__ unicode_mode; scalar_t__ text_mode; } ;
typedef int PushFilter ;
typedef TYPE_1__ PGP_Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(PushFilter **VAR_2, PGP_Context *VAR_3, PushFilter *VAR_4)
{
 int VAR_5;
 int VAR_6;
 uint8 VAR_7[6];
 uint32 VAR_8;
 PushFilter *VAR_9;
 int VAR_10;





 if (VAR_3->text_mode)
  VAR_10 = VAR_3->unicode_mode ? 'u' : 't';
 else
  VAR_10 = 'b';





 VAR_8 = (uint32) FUNC_3(((void*)0));

 VAR_7[0] = VAR_10;
 VAR_7[1] = 0;
 VAR_7[2] = (VAR_8 >> 24) & 255;
 VAR_7[3] = (VAR_8 >> 16) & 255;
 VAR_7[4] = (VAR_8 >> 8) & 255;
 VAR_7[5] = VAR_8 & 255;
 VAR_6 = 6;

 VAR_5 = FUNC_4(VAR_4, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_0(&VAR_9, &VAR_1, VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_9, VAR_7, VAR_6);
 if (VAR_5 < 0)
 {
  FUNC_1(VAR_9);
  return VAR_5;
 }

 *VAR_2 = VAR_9;
 return 0;
}
