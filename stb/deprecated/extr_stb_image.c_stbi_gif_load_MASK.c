
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void stbi_uc ;
struct TYPE_3__ {int w; int h; int member_0; } ;
typedef TYPE_1__ stbi_gif ;
typedef void stbi__uint8 ;
typedef int stbi ;


 void* FUNC_0 (int *,TYPE_1__*,int*,int) ;

__attribute__((used)) static stbi_uc *FUNC_1(stbi *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int VAR_4)
{
   stbi__uint8 *VAR_5 = 0;
   stbi_gif VAR_6={0};

   VAR_5 = FUNC_0(VAR_0, &VAR_6, VAR_3, VAR_4);
   if (VAR_5 == (void *) 1) VAR_5 = 0;
   if (VAR_5) {
      *VAR_1 = VAR_6.w;
      *VAR_2 = VAR_6.h;
   }

   return VAR_5;
}
