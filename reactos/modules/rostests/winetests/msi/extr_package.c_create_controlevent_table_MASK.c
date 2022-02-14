
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
    UINT VAR_2 = FUNC_1(VAR_1,
            "CREATE TABLE `ControlEvent` ("
            "`Dialog_` CHAR(72) NOT NULL, "
            "`Control_` CHAR(50) NOT NULL, "
            "`Event` CHAR(50) NOT NULL, "
            "`Argument` CHAR(255) NOT NULL, "
            "`Condition` CHAR(255), "
            "`Ordering` SHORT "
            "PRIMARY KEY `Dialog_`, `Control_`, `Event`, `Argument`, `Condition`)");
    FUNC_0(VAR_2 == VAR_0, "Failed to create ControlEvent table: %u\n", VAR_2);
    return VAR_2;
}
