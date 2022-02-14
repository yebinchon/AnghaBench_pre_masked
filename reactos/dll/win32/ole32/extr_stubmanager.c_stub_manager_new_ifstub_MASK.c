
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ipidRemUnknown; } ;
struct stub_manager {int lock; int norm_refs; int ifstubs; TYPE_1__ oxid_info; int object; int oid; } ;
struct ifstub {int flags; int ipid; int entry; int iid; int * stubbuffer; int iface; int chan; } ;
typedef int * REFIID ;
typedef int MSHLFLAGS ;
typedef int IRpcStubBuffer ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 struct ifstub* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,struct ifstub*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *,void**) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int ,void*,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (char*,struct ifstub*,int ,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct stub_manager*,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int ) ;

struct ifstub *FUNC_14(struct stub_manager *VAR_4, IRpcStubBuffer *VAR_5, REFIID VAR_6, DWORD VAR_7,
    void *VAR_8, MSHLFLAGS VAR_9)
{
    struct ifstub *VAR_10;
    HRESULT VAR_11;

    FUNC_9("oid=%s, stubbuffer=%p, iid=%s, dest_context=%x\n", FUNC_13(VAR_4->oid), *VAR_5,
          FUNC_10(VAR_6), VAR_7);

    VAR_10 = FUNC_2(FUNC_1(), VAR_0, sizeof(struct ifstub));
    if (!VAR_10) return ((void*)0);

    VAR_11 = FUNC_5(VAR_4->object, VAR_6, (void **)&VAR_10->iface);
    if (VAR_11 != VAR_3)
    {
        FUNC_3(FUNC_1(), 0, VAR_10);
        return ((void*)0);
    }

    VAR_11 = FUNC_8(VAR_7, VAR_8, &VAR_10->chan);
    if (VAR_11 != VAR_3)
    {
        FUNC_6(VAR_10->iface);
        FUNC_3(FUNC_1(), 0, VAR_10);
        return ((void*)0);
    }

    VAR_10->stubbuffer = VAR_5;
    if (VAR_5) FUNC_4(VAR_5);

    VAR_10->flags = VAR_9;
    VAR_10->iid = *VAR_6;



    if (VAR_9 & VAR_1)
        VAR_10->ipid = VAR_4->oxid_info.ipidRemUnknown;
    else
        FUNC_11(VAR_4, &VAR_10->ipid);

    FUNC_0(&VAR_4->lock);
    FUNC_12(&VAR_4->ifstubs, &VAR_10->entry);

    if (VAR_9 & VAR_2) VAR_4->norm_refs++;
    FUNC_7(&VAR_4->lock);

    FUNC_9("ifstub %p created with ipid %s\n", VAR_10, FUNC_10(&VAR_10->ipid));

    return VAR_10;
}
