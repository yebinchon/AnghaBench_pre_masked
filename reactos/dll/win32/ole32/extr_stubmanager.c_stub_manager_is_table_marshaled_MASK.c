
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stub_manager {int dummy; } ;
struct ifstub {int flags; } ;
typedef int IPID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifstub*) ;
 struct ifstub* FUNC_1 (struct stub_manager*,int const*) ;

BOOL FUNC_2(struct stub_manager *VAR_2, const IPID *VAR_3)
{
    struct ifstub *VAR_4 = FUNC_1(VAR_2, VAR_3);

    FUNC_0( VAR_4 );

    return VAR_4->flags & (VAR_0 | VAR_1);
}
