
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (char const*,size_t*) ;
 int FUNC_3 (void*,size_t) ;
 int VAR_0 ;

int
FUNC_4 ( const char* VAR_1, size_t VAR_2 )
{
 void* VAR_3;
 size_t VAR_4;
 int VAR_5 = 1;

 VAR_3 = FUNC_2 ( VAR_1, &VAR_4 );
 if ( !VAR_3 )
 {
  FUNC_0 ( VAR_0, "An error occured loading '%s'\n", VAR_1 );
 }
 else
 {
  VAR_5 = FUNC_3 ( VAR_3, VAR_2 );
  FUNC_1 ( VAR_3 );
 }

 return VAR_5;
}
