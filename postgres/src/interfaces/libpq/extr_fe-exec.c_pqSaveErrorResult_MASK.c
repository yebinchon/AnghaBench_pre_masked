
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ resultStatus; int * errMsg; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_9__ {TYPE_1__ errorMessage; TYPE_5__* result; } ;
typedef TYPE_2__ PGconn ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(PGconn *VAR_1)
{




 if (VAR_1->result == ((void*)0) ||
  VAR_1->result->resultStatus != VAR_0 ||
  VAR_1->result->errMsg == ((void*)0))
 {
  FUNC_2(VAR_1);
  VAR_1->result = FUNC_0(VAR_1, VAR_0);
 }
 else
 {

  FUNC_1(VAR_1->result, VAR_1->errorMessage.data);
 }
}
