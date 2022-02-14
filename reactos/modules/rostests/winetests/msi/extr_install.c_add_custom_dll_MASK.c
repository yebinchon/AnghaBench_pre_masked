
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_6 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    MSIHANDLE VAR_4 = 0, VAR_5;
    UINT VAR_6;

    VAR_6 = FUNC_3(VAR_3, VAR_1, &VAR_4);
    FUNC_5(VAR_6 == VAR_0, "failed to open db: %u\n", VAR_6);

    VAR_6 = FUNC_6(VAR_4, 0, "CREATE TABLE `Binary` (`Name` CHAR(72) NOT NULL, `Data` OBJECT NOT NULL PRIMARY KEY `Name`)");
    FUNC_5(VAR_6 == VAR_0, "failed to create Binary table: %u\n", VAR_6);

    VAR_5 = FUNC_1(1);
    VAR_6 = FUNC_4(VAR_5, 1, VAR_2);
    FUNC_5(VAR_6 == VAR_0, "failed to add %s to stream: %u\n", VAR_2, VAR_6);

    VAR_6 = FUNC_6(VAR_4, VAR_5, "INSERT INTO `Binary` (`Name`, `Data`) VALUES ('custom.dll', ?)");
    FUNC_5(VAR_6 == VAR_0, "failed to insert into Binary table: %u\n", VAR_6);

    VAR_6 = FUNC_2(VAR_4);
    FUNC_5(VAR_6 == VAR_0, "failed to commit database: %u\n", VAR_6);

    FUNC_0(VAR_5);
    FUNC_0(VAR_4);
}
