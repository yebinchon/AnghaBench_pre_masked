
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gss_auth {struct gss_auth* target_name; int net; int mech; int * gss_pipe; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gss_auth*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct gss_auth *VAR_1)
{
 FUNC_1(VAR_1->gss_pipe[0]);
 FUNC_1(VAR_1->gss_pipe[1]);
 FUNC_0(VAR_1->mech);
 FUNC_4(VAR_1->net);
 FUNC_2(VAR_1->target_name);

 FUNC_2(VAR_1);
 FUNC_3(VAR_0);
}
