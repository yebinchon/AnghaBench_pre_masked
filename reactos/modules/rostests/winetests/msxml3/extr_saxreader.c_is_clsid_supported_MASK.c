
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msxmlsupported_data_t {int supported; int const* clsid; } ;
typedef int GUID ;
typedef int BOOL ;


 int VAR_0 ;

__attribute__((used)) static BOOL FUNC_0(const GUID *VAR_1, const struct msxmlsupported_data_t *VAR_2)
{
    while (VAR_2->clsid)
    {
        if (VAR_2->clsid == VAR_1) return VAR_2->supported;
        VAR_2++;
    }
    return VAR_0;
}
