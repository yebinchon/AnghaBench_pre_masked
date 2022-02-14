
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
 int VAR_3 ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static MSIHANDLE FUNC_6(void)
{
    MSIHANDLE VAR_4 = 0;
    UINT VAR_5;

    FUNC_0(VAR_2);


    VAR_5 = FUNC_2(VAR_3, VAR_1, &VAR_4 );
    FUNC_3( VAR_5 == VAR_0 , "Failed to create database %u\n", VAR_5 );
    if( VAR_5 != VAR_0 )
        return VAR_4;

    VAR_5 = FUNC_1( VAR_4 );
    FUNC_3( VAR_5 == VAR_0 , "Failed to commit database\n" );

    VAR_5 = FUNC_5(VAR_4);
    FUNC_3( VAR_5 == VAR_0, "Expected ERROR_SUCCESS got %d\n", VAR_5);

    VAR_5 = FUNC_4( VAR_4,
            "CREATE TABLE `Directory` ( "
            "`Directory` CHAR(255) NOT NULL, "
            "`Directory_Parent` CHAR(255), "
            "`DefaultDir` CHAR(255) NOT NULL "
            "PRIMARY KEY `Directory`)" );
    FUNC_3( VAR_5 == VAR_0 , "Failed to create directory table\n" );

    return VAR_4;
}
