
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,char*) ;

__attribute__((used)) static UINT FUNC_2( MSIHANDLE VAR_1 )
{
    UINT VAR_2 = FUNC_1( VAR_1,
            "CREATE TABLE `Feature` ( "
            "`Feature` CHAR(38) NOT NULL, "
            "`Feature_Parent` CHAR(38), "
            "`Title` CHAR(64), "
            "`Description` CHAR(255), "
            "`Display` SHORT NOT NULL, "
            "`Level` SHORT NOT NULL, "
            "`Directory_` CHAR(72), "
            "`Attributes` SHORT NOT NULL "
            "PRIMARY KEY `Feature`)" );
    FUNC_0(VAR_2 == VAR_0, "Failed to create Feature table: %u\n", VAR_2);
    return VAR_2;
}
