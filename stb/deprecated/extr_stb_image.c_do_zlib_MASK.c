
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* zout_start; char* zout; char* zout_end; int z_expandable; } ;
typedef TYPE_1__ zbuf ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(zbuf *VAR_0, char *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
   VAR_0->zout_start = VAR_1;
   VAR_0->zout = VAR_1;
   VAR_0->zout_end = VAR_1 + VAR_2;
   VAR_0->z_expandable = VAR_3;

   return FUNC_0(VAR_0, VAR_4);
}
