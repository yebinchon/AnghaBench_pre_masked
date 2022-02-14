
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
            "CREATE TABLE `Control` ("
            "`Dialog_` CHAR(72) NOT NULL, "
            "`Control` CHAR(50) NOT NULL, "
            "`Type` CHAR(20) NOT NULL, "
            "`X` SHORT NOT NULL, "
            "`Y` SHORT NOT NULL, "
            "`Width` SHORT NOT NULL, "
            "`Height` SHORT NOT NULL, "
            "`Attributes` LONG, "
            "`Property` CHAR(50), "
            "`Text` CHAR(0) LOCALIZABLE, "
            "`Control_Next` CHAR(50), "
            "`Help` CHAR(255) LOCALIZABLE "
            "PRIMARY KEY `Dialog_`, `Control`)");
    FUNC_0(VAR_2 == VAR_0, "Failed to create Control table: %u\n", VAR_2);
    return VAR_2;
}
