
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; } ;
typedef TYPE_1__ stbi_gif ;
typedef int stbi ;


 int FUNC_0 (int *,TYPE_1__*,int*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(stbi *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
   stbi_gif VAR_4;
   if (!FUNC_0(VAR_0, &VAR_4, VAR_3, 1)) {
      FUNC_1( VAR_0 );
      return 0;
   }
   if (VAR_1) *VAR_1 = VAR_4.w;
   if (VAR_2) *VAR_2 = VAR_4.h;
   return 1;
}
