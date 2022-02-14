
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ole_priv_data ;
typedef scalar_t__ DWORD_PTR ;
typedef int DVTARGETDEVICE ;



__attribute__((used)) static inline DVTARGETDEVICE *FUNC_0(ole_priv_data *VAR_0, DWORD_PTR VAR_1)
{
    if(VAR_1 == 0) return ((void*)0);
    return (DVTARGETDEVICE*)((char*)VAR_0 + VAR_1);
}
