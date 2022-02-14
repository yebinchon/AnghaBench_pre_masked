
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; void* len; int maxlen; } ;
struct TYPE_5__ {scalar_t__ sock; TYPE_1__ errorMessage; int be_key; int be_pid; int raddr; } ;
typedef TYPE_2__ PGconn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 void* FUNC_2 (int ) ;

int
FUNC_3(PGconn *VAR_1)
{
 int VAR_2;


 if (!VAR_1)
  return 0;

 if (VAR_1->sock == VAR_0)
 {
  FUNC_1(VAR_1->errorMessage.data,
    "PQrequestCancel() -- connection is not open\n",
    VAR_1->errorMessage.maxlen);
  VAR_1->errorMessage.len = FUNC_2(VAR_1->errorMessage.data);

  return 0;
 }

 VAR_2 = FUNC_0(&VAR_1->raddr, VAR_1->be_pid, VAR_1->be_key,
      VAR_1->errorMessage.data, VAR_1->errorMessage.maxlen);

 if (!VAR_2)
  VAR_1->errorMessage.len = FUNC_2(VAR_1->errorMessage.data);

 return VAR_2;
}
