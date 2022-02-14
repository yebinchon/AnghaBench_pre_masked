
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tid; int refs; int oidc; int multi_threaded; int oxid; int entry; int cs; int remunk_exported; scalar_t__ ipidc; int loaded_dlls; int stubmgrs; int proxies; } ;
typedef int OXID ;
typedef int DWORD ;
typedef TYPE_1__ APARTMENT ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 TYPE_1__* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;
 int VAR_3 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;

__attribute__((used)) static APARTMENT *FUNC_10(DWORD VAR_4)
{
    APARTMENT *VAR_5;

    FUNC_6("creating new apartment, model=%d\n", VAR_4);

    VAR_5 = FUNC_4(FUNC_3(), VAR_2, sizeof(*VAR_5));
    VAR_5->tid = FUNC_2();

    FUNC_8(&VAR_5->proxies);
    FUNC_8(&VAR_5->stubmgrs);
    FUNC_8(&VAR_5->loaded_dlls);
    VAR_5->ipidc = 0;
    VAR_5->refs = 1;
    VAR_5->remunk_exported = VAR_1;
    VAR_5->oidc = 1;
    FUNC_5(&VAR_5->cs);
    FUNC_0(&VAR_5->cs, "apartment");

    VAR_5->multi_threaded = !(VAR_4 & VAR_0);

    if (VAR_5->multi_threaded)
    {

        VAR_5->oxid = ((OXID)FUNC_1() << 32) | 0xcafe;
    }
    else
    {

        VAR_5->oxid = ((OXID)FUNC_1() << 32) | FUNC_2();
    }

    FUNC_6("Created apartment on OXID %s\n", FUNC_9(VAR_5->oxid));

    FUNC_7(&VAR_3, &VAR_5->entry);

    return VAR_5;
}
