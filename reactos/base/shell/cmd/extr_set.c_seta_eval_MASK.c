
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPCTSTR ;
typedef int INT ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int **,int *) ;

__attribute__((used)) static BOOL
FUNC_4(LPCTSTR VAR_4)
{
    INT VAR_5;
    if ( !*VAR_4 )
    {
        FUNC_0 ( VAR_1 );
        return VAR_0;
    }
    if ( !FUNC_3 ( &VAR_4, &VAR_5 ) )
        return VAR_0;
    if ( !VAR_3 )
        FUNC_1 ( FUNC_2("%i"), VAR_5 );
    return VAR_2;
}
