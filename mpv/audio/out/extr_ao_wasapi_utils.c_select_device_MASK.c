
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct mp_log {int dummy; } ;
struct device_desc {int deviceID; int name; int id; } ;
typedef int * LPWSTR ;


 int FUNC_0 (struct mp_log*,char*,int ,int ) ;
 int * FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static LPWSTR FUNC_3(struct mp_log *VAR_0, struct device_desc *VAR_1)
{
    if (!VAR_1)
        return ((void*)0);
    FUNC_0(VAR_0, "Selecting device \'%s\' (%s)\n", VAR_1->id, VAR_1->name);
    return FUNC_1(((void*)0), VAR_1->deviceID,
                         (FUNC_2(VAR_1->deviceID) + 1) * sizeof(wchar_t));
}
