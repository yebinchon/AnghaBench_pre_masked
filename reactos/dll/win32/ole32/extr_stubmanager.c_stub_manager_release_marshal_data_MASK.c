
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stub_manager {int dummy; } ;
struct ifstub {int flags; } ;
typedef int ULONG ;
typedef int IPID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stub_manager*,int,int ,int) ;
 struct ifstub* FUNC_1 (struct stub_manager*,int const*) ;

void FUNC_2(struct stub_manager *VAR_2, ULONG VAR_3, const IPID *VAR_4, BOOL VAR_5)
{
    struct ifstub *VAR_6;

    if (!(VAR_6 = FUNC_1(VAR_2, VAR_4)))
        return;

    if (VAR_6->flags & VAR_1)
        VAR_3 = 0;
    else if (VAR_6->flags & VAR_0)
        VAR_3 = 1;

    FUNC_0(VAR_2, VAR_3, VAR_5, !VAR_5);
}
