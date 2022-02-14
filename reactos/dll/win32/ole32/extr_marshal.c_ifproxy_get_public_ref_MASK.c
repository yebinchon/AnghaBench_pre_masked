
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ipid; } ;
struct ifproxy {scalar_t__ refs; TYPE_3__* parent; TYPE_1__ stdobjref; } ;
struct TYPE_7__ {int remoting_mutex; } ;
struct TYPE_6__ {scalar_t__ cPrivateRefs; int cPublicRefs; int ipid; } ;
typedef TYPE_2__ REMINTERFACEREF ;
typedef int LONG ;
typedef int IRemUnknown ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,TYPE_2__*,scalar_t__*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*,struct ifproxy*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int **) ;

__attribute__((used)) static HRESULT FUNC_8(struct ifproxy * VAR_5)
{
    HRESULT VAR_6 = VAR_3;

    if (VAR_4 != FUNC_6(VAR_5->parent->remoting_mutex, VAR_1))
    {
        FUNC_0("Wait failed for ifproxy %p\n", VAR_5);
        return VAR_0;
    }

    if (VAR_5->refs == 0)
    {
        IRemUnknown *VAR_7 = ((void*)0);

        FUNC_5("getting public ref for ifproxy %p\n", VAR_5);

        VAR_6 = FUNC_7(VAR_5->parent, &VAR_7);
        if (VAR_6 == VAR_3)
        {
            HRESULT VAR_8 = VAR_3;
            REMINTERFACEREF VAR_9;
            VAR_9.ipid = VAR_5->stdobjref.ipid;
            VAR_9.cPublicRefs = VAR_2;
            VAR_9.cPrivateRefs = 0;
            VAR_6 = FUNC_2(VAR_7, 1, &VAR_9, &VAR_8);
            FUNC_1(VAR_7);
            if (VAR_6 == VAR_3 && VAR_8 == VAR_3)
                FUNC_3((LONG *)&VAR_5->refs, VAR_2);
            else
                FUNC_0("IRemUnknown_RemAddRef returned with 0x%08x, hrref = 0x%08x\n", VAR_6, VAR_8);
        }
    }
    FUNC_4(VAR_5->parent->remoting_mutex);

    return VAR_6;
}
