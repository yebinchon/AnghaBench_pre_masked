
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_2__ {scalar_t__ pd_checksum; int pd_lsn; } ;
typedef TYPE_1__* PageHeader ;
typedef int Page ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

void
FUNC_1(Page VAR_1)
{
 PageHeader VAR_2 = (PageHeader) VAR_1;

 FUNC_0(VAR_2->pd_lsn, (uint64) VAR_0);
 VAR_2->pd_checksum = VAR_0;
}
