
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enumerator {int log; int pDevices; } ;
struct device_desc {int dummy; } ;
typedef int UINT ;
typedef int IMMDevice ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (struct enumerator*,char*,int ,int ) ;
 int FUNC_3 (int *) ;
 struct device_desc* FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static struct device_desc *FUNC_6(struct enumerator *VAR_0, UINT VAR_1)
{
    IMMDevice *VAR_2 = ((void*)0);
    HRESULT VAR_3 = FUNC_1(VAR_0->pDevices, VAR_1, &VAR_2);
    if (FUNC_0(VAR_3)) {
        FUNC_2(VAR_0, "Failed getting device #%d: %s\n", VAR_1, FUNC_5(VAR_3));
        return ((void*)0);
    }
    struct device_desc *VAR_4 = FUNC_4(VAR_0->log, VAR_2);
    FUNC_3(VAR_2);
    return VAR_4;
}
