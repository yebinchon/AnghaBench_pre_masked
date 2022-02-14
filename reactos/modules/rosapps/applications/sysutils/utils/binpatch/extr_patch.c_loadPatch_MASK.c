
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* name; int fileCount; TYPE_1__* files; } ;
struct TYPE_5__ {int fileCount; scalar_t__ files; int * name; } ;
struct TYPE_4__ {char* name; int * patches; } ;
typedef TYPE_1__ PatchedFile ;
typedef int PatchedByte ;
typedef TYPE_2__ Patch ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int
FUNC_1()
{
   char *VAR_3;
   Patch *VAR_4;
   int VAR_5;

   VAR_3 = VAR_2 + VAR_0;
   VAR_4 = (Patch *)VAR_3;

   if (VAR_4->name == ((void*)0))
   {
      return -1;
   }

   VAR_1.name = VAR_3 + (intptr_t)VAR_4->name;
   VAR_1.fileCount = VAR_4->fileCount;
   VAR_1.files = (PatchedFile *)(VAR_3 + (intptr_t)VAR_4->files);

   for (VAR_5 = 0; VAR_5 < VAR_1.fileCount; VAR_5++)
   {
      VAR_1.files[VAR_5].name = VAR_3 + (intptr_t)VAR_1.files[VAR_5].name;
      VAR_1.files[VAR_5].patches = (PatchedByte *)(VAR_3 + (intptr_t)VAR_1.files[VAR_5].patches);
   }

   FUNC_0("Patch %s loaded...\n", VAR_1.name);
   return 0;
}
