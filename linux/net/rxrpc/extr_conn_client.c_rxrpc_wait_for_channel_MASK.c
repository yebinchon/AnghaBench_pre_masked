
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {int waitq; int flags; scalar_t__ call_id; int debug_id; } ;
typedef int gfp_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int *) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct rxrpc_call *VAR_8, gfp_t VAR_9)
{
 int VAR_10 = 0;

 FUNC_2("%d", VAR_8->debug_id);

 if (!VAR_8->call_id) {
  FUNC_0(VAR_7, VAR_6);

  if (!FUNC_5(VAR_9)) {
   VAR_10 = -VAR_0;
   goto out;
  }

  FUNC_4(&VAR_8->waitq, &VAR_7);
  for (;;) {
   if (FUNC_11(VAR_2, &VAR_8->flags))
    FUNC_8(VAR_3);
   else
    FUNC_8(VAR_5);
   if (VAR_8->call_id)
    break;
   if (FUNC_11(VAR_2, &VAR_8->flags) &&
       FUNC_9(VAR_6)) {
    VAR_10 = -VAR_1;
    break;
   }
   FUNC_7();
  }
  FUNC_6(&VAR_8->waitq, &VAR_7);
  FUNC_1(VAR_4);
 }


 FUNC_10();

out:
 FUNC_3(" = %d", VAR_10);
 return VAR_10;
}
