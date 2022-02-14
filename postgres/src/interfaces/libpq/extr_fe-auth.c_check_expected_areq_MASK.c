
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* channel_binding; int errorMessage; int sasl_state; } ;
typedef TYPE_1__ PGconn ;
typedef int AuthRequest ;






 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static bool
FUNC_3(AuthRequest VAR_0, PGconn *VAR_1)
{
 bool VAR_2 = 1;
 if (VAR_1->channel_binding[0] == 'r' )
 {
  switch (VAR_0)
  {
   case 130:
   case 129:
   case 128:
    break;
   case 131:
    if (!FUNC_1(VAR_1->sasl_state))
    {
     FUNC_2(&VAR_1->errorMessage,
           FUNC_0("Channel binding required, but server authenticated client without channel binding\n"));
     VAR_2 = 0;
    }
    break;
   default:
    FUNC_2(&VAR_1->errorMessage,
          FUNC_0("Channel binding required but not supported by server's authentication request\n"));
    VAR_2 = 0;
    break;
  }
 }

 return VAR_2;
}
