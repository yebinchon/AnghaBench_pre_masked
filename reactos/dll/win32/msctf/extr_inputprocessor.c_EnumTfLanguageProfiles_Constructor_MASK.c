
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_8__ {int refCount; int tipkey; int catmgr; int langid; TYPE_1__ IEnumTfLanguageProfiles_iface; } ;
typedef int LANGID ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef TYPE_2__ EnumTfLanguageProfiles ;


 int FUNC_0 (int *,int **) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int ,int ,int ,int *,int ,int,int *,int *,int *) ;
 int VAR_8 ;
 int FUNC_6 (char*,TYPE_2__*) ;
 int VAR_9 ;

__attribute__((used)) static HRESULT FUNC_7(LANGID VAR_10, EnumTfLanguageProfiles **VAR_11)
{
    HRESULT VAR_12;
    EnumTfLanguageProfiles *VAR_13;

    VAR_13 = FUNC_3(FUNC_2(),VAR_4,sizeof(EnumTfLanguageProfiles));
    if (VAR_13 == ((void*)0))
        return VAR_2;

    VAR_13->IEnumTfLanguageProfiles_iface.lpVtbl= &VAR_3;
    VAR_13->refCount = 1;
    VAR_13->langid = VAR_10;

    VAR_12 = FUNC_0(((void*)0),(IUnknown**)&VAR_13->catmgr);
    if (FUNC_1(VAR_12))
    {
        FUNC_4(FUNC_2(),0,VAR_13);
        return VAR_12;
    }

    if (FUNC_5(VAR_5, VAR_9, 0, ((void*)0), 0,
                    VAR_6 | VAR_7, ((void*)0), &VAR_13->tipkey, ((void*)0)) != VAR_0)
    {
        FUNC_4(FUNC_2(), 0, VAR_13);
        return VAR_1;
    }

    *VAR_11 = VAR_13;
    FUNC_6("returning %p\n", *VAR_11);
    return VAR_8;
}
