
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (char*,size_t) ;
 int VAR_0 ;

int FUNC_6 ( int VAR_1, const char** VAR_2 )
{
 char* VAR_3;
 size_t VAR_4;
 int VAR_5;

 if ( VAR_1 != 3 )
 {
  FUNC_2(VAR_0, "Usage: raddr2line <exefile> <offset>\n");
  FUNC_1(1);
 }

 VAR_3 = FUNC_0 ( VAR_2[1] );
 VAR_4 = FUNC_4 ( VAR_2[2] );

 VAR_5 = FUNC_5 ( VAR_3, VAR_4 );

 FUNC_3 ( VAR_3 );

 return VAR_5;
}
