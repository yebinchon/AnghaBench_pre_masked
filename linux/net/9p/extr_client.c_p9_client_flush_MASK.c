
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p9_req_t {scalar_t__ status; int tc; } ;
struct p9_client {TYPE_1__* trans_mod; } ;
typedef int int16_t ;
struct TYPE_2__ {int (* cancelled ) (struct p9_client*,struct p9_req_t*) ;} ;


 scalar_t__ FUNC_0 (struct p9_req_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct p9_req_t*) ;
 scalar_t__ VAR_2 ;
 struct p9_req_t* FUNC_2 (struct p9_client*,int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *,int *,int *,int *,int) ;
 int FUNC_5 (struct p9_client*,struct p9_req_t*) ;
 int FUNC_6 (struct p9_client*,struct p9_req_t*) ;

__attribute__((used)) static int FUNC_7(struct p9_client *VAR_3, struct p9_req_t *VAR_4)
{
 struct p9_req_t *VAR_5;
 int16_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(&VAR_4->tc, ((void*)0), ((void*)0), &VAR_6, 1);
 if (VAR_7)
  return VAR_7;

 FUNC_3(VAR_0, ">>> TFLUSH tag %d\n", VAR_6);

 VAR_5 = FUNC_2(VAR_3, VAR_1, "w", VAR_6);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);





 if (VAR_4->status == VAR_2) {
  if (VAR_3->trans_mod->cancelled)
   VAR_3->trans_mod->cancelled(VAR_3, VAR_4);
 }

 FUNC_5(VAR_3, VAR_5);
 return 0;
}
