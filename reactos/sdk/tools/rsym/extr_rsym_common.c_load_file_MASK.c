
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (void*,int,size_t,int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,long,int ) ;
 size_t FUNC_5 (int *) ;
 void* FUNC_6 (size_t) ;

void*
FUNC_7 ( const char* VAR_2, size_t* VAR_3 )
{
 FILE* VAR_4;
 void* VAR_5 = ((void*)0);

 VAR_4 = FUNC_1 ( VAR_2, "rb" );
 if (VAR_4 != ((void*)0))
 {
  FUNC_4(VAR_4, 0L, VAR_0);
  *VAR_3 = FUNC_5(VAR_4);
  FUNC_4(VAR_4, 0L, VAR_1);
  VAR_5 = FUNC_6(*VAR_3);
  if (VAR_5 != ((void*)0))
  {
   if ( *VAR_3 != FUNC_2(VAR_5, 1, *VAR_3, VAR_4) )
   {
    FUNC_3(VAR_5);
    VAR_5 = ((void*)0);
   }
  }
  FUNC_0(VAR_4);
 }
 return VAR_5;
}
