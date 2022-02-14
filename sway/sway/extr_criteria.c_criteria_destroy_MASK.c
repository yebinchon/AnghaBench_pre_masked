
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct criteria {struct criteria* raw; struct criteria* cmdlist; struct criteria* workspace; int con_mark; int window_role; int instance; int class; int app_id; int shell; int title; } ;


 int FUNC_0 (struct criteria*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct criteria *VAR_0) {
 FUNC_1(VAR_0->title);
 FUNC_1(VAR_0->shell);
 FUNC_1(VAR_0->app_id);





 FUNC_1(VAR_0->con_mark);
 FUNC_0(VAR_0->workspace);
 FUNC_0(VAR_0->cmdlist);
 FUNC_0(VAR_0->raw);
 FUNC_0(VAR_0);
}
