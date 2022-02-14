
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int dos ;
struct TYPE_5__ {scalar_t__ e_magic; scalar_t__ Signature; scalar_t__ e_lfanew; } ;
typedef TYPE_1__ IMAGE_NT_HEADERS ;
typedef TYPE_1__ IMAGE_DOS_HEADER ;
typedef int HANDLE ;
typedef scalar_t__ DWORD_PTR ;
typedef scalar_t__ DWORD64 ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,TYPE_1__*,int,int *) ;

BOOL FUNC_1(HANDLE VAR_2, DWORD64 VAR_3, IMAGE_NT_HEADERS* VAR_4)
{
    IMAGE_DOS_HEADER VAR_5;

    return FUNC_0(VAR_2, (char*)(DWORD_PTR)VAR_3, &VAR_5, sizeof(VAR_5), ((void*)0)) &&
        VAR_5.e_magic == VAR_0 &&
        FUNC_0(VAR_2, (char*)(DWORD_PTR)(VAR_3 + VAR_5.e_lfanew),
                          VAR_4, sizeof(*VAR_4), ((void*)0)) &&
        VAR_4->Signature == VAR_1;
}
