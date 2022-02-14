
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fileCount; TYPE_1__* files; void* name; } ;
struct TYPE_6__ {struct TYPE_6__* patches; void* name; } ;
typedef int PatchedFile ;


 int FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 void** VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7()
{
   int VAR_3, VAR_4;
   const char *VAR_5;


   if (VAR_0 < 6 || (VAR_0 % 2) != 0)
   {
      FUNC_5();
      return -1;
   }

   VAR_5 = VAR_1[3];
   VAR_2.name = VAR_1[2];


   VAR_2.fileCount = (VAR_0 - 4) / 2;
   VAR_2.files = FUNC_2(VAR_2.fileCount * sizeof (PatchedFile));
   if (VAR_2.files == ((void*)0))
   {
      FUNC_6("Out of memory!\n");
      return -1;
   }
   FUNC_3(VAR_2.files, 0, VAR_2.fileCount * sizeof (PatchedFile));


   for (VAR_3 = 0; VAR_3 < VAR_2.fileCount; VAR_3++)
   {
      VAR_2.files[VAR_3].name = VAR_1[4 + (VAR_3 * 2) + 1];
      VAR_4 = FUNC_0(VAR_2.files + VAR_3, VAR_1[4 + (VAR_3 * 2) + 0]);
      if (VAR_4 < 0)
      {
         for (VAR_3 = 0; VAR_3 < VAR_2.fileCount; VAR_3++)
         {
            if (VAR_2.files[VAR_3].patches != ((void*)0))
               FUNC_1(VAR_2.files[VAR_3].patches);
         }
         FUNC_1(VAR_2.files);
         VAR_2.files = ((void*)0);
         VAR_2.fileCount = 0;
         return VAR_4;
      }
   }


   return FUNC_4(VAR_5);
}
