
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (void*,size_t,int,int *) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (int ,struct stat*) ;
 void* FUNC_6 (size_t) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void *
FUNC_8(const char *VAR_0, size_t *VAR_1)
{
   FILE *VAR_2;
   struct stat VAR_3;
   size_t VAR_4;
   void *VAR_5;


   VAR_2 = FUNC_2(VAR_0, "rb");
   if (VAR_2 == ((void*)0))
   {
      FUNC_7("Couldn't open file %s for reading!\n", VAR_0);
      return ((void*)0);
   }


   if (FUNC_5(FUNC_0(VAR_2), &VAR_3) < 0)
   {
      FUNC_1(VAR_2);
      FUNC_7("Couldn't get size of file %s!\n", VAR_0);
      return ((void*)0);
   }
   VAR_4 = VAR_3.st_size;


   VAR_5 = FUNC_6(VAR_4);
   if (VAR_5 == ((void*)0))
   {
      FUNC_1(VAR_2);
      FUNC_7("Couldn't allocate %Id bytes for file %s!\n", VAR_4, VAR_0);
      return ((void*)0);
   }

   if (FUNC_3(VAR_5, VAR_4, 1, VAR_2) != 1)
   {
      FUNC_1(VAR_2);
      FUNC_4(VAR_5);
      FUNC_7("Couldn't read file %s into memory!\n", VAR_0);
      return ((void*)0);
   }


   FUNC_1(VAR_2);

   *VAR_1 = VAR_4;
   return VAR_5;
}
