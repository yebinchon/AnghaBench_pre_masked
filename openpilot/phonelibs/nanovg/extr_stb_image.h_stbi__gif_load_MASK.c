
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int stbi_uc ;
struct TYPE_4__ {int w; int h; scalar_t__ out; } ;
typedef TYPE_1__ stbi__gif ;
typedef int stbi__context ;
typedef int g ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int * FUNC_2 (int *,int,int,int,int) ;
 int * FUNC_3 (int *,TYPE_1__*,int*,int) ;

__attribute__((used)) static stbi_uc *FUNC_4(stbi__context *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int VAR_4)
{
   stbi_uc *VAR_5 = 0;
   stbi__gif VAR_6;
   FUNC_1(&VAR_6, 0, sizeof(VAR_6));

   VAR_5 = FUNC_3(VAR_0, &VAR_6, VAR_3, VAR_4);
   if (VAR_5 == (stbi_uc *) VAR_0) VAR_5 = 0;
   if (VAR_5) {
      *VAR_1 = VAR_6.w;
      *VAR_2 = VAR_6.h;
      if (VAR_4 && VAR_4 != 4)
         VAR_5 = FUNC_2(VAR_5, 4, VAR_4, VAR_6.w, VAR_6.h);
   }
   else if (VAR_6.out)
      FUNC_0(VAR_6.out);

   return VAR_5;
}
