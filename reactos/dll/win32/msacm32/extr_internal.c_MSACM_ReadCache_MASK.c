
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cFormatTags; int * aFormatTag; int fdwSupport; int cFilterTags; } ;
typedef TYPE_1__* PWINE_ACMDRIVERID ;
typedef int * LPWSTR ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int *) ;
 int * FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *,int *) ;
 scalar_t__ FUNC_5 (int ,char*,int ,int*,void*,int*) ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_6(PWINE_ACMDRIVERID VAR_5)
{
    LPWSTR VAR_6 = FUNC_2(VAR_5);
    HKEY VAR_7;
    DWORD VAR_8, VAR_9;

    if (!VAR_6) return VAR_0;

    VAR_5->aFormatTag = ((void*)0);

    if (FUNC_4(VAR_2, VAR_6, &VAR_7))
 goto errCleanUp;

    VAR_9 = sizeof(VAR_5->cFormatTags);
    if (FUNC_5(VAR_7, "cFormatTags", 0, &VAR_8, (void*)&VAR_5->cFormatTags, &VAR_9))
 goto errCleanUp;
    VAR_9 = sizeof(VAR_5->cFilterTags);
    if (FUNC_5(VAR_7, "cFilterTags", 0, &VAR_8, (void*)&VAR_5->cFilterTags, &VAR_9))
 goto errCleanUp;
    VAR_9 = sizeof(VAR_5->fdwSupport);
    if (FUNC_5(VAR_7, "fdwSupport", 0, &VAR_8, (void*)&VAR_5->fdwSupport, &VAR_9))
 goto errCleanUp;

    if (VAR_5->cFormatTags > 0) {
 VAR_9 = VAR_5->cFormatTags * sizeof(VAR_5->aFormatTag[0]);
 VAR_5->aFormatTag = FUNC_0(VAR_3, VAR_1, VAR_9);
 if (!VAR_5->aFormatTag) goto errCleanUp;
 if (FUNC_5(VAR_7, "aFormatTagCache", 0, &VAR_8, (void*)VAR_5->aFormatTag, &VAR_9))
     goto errCleanUp;
    }
    FUNC_1(VAR_3, 0, VAR_6);
    return VAR_4;

 errCleanUp:
    FUNC_1(VAR_3, 0, VAR_6);
    FUNC_1(VAR_3, 0, VAR_5->aFormatTag);
    VAR_5->aFormatTag = ((void*)0);
    FUNC_3(VAR_7);
    return VAR_0;
}
