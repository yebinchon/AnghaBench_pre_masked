
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,char*,int *) ;

__attribute__((used)) static DWORD FUNC_1(void)
{
    DWORD VAR_3;

    if (FUNC_0(VAR_1, "Control Panel\\Desktop", "LogPixels", &VAR_3))
        return VAR_3;
    if (FUNC_0(VAR_0, "Software\\Fonts", "LogPixels", &VAR_3))
        return VAR_3;
    return VAR_2;
}
