
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {unsigned int state; int tx_top; int state_lock; int flags; } ;


 int FUNC_0 (int ) ;

 unsigned int VAR_0 ;


 int VAR_1 ;
 int FUNC_1 (struct rxrpc_call*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int * VAR_2 ;
 int FUNC_4 (struct rxrpc_call*) ;
 int FUNC_5 (char const*,struct rxrpc_call*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct rxrpc_call*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static bool FUNC_10(struct rxrpc_call *VAR_5, bool VAR_6,
          const char *VAR_7)
{
 unsigned int VAR_8;

 FUNC_0(FUNC_6(VAR_1, &VAR_5->flags));

 FUNC_8(&VAR_5->state_lock);

 VAR_8 = VAR_5->state;
 switch (VAR_8) {
 case 129:
 case 130:
  if (VAR_6)
   VAR_5->state = VAR_8 = VAR_0;
  else
   VAR_5->state = VAR_8 = 130;
  break;

 case 128:
  FUNC_1(VAR_5);
  FUNC_4(VAR_5);
  VAR_8 = VAR_5->state;
  break;

 default:
  goto bad_state;
 }

 FUNC_9(&VAR_5->state_lock);
 if (VAR_8 == 130)
  FUNC_7(VAR_5, VAR_3);
 else
  FUNC_7(VAR_5, VAR_4);
 FUNC_2(" = ok");
 return 1;

bad_state:
 FUNC_9(&VAR_5->state_lock);
 FUNC_3("end_tx %s", VAR_2[VAR_5->state]);
 FUNC_5(VAR_7, VAR_5, VAR_5->tx_top);
 return 0;
}
