
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_28__ {int * lpVtbl; } ;
struct TYPE_27__ {int * lpVtbl; } ;
struct TYPE_26__ {int * lpVtbl; } ;
struct TYPE_25__ {int * lpVtbl; } ;
struct TYPE_24__ {int * lpVtbl; } ;
struct TYPE_23__ {int * lpVtbl; } ;
struct TYPE_22__ {int * lpVtbl; } ;
struct TYPE_21__ {int * lpVtbl; } ;
struct TYPE_20__ {int * lpVtbl; } ;
struct TYPE_19__ {TYPE_9__ IHTMLDocument2_iface; int cp_container; int task_magic; int * dispex; int * unk_impl; TYPE_8__ IProvideClassInfo_iface; TYPE_7__ ISupportErrorInfo_iface; TYPE_6__ IDispatchEx_iface; TYPE_5__ IHTMLDocument7_iface; TYPE_4__ IHTMLDocument6_iface; TYPE_3__ IHTMLDocument5_iface; TYPE_2__ IHTMLDocument4_iface; TYPE_1__ IHTMLDocument3_iface; } ;
typedef int IUnknown ;
typedef int IDispatchEx ;
typedef TYPE_10__ HTMLDocument ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_10__*) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (TYPE_10__*) ;
 int FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (TYPE_10__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(HTMLDocument *VAR_10, IUnknown *VAR_11, IDispatchEx *VAR_12)
{
    VAR_10->IHTMLDocument2_iface.lpVtbl = &VAR_6;
    VAR_10->IHTMLDocument3_iface.lpVtbl = &VAR_1;
    VAR_10->IHTMLDocument4_iface.lpVtbl = &VAR_2;
    VAR_10->IHTMLDocument5_iface.lpVtbl = &VAR_3;
    VAR_10->IHTMLDocument6_iface.lpVtbl = &VAR_4;
    VAR_10->IHTMLDocument7_iface.lpVtbl = &VAR_5;
    VAR_10->IDispatchEx_iface.lpVtbl = &VAR_0;
    VAR_10->ISupportErrorInfo_iface.lpVtbl = &VAR_9;
    VAR_10->IProvideClassInfo_iface.lpVtbl = &VAR_8;

    VAR_10->unk_impl = VAR_11;
    VAR_10->dispex = VAR_12;
    VAR_10->task_magic = FUNC_8();

    FUNC_4(VAR_10);
    FUNC_2(VAR_10);
    FUNC_3(VAR_10);
    FUNC_6(VAR_10);
    FUNC_7(VAR_10);
    FUNC_5(VAR_10);
    FUNC_1(VAR_10);

    FUNC_0(&VAR_10->cp_container, (IUnknown*)&VAR_10->IHTMLDocument2_iface, VAR_7);
}
