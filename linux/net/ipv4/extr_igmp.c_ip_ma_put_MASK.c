
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_mc_list {int interface; int refcnt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ip_mc_list*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ip_mc_list *VAR_1)
{
 if (FUNC_2(&VAR_1->refcnt)) {
  FUNC_0(VAR_1->interface);
  FUNC_1(VAR_1, VAR_0);
 }
}
