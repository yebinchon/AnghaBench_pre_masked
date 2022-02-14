
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const*,int ,int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static MSIHANDLE FUNC_6(const WCHAR *VAR_3)
{
    MSIHANDLE VAR_4 = 0;
    UINT VAR_5;

    FUNC_0(VAR_2);


    VAR_5 = FUNC_2(VAR_3, VAR_1, &VAR_4 );
    FUNC_4( VAR_5 == VAR_0 , "Failed to create database\n" );
    if( VAR_5 != VAR_0 )
        return VAR_4;

    VAR_5 = FUNC_1( VAR_4 );
    FUNC_4( VAR_5 == VAR_0 , "Failed to commit database\n" );

    VAR_5 = FUNC_5(VAR_4);
    FUNC_4( VAR_5 == VAR_0 , "Failed to set summary info\n" );

    FUNC_3(VAR_4);

    return VAR_4;
}
