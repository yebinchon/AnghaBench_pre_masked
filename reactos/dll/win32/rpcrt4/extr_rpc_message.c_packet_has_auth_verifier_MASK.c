
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ptype; } ;
struct TYPE_5__ {TYPE_1__ common; } ;
typedef TYPE_2__ RpcPktHdr ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(const RpcPktHdr *VAR_2)
{
    return !(VAR_2->common.ptype == VAR_0) &&
           !(VAR_2->common.ptype == VAR_1);
}
