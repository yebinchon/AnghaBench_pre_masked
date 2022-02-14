
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOARD ;


 int FUNC_0 (int *,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1( BOARD *VAR_0, unsigned VAR_1, unsigned VAR_2 )
{
    int VAR_3, VAR_4;

    for( VAR_3 = -1; VAR_3 <= 1; VAR_3++ )
      for( VAR_4 = -1; VAR_4 <= 1; VAR_4++ ) {
        FUNC_0( VAR_0, VAR_1 + VAR_3, VAR_2 + VAR_4 );
      }
}
