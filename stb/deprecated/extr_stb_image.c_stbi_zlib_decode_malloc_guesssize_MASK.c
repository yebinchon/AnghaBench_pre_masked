
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* zout; char* zout_start; int * zbuffer_end; int * zbuffer; } ;
typedef TYPE_1__ zbuf ;
typedef int stbi__uint8 ;


 scalar_t__ FUNC_0 (TYPE_1__*,char*,int,int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;

char *FUNC_3(const char *VAR_0, int VAR_1, int VAR_2, int *VAR_3)
{
   zbuf VAR_4;
   char *VAR_5 = (char *) FUNC_2(VAR_2);
   if (VAR_5 == ((void*)0)) return ((void*)0);
   VAR_4.zbuffer = (stbi__uint8 *) VAR_0;
   VAR_4.zbuffer_end = (stbi__uint8 *) VAR_0 + VAR_1;
   if (FUNC_0(&VAR_4, VAR_5, VAR_2, 1, 1)) {
      if (VAR_3) *VAR_3 = (int) (VAR_4.zout - VAR_4.zout_start);
      return VAR_4.zout_start;
   } else {
      FUNC_1(VAR_4.zout_start);
      return ((void*)0);
   }
}
