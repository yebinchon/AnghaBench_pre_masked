
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int Char ;
typedef int Bool ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*) ;

__attribute__((used)) static
Bool FUNC_2 ( Char* VAR_0 )
{
   FILE *VAR_1 = FUNC_1 ( VAR_0, "rb" );
   Bool VAR_2 = (VAR_1 != ((void*)0));
   if (VAR_1 != ((void*)0)) FUNC_0 ( VAR_1 );
   return VAR_2;
}
