
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* zout; char* zout_start; char* zout_end; int z_expandable; } ;
typedef TYPE_1__ zbuf ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(zbuf *VAR_0, int VAR_1)
{
   char *VAR_2;
   int VAR_3, VAR_4;
   if (!VAR_0->z_expandable) return FUNC_0("output buffer limit","Corrupt PNG");
   VAR_3 = (int) (VAR_0->zout - VAR_0->zout_start);
   VAR_4 = (int) (VAR_0->zout_end - VAR_0->zout_start);
   while (VAR_3 + VAR_1 > VAR_4)
      VAR_4 *= 2;
   VAR_2 = (char *) FUNC_1(VAR_0->zout_start, VAR_4);
   if (VAR_2 == ((void*)0)) return FUNC_0("outofmem", "Out of memory");
   VAR_0->zout_start = VAR_2;
   VAR_0->zout = VAR_2 + VAR_3;
   VAR_0->zout_end = VAR_2 + VAR_4;
   return 1;
}
