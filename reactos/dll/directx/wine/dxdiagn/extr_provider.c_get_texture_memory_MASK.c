
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dwCaps4; } ;
struct TYPE_5__ {int dwCaps; TYPE_1__ u1; scalar_t__ dwCaps3; scalar_t__ dwCaps2; } ;
typedef int IDirectDraw7 ;
typedef int HRESULT ;
typedef int GUID ;
typedef int DWORD ;
typedef TYPE_2__ DDSCAPS2 ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void**,int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*,int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_4(GUID *VAR_5, DWORD *VAR_6)
{
    IDirectDraw7 *VAR_7;
    HRESULT VAR_8;
    DDSCAPS2 VAR_9;

    VAR_8 = FUNC_0(VAR_5, (void **)&VAR_7, &VAR_3, ((void*)0));
    if (FUNC_3(VAR_8))
    {
        VAR_9.dwCaps = VAR_0 | VAR_1;
        VAR_9.dwCaps2 = VAR_9.dwCaps3 = VAR_9.u1.dwCaps4 = 0;
        VAR_8 = FUNC_1(VAR_7, &VAR_9, VAR_6, ((void*)0));
        FUNC_2(VAR_7);
        if (FUNC_3(VAR_8))
            return VAR_4;
    }

    return VAR_2;
}
