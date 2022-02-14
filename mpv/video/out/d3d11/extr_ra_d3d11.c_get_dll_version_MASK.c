
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dll_version {void* revision; void* build; void* minor; void* major; int member_0; } ;
struct TYPE_2__ {int dwFileVersionLS; int dwFileVersionMS; } ;
typedef TYPE_1__ VS_FIXEDFILEINFO ;
typedef int UINT ;
typedef int HRSRC ;
typedef int HMODULE ;
typedef int HGLOBAL ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (void*,char*,void**,int*) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (void*,void*,int ) ;
 void* FUNC_10 (int *) ;

__attribute__((used)) static struct dll_version FUNC_11(HMODULE VAR_2)
{
    void *VAR_3 = FUNC_10(((void*)0));
    struct dll_version VAR_4 = { 0 };

    HRSRC VAR_5 = FUNC_0(VAR_2, FUNC_5(VAR_1),
                               FUNC_5(VAR_0));
    if (!VAR_5)
        goto done;
    DWORD VAR_6 = FUNC_6(VAR_2, VAR_5);
    HGLOBAL VAR_7 = FUNC_3(VAR_2, VAR_5);
    if (!VAR_7)
        goto done;
    void *VAR_8 = FUNC_4(VAR_7);
    if (!VAR_8)
        goto done;
    void *VAR_9 = FUNC_9(VAR_3, VAR_8, VAR_6);

    VS_FIXEDFILEINFO *VAR_10;
    UINT VAR_11;
    if (!FUNC_7(VAR_9, L"\\", (void**)&VAR_10, &VAR_11))
        goto done;
    if (VAR_11 < sizeof(*VAR_10))
        goto done;

    VAR_4.major = FUNC_1(VAR_10->dwFileVersionMS);
    VAR_4.minor = FUNC_2(VAR_10->dwFileVersionMS);
    VAR_4.build = FUNC_1(VAR_10->dwFileVersionLS);
    VAR_4.revision = FUNC_2(VAR_10->dwFileVersionLS);

done:
    FUNC_8(VAR_3);
    return VAR_4;
}
