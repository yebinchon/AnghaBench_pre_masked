
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;
 int VAR_3 ;

int FUNC_5 ( int VAR_4, char** VAR_5 )
{
   int VAR_6, VAR_7, VAR_8;
   FUNC_4(1);
   FUNC_3 ( VAR_3, VAR_2, VAR_1 );
   for (VAR_7 = 0; VAR_7 < VAR_0 * 515; VAR_7+=3) {
      VAR_8 = 25+FUNC_2()%50;
      for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++)
         FUNC_1 ( "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" );
      for (VAR_6 = 0; VAR_6 < VAR_8-1; VAR_6++)
         FUNC_1 ( "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb" );
      for (VAR_6 = 0; VAR_6 < VAR_8+1; VAR_6++)
         FUNC_1 ( "ccccccccccccccccccccccccccccccccccccc" );
   }
   FUNC_0(VAR_3);
   return 0;
}
