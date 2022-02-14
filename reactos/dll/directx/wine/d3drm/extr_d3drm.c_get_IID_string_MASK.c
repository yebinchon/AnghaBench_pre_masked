
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int const*,int *) ;

__attribute__((used)) static const char* FUNC_1(const GUID* VAR_6)
{
    if (FUNC_0(VAR_6, &VAR_0))
        return "IID_IDirect3DRMFrame";
    else if (FUNC_0(VAR_6, &VAR_1))
        return "IID_IDirect3DRMFrame2";
    else if (FUNC_0(VAR_6, &VAR_2))
        return "IID_IDirect3DRMFrame3";
    else if (FUNC_0(VAR_6, &VAR_3))
        return "IID_IDirect3DRMMeshBuilder";
    else if (FUNC_0(VAR_6, &VAR_4))
        return "IID_IDirect3DRMMeshBuilder2";
    else if (FUNC_0(VAR_6, &VAR_5))
        return "IID_IDirect3DRMMeshBuilder3";

    return "?";
}
