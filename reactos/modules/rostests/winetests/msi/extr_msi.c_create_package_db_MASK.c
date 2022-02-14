
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef char* LPSTR ;
typedef char CHAR ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char*,char*) ;

__attribute__((used)) static MSIHANDLE FUNC_7(LPSTR VAR_5)
{
    MSIHANDLE VAR_6 = 0;
    CHAR VAR_7[VAR_1];
    UINT VAR_8;

    FUNC_0(VAR_3);


    VAR_8 = FUNC_2(VAR_4, VAR_2, &VAR_6);
    FUNC_3( VAR_8 == VAR_0 , "Failed to create database\n" );
    if (VAR_8 != VAR_0)
        return VAR_6;

    VAR_8 = FUNC_1(VAR_6);
    FUNC_3(VAR_8 == VAR_0, "Failed to commit database\n");

    FUNC_5(VAR_6, VAR_5);

    VAR_8 = FUNC_4(VAR_6,
            "CREATE TABLE `Directory` ( "
            "`Directory` CHAR(255) NOT NULL, "
            "`Directory_Parent` CHAR(255), "
            "`DefaultDir` CHAR(255) NOT NULL "
            "PRIMARY KEY `Directory`)");
    FUNC_3(VAR_8 == VAR_0 , "Failed to create directory table\n");

    VAR_8 = FUNC_4(VAR_6,
            "CREATE TABLE `Property` ( "
            "`Property` CHAR(72) NOT NULL, "
            "`Value` CHAR(255) "
            "PRIMARY KEY `Property`)");
    FUNC_3(VAR_8 == VAR_0 , "Failed to create directory table\n");

    FUNC_6(VAR_7, "INSERT INTO `Property` "
            "(`Property`, `Value`) "
            "VALUES( 'ProductCode', '%s' )", VAR_5);
    VAR_8 = FUNC_4(VAR_6, VAR_7);
    FUNC_3(VAR_8 == VAR_0 , "Failed\n");

    VAR_8 = FUNC_1(VAR_6);
    FUNC_3(VAR_8 == VAR_0, "Failed to commit database\n");

    return VAR_6;
}
