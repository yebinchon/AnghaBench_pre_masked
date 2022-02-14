
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ipid; } ;
struct ifproxy {TYPE_3__* parent; int refs; TYPE_1__ stdobjref; } ;
struct TYPE_7__ {int remoting_mutex; int oid; int oxid; } ;
struct TYPE_6__ {scalar_t__ cPrivateRefs; int cPublicRefs; int ipid; } ;
typedef TYPE_2__ REMINTERFACEREF ;
typedef int LONG ;
typedef int IRemUnknown ;
typedef struct ifproxy* HRESULT ;


 int FUNC_0 (char*,struct ifproxy*) ;
 struct ifproxy* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct ifproxy* FUNC_2 (int *,int,TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 struct ifproxy* VAR_2 ;
 int FUNC_4 (int ) ;
 struct ifproxy* VAR_3 ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 struct ifproxy* FUNC_8 (TYPE_3__*,int **) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static HRESULT FUNC_10(struct ifproxy * VAR_5)
{
    HRESULT VAR_6 = VAR_3;
    LONG VAR_7;

    if (VAR_4 != FUNC_7(VAR_5->parent->remoting_mutex, VAR_1))
    {
        FUNC_0("Wait failed for ifproxy %p\n", VAR_5);
        return VAR_0;
    }

    VAR_7 = VAR_5->refs;
    if (VAR_7 > 0)
    {
        IRemUnknown *VAR_8 = ((void*)0);

        FUNC_5("releasing %d refs\n", VAR_7);

        VAR_6 = FUNC_8(VAR_5->parent, &VAR_8);
        if (VAR_6 == VAR_3)
        {
            REMINTERFACEREF VAR_9;
            VAR_9.ipid = VAR_5->stdobjref.ipid;
            VAR_9.cPublicRefs = VAR_7;
            VAR_9.cPrivateRefs = 0;
            VAR_6 = FUNC_2(VAR_8, 1, &VAR_9);
            FUNC_1(VAR_8);
            if (VAR_6 == VAR_3)
                FUNC_3((LONG *)&VAR_5->refs, -VAR_7);
            else if (VAR_6 == VAR_2)
                FUNC_6("couldn't release references because object was "
                     "disconnected: oxid = %s, oid = %s\n",
                     FUNC_9(VAR_5->parent->oxid),
                     FUNC_9(VAR_5->parent->oid));
            else
                FUNC_0("IRemUnknown_RemRelease failed with error 0x%08x\n", VAR_6);
        }
    }
    FUNC_4(VAR_5->parent->remoting_mutex);

    return VAR_6;
}
