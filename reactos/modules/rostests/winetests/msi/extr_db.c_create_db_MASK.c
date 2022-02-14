
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static MSIHANDLE FUNC_4(void)
{
    MSIHANDLE VAR_3 = 0;
    UINT VAR_4;

    FUNC_0(VAR_2);


    VAR_4 = FUNC_2(VAR_2, VAR_1, &VAR_3 );
    FUNC_3( VAR_4 == VAR_0 , "Failed to create database\n" );
    if( VAR_4 != VAR_0 )
        return VAR_3;

    VAR_4 = FUNC_1( VAR_3 );
    FUNC_3( VAR_4 == VAR_0 , "Failed to commit database\n" );

    return VAR_3;
}
