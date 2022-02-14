
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pd_checksum; } ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef int BlockNumber ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ) ;

void
FUNC_3(Page VAR_0, BlockNumber VAR_1)
{

 if (FUNC_1(VAR_0) || !FUNC_0())
  return;

 ((PageHeader) VAR_0)->pd_checksum = FUNC_2((char *) VAR_0, VAR_1);
}
