
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ipidRemUnknown; } ;
struct proxy_manager {int sorflags; int cs; int * remunk; TYPE_4__ oxid_info; int dest_context_data; int dest_context; int oxid; TYPE_1__* parent; } ;
struct apartment {scalar_t__ oxid; } ;
struct TYPE_6__ {int flags; int cPublicRefs; int ipid; scalar_t__ oid; int oxid; } ;
struct TYPE_5__ {scalar_t__ oxid; } ;
typedef TYPE_2__ STDOBJREF ;
typedef scalar_t__ OID ;
typedef int IRemUnknown ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,int *,scalar_t__) ;
 struct apartment* FUNC_4 () ;
 int FUNC_5 (struct apartment*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,struct apartment*,int ,int ,int *,TYPE_4__*,void**) ;

__attribute__((used)) static HRESULT FUNC_7(struct proxy_manager * VAR_6, IRemUnknown **VAR_7)
{
    HRESULT VAR_8 = VAR_5;
    struct apartment *VAR_9;
    BOOL VAR_10;



    if (VAR_6->sorflags & VAR_2)
        return VAR_4;

    if (!(VAR_9 = FUNC_4()))
        return VAR_0;

    VAR_10 = VAR_6->parent && (VAR_6->parent->oxid == VAR_9->oxid);

    FUNC_0(&VAR_6->cs);



    if (VAR_6->remunk && VAR_10)
    {

        *VAR_7 = VAR_6->remunk;
        FUNC_1(*VAR_7);
    }
    else if (!VAR_6->parent)
    {

        *VAR_7 = ((void*)0);
        VAR_8 = VAR_4;
    }
    else
    {
        STDOBJREF VAR_11;


        VAR_11.flags = VAR_2 | VAR_3;
        VAR_11.cPublicRefs = 1;

        VAR_11.oxid = VAR_6->oxid;

        VAR_11.oid = (OID)-1;
        VAR_11.ipid = VAR_6->oxid_info.ipidRemUnknown;


        VAR_8 = FUNC_6(&VAR_11, VAR_9, VAR_6->dest_context,
                              VAR_6->dest_context_data, &VAR_1,
                              &VAR_6->oxid_info, (void**)VAR_7);
        if (VAR_8 == VAR_5 && VAR_10)
        {
            VAR_6->remunk = *VAR_7;
            FUNC_1(VAR_6->remunk);
        }
    }
    FUNC_2(&VAR_6->cs);
    FUNC_5(VAR_9);

    FUNC_3("got IRemUnknown* pointer %p, hr = 0x%08x\n", *VAR_7, VAR_8);

    return VAR_8;
}
