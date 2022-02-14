
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
            "CREATE TABLE `Signature` ("
            "`Signature` CHAR(72) NOT NULL, "
            "`FileName` CHAR(255) NOT NULL, "
            "`MinVersion` CHAR(20), "
            "`MaxVersion` CHAR(20), "
            "`MinSize` LONG, "
            "`MaxSize` LONG, "
            "`MinDate` LONG, "
            "`MaxDate` LONG, "
            "`Languages` CHAR(255) "
            "PRIMARY KEY `Signature`)" );
    FUNC_0(VAR_2 == VAR_0, "Failed to create Signature table: %u\n", VAR_2);
    return VAR_2;
}
