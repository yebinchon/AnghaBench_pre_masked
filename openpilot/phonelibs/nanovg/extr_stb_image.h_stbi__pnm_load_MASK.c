
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int stbi_uc ;
struct TYPE_5__ {int img_x; int img_y; int img_n; } ;
typedef TYPE_1__ stbi__context ;


 int * FUNC_0 (int *,int,int,int,int) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int*,int*,int*) ;

__attribute__((used)) static stbi_uc *FUNC_5(stbi__context *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int VAR_4)
{
   stbi_uc *VAR_5;
   if (!FUNC_4(VAR_0, (int *)&VAR_0->img_x, (int *)&VAR_0->img_y, (int *)&VAR_0->img_n))
      return 0;
   *VAR_1 = VAR_0->img_x;
   *VAR_2 = VAR_0->img_y;
   *VAR_3 = VAR_0->img_n;

   VAR_5 = (stbi_uc *) FUNC_3(VAR_0->img_n * VAR_0->img_x * VAR_0->img_y);
   if (!VAR_5) return FUNC_1("outofmem", "Out of memory");
   FUNC_2(VAR_0, VAR_5, VAR_0->img_n * VAR_0->img_x * VAR_0->img_y);

   if (VAR_4 && VAR_4 != VAR_0->img_n) {
      VAR_5 = FUNC_0(VAR_5, VAR_0->img_n, VAR_4, VAR_0->img_x, VAR_0->img_y);
      if (VAR_5 == ((void*)0)) return VAR_5;
   }
   return VAR_5;
}
