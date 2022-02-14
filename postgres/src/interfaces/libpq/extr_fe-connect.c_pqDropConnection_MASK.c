
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sock; int * sasl_state; scalar_t__ usesspi; int * sspictx; int * sspicred; int * sspitarget; int gtarg_nam; int gctx; scalar_t__ outCount; scalar_t__ inEnd; scalar_t__ inCursor; scalar_t__ inStart; } ;
typedef TYPE_1__ PGconn ;
typedef int OM_uint32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;

void
FUNC_8(PGconn *VAR_2, bool VAR_3)
{

 FUNC_7(VAR_2);


 if (VAR_2->sock != VAR_1)
  FUNC_2(VAR_2->sock);
 VAR_2->sock = VAR_1;


 if (VAR_3)
  VAR_2->inStart = VAR_2->inCursor = VAR_2->inEnd = 0;


 VAR_2->outCount = 0;
 if (VAR_2->sasl_state)
 {




  FUNC_6(VAR_2->sasl_state);
  VAR_2->sasl_state = ((void*)0);
 }
}
