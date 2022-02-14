
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
            "CREATE TABLE `Dialog` ("
            "`Dialog` CHAR(72) NOT NULL, "
            "`HCentering` SHORT NOT NULL, "
            "`VCentering` SHORT NOT NULL, "
            "`Width` SHORT NOT NULL, "
            "`Height` SHORT NOT NULL, "
            "`Attributes` LONG, "
            "`Title` CHAR(128) LOCALIZABLE, "
            "`Control_First` CHAR(50) NOT NULL, "
            "`Control_Default` CHAR(50), "
            "`Control_Cancel` CHAR(50) "
            "PRIMARY KEY `Dialog`)");
    FUNC_0(VAR_2 == VAR_0, "Failed to create Dialog table: %u\n", VAR_2);
    return VAR_2;
}
