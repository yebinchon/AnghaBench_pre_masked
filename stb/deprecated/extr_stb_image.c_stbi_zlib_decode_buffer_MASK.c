
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zout_start; scalar_t__ zout; int * zbuffer_end; int * zbuffer; } ;
typedef TYPE_1__ zbuf ;
typedef int stbi__uint8 ;


 scalar_t__ FUNC_0 (TYPE_1__*,char*,int,int ,int) ;

int FUNC_1(char *VAR_0, int VAR_1, char const *VAR_2, int VAR_3)
{
   zbuf VAR_4;
   VAR_4.zbuffer = (stbi__uint8 *) VAR_2;
   VAR_4.zbuffer_end = (stbi__uint8 *) VAR_2 + VAR_3;
   if (FUNC_0(&VAR_4, VAR_0, VAR_1, 0, 1))
      return (int) (VAR_4.zout - VAR_4.zout_start);
   else
      return -1;
}
