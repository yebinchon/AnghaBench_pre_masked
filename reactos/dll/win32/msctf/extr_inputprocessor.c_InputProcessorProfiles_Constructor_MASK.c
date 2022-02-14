
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_9__ {int refCount; TYPE_3__ ITfInputProcessorProfiles_iface; int LanguageProfileNotifySink; int currentLanguage; TYPE_2__ ITfInputProcessorProfileMgr_iface; TYPE_1__ ITfSource_iface; } ;
typedef TYPE_4__ InputProcessorProfiles ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 TYPE_4__* FUNC_2 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int *) ;

HRESULT FUNC_5(IUnknown *VAR_7, IUnknown **VAR_8)
{
    InputProcessorProfiles *VAR_9;
    if (VAR_7)
        return VAR_0;

    VAR_9 = FUNC_2(FUNC_0(),VAR_2,sizeof(InputProcessorProfiles));
    if (VAR_9 == ((void*)0))
        return VAR_1;

    VAR_9->ITfInputProcessorProfiles_iface.lpVtbl= &VAR_5;
    VAR_9->ITfSource_iface.lpVtbl = &VAR_4;
    VAR_9->ITfInputProcessorProfileMgr_iface.lpVtbl = &VAR_3;
    VAR_9->refCount = 1;
    VAR_9->currentLanguage = FUNC_1();

    FUNC_4(&VAR_9->LanguageProfileNotifySink);

    *VAR_8 = (IUnknown *)&VAR_9->ITfInputProcessorProfiles_iface;
    FUNC_3("returning %p\n", *VAR_8);
    return VAR_6;
}
