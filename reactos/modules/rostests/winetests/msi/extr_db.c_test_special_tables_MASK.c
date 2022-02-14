
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int ,int ,char const*) ;

__attribute__((used)) static void FUNC_4(void)
{
    const char *VAR_4;
    MSIHANDLE VAR_5 = 0;
    UINT VAR_6;

    VAR_6 = FUNC_1(VAR_3, VAR_2, &VAR_5);
    FUNC_2(VAR_6 == VAR_1, "MsiOpenDatabase failed\n");

    VAR_4 = "CREATE TABLE `_Properties` ( "
        "`foo` INT NOT NULL, `bar` INT LOCALIZABLE PRIMARY KEY `foo`)";
    VAR_6 = FUNC_3(VAR_5, 0, VAR_4);
    FUNC_2(VAR_6 == VAR_1, "failed to create table\n");

    VAR_4 = "CREATE TABLE `_Storages` ( "
        "`foo` INT NOT NULL, `bar` INT LOCALIZABLE PRIMARY KEY `foo`)";
    VAR_6 = FUNC_3(VAR_5, 0, VAR_4);
    FUNC_2(VAR_6 == VAR_0, "created _Streams table\n");

    VAR_4 = "CREATE TABLE `_Streams` ( "
        "`foo` INT NOT NULL, `bar` INT LOCALIZABLE PRIMARY KEY `foo`)";
    VAR_6 = FUNC_3(VAR_5, 0, VAR_4);
    FUNC_2(VAR_6 == VAR_0, "created _Streams table\n");

    VAR_4 = "CREATE TABLE `_Tables` ( "
        "`foo` INT NOT NULL, `bar` INT LOCALIZABLE PRIMARY KEY `foo`)";
    VAR_6 = FUNC_3(VAR_5, 0, VAR_4);
    FUNC_2(VAR_6 == VAR_0, "created _Tables table\n");

    VAR_4 = "CREATE TABLE `_Columns` ( "
        "`foo` INT NOT NULL, `bar` INT LOCALIZABLE PRIMARY KEY `foo`)";
    VAR_6 = FUNC_3(VAR_5, 0, VAR_4);
    FUNC_2(VAR_6 == VAR_0, "created _Columns table\n");

    VAR_6 = FUNC_0(VAR_5);
    FUNC_2(VAR_6 == VAR_1, "MsiCloseHandle failed\n");
}
