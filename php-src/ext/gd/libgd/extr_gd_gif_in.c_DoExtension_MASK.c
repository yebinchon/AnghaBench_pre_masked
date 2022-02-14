
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gdIOCtx ;
struct TYPE_2__ {unsigned char disposal; unsigned char inputFlag; int delayTime; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,int*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (unsigned char,unsigned char) ;
 int FUNC_2 (unsigned char*,int ,int) ;

__attribute__((used)) static int
FUNC_3(gdIOCtx *VAR_2, int VAR_3, int *VAR_4, int *VAR_5)
{
 unsigned char VAR_6[256];

 switch (VAR_3) {
  case 0xf9:
   FUNC_2(VAR_6, 0, 4);
               (void) FUNC_0(VAR_2, (unsigned char*) VAR_6, VAR_5);





   if ((VAR_6[0] & 0x1) != 0)
    *VAR_4 = VAR_6[3];

   while (FUNC_0(VAR_2, (unsigned char*) VAR_6, VAR_5) > 0);
   return VAR_0;
  default:
   break;
 }
       while (FUNC_0(VAR_2, (unsigned char*) VAR_6, VAR_5) > 0)
  ;

 return VAR_0;
}
