
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_conn {int mark; } ;
struct TYPE_2__ {int mask; int val; } ;
struct ctnetlink_filter {scalar_t__ family; TYPE_1__ mark; } ;


 scalar_t__ FUNC_0 (struct nf_conn*) ;

__attribute__((used)) static int FUNC_1(struct nf_conn *VAR_0, void *VAR_1)
{
 struct ctnetlink_filter *VAR_2 = VAR_1;

 if (VAR_2 == ((void*)0))
  goto out;





 if (VAR_2->family && FUNC_0(VAR_0) != VAR_2->family)
  goto ignore_entry;






out:
 return 1;

ignore_entry:
 return 0;
}
