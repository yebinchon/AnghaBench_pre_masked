
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addr_filter {int * filename; int * sym_to; int * sym_from; int * action; int str; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct addr_filter *VAR_0)
{
 FUNC_0(&VAR_0->str);
 VAR_0->action = ((void*)0);
 VAR_0->sym_from = ((void*)0);
 VAR_0->sym_to = ((void*)0);
 VAR_0->filename = ((void*)0);
}
