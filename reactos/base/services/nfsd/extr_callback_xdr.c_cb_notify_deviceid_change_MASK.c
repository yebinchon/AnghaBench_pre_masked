
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct notify_deviceid4 {int immediate; scalar_t__ deviceid; int layouttype; } ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,char*,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_4(XDR *VAR_1, struct notify_deviceid4 *VAR_2)
{
    bool_t VAR_3;

    VAR_3 = FUNC_3(VAR_1, (uint32_t*)&VAR_2->layouttype);
    if (!VAR_3) { FUNC_0("notify_deviceid.change.layouttype"); goto out; }

    VAR_3 = FUNC_2(VAR_1, (char*)VAR_2->deviceid, VAR_0);
    if (!VAR_3) { FUNC_0("notify_deviceid.change.deviceid"); goto out; }

    VAR_3 = FUNC_1(VAR_1, &VAR_2->immediate);
    if (!VAR_3) { FUNC_0("notify_deviceid.change.immediate"); goto out; }
out:
    return VAR_3;
}
