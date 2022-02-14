
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stub_manager {int disconnected; int oid; } ;
struct ifstub {int chan; int iface; scalar_t__ stubbuffer; int iid; int entry; int ipid; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct ifstub*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,struct stub_manager*,int ,int ) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct stub_manager *VAR_1, struct ifstub *VAR_2)
{
    FUNC_6("m=%p, m->oid=%s, ipid=%s\n", VAR_1, FUNC_9(VAR_1->oid), FUNC_7(&VAR_2->ipid));

    FUNC_8(&VAR_2->entry);

    if (!VAR_1->disconnected)
        FUNC_5(&VAR_2->iid, VAR_0);

    if (VAR_2->stubbuffer) FUNC_3(VAR_2->stubbuffer);
    FUNC_4(VAR_2->iface);
    FUNC_2(VAR_2->chan);

    FUNC_1(FUNC_0(), 0, VAR_2);
}
