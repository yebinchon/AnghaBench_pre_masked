
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proxy_manager {int cs; int interfaces; int IMultiQI_iface; } ;
struct TYPE_3__ {int cPublicRefs; int ipid; } ;
struct ifproxy {int entry; int * chan; int * proxy; int * iface; scalar_t__ refs; int iid; TYPE_1__ stdobjref; struct proxy_manager* parent; } ;
typedef TYPE_1__ STDOBJREF ;
typedef int * REFIID ;
typedef int IUnknown ;
typedef int IRpcChannelBuffer ;
typedef int IPSFactoryBuffer ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 struct ifproxy* FUNC_3 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,int *,int **,int **) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (char*,struct ifproxy*,int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int **) ;
 int FUNC_14 (struct ifproxy*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static HRESULT FUNC_17(
    struct proxy_manager * VAR_3, const STDOBJREF *VAR_4, REFIID VAR_5,
    IRpcChannelBuffer * VAR_6, struct ifproxy ** VAR_7)
{
    HRESULT VAR_8;
    IPSFactoryBuffer * VAR_9;
    struct ifproxy * VAR_10 = FUNC_3(FUNC_2(), 0, sizeof(*VAR_10));
    if (!VAR_10) return VAR_0;

    FUNC_16(&VAR_10->entry);

    VAR_10->parent = VAR_3;
    VAR_10->stdobjref = *VAR_4;
    VAR_10->iid = *VAR_5;
    VAR_10->refs = 0;
    VAR_10->proxy = ((void*)0);

    FUNC_11(VAR_6);
    VAR_10->chan = VAR_6;



    if (FUNC_8(VAR_5, &VAR_1))
    {
        VAR_10->iface = &VAR_3->IMultiQI_iface;
        FUNC_4(&VAR_3->IMultiQI_iface);
        VAR_8 = VAR_2;
    }
    else
    {
        VAR_8 = FUNC_13(VAR_5, &VAR_9);
        if (VAR_8 == VAR_2)
        {




            VAR_8 = FUNC_5(VAR_9, (IUnknown*)&VAR_3->IMultiQI_iface, VAR_5,
                                              &VAR_10->proxy, &VAR_10->iface);
            FUNC_6(VAR_9);
            if (VAR_8 != VAR_2)
                FUNC_0("Could not create proxy for interface %s, error 0x%08x\n",
                    FUNC_12(VAR_5), VAR_8);
        }
        else
            FUNC_0("Could not get IPSFactoryBuffer for interface %s, error 0x%08x\n",
                FUNC_12(VAR_5), VAR_8);

        if (VAR_8 == VAR_2)
            VAR_8 = FUNC_7(VAR_10->proxy, VAR_10->chan);
    }

    if (VAR_8 == VAR_2)
    {
        FUNC_1(&VAR_3->cs);
        FUNC_15(&VAR_3->interfaces, &VAR_10->entry);
        FUNC_9(&VAR_3->cs);

        *VAR_7 = VAR_10;
        FUNC_10("ifproxy %p created for IPID %s, interface %s with %u public refs\n",
              VAR_10, FUNC_12(&VAR_4->ipid), FUNC_12(VAR_5), VAR_4->cPublicRefs);
    }
    else
        FUNC_14(VAR_10);

    return VAR_8;
}
