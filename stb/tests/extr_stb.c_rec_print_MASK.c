
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* relpath; float weight; struct TYPE_4__** files; struct TYPE_4__** subdirs; } ;
typedef TYPE_1__ stb_dirtree2 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__**) ;

void FUNC_2(stb_dirtree2 *VAR_0, int VAR_1)
{
   int VAR_2;
   for (VAR_2=0; VAR_2 < VAR_1; ++VAR_2) FUNC_0("  ");
   FUNC_0("%s (%d)\n", VAR_0->relpath, FUNC_1(VAR_0->files));
   for (VAR_2=0; VAR_2 < FUNC_1(VAR_0->subdirs); ++VAR_2)
      FUNC_2(VAR_0->subdirs[VAR_2], VAR_1+1);
   VAR_0->weight = (float) FUNC_1(VAR_0->files);
}
