
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCSTR ;
typedef int HKEY ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int ,int *) ;
 int FUNC_2 (int ,char* const*) ;

__attribute__((used)) static BOOL FUNC_3(void)
{
    static const LPCSTR VAR_4[] = { "Scsi Port ", "Scsi Bus ", "Target Id ", "Logical Unit Id ", ((void*)0) };
    HKEY VAR_5;
    BOOL VAR_6 = VAR_1;

    if (FUNC_1(VAR_2, "HARDWARE\\DEVICEMAP\\Scsi", 0, VAR_3, &VAR_5) != VAR_0)
        return VAR_1;

    VAR_6 = FUNC_2(VAR_5, VAR_4);

    FUNC_0(VAR_5);

    return VAR_6;
}
