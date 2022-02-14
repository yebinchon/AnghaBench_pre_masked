
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MSIHANDLE ;
typedef int LPCSTR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static UINT FUNC_4( MSIHANDLE VAR_0, LPCSTR VAR_1 )
{
    MSIHANDLE VAR_2 = 0;
    UINT VAR_3;

    VAR_2 = FUNC_1( 1 );
    FUNC_2( VAR_2, 1, "Hello");

    VAR_3 = FUNC_3( VAR_0, VAR_1, VAR_2 );

    FUNC_0( VAR_2 );
    return VAR_3;
}
