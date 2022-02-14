
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* TransactionId ;
struct TYPE_8__ {scalar_t__ topXid; } ;
struct TYPE_7__ {TYPE_4__* myXact; } ;
struct TYPE_6__ {void* xid; } ;
typedef TYPE_1__ SERIALIZABLEXIDTAG ;
typedef TYPE_2__ SERIALIZABLEXID ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int ,int*) ;

void
FUNC_5(TransactionId VAR_7)
{
 SERIALIZABLEXIDTAG VAR_8;
 SERIALIZABLEXID *VAR_9;
 bool VAR_10;





 if (VAR_4 == VAR_1)
  return;


 FUNC_0(FUNC_3(VAR_7));

 FUNC_1(VAR_5, VAR_3);


 FUNC_0(VAR_4->topXid == VAR_2);

 VAR_4->topXid = VAR_7;

 VAR_8.xid = VAR_7;
 VAR_9 = (SERIALIZABLEXID *) FUNC_4(VAR_6,
             &VAR_8,
             VAR_0, &VAR_10);
 FUNC_0(!VAR_10);


 VAR_9->myXact = VAR_4;
 FUNC_2(VAR_5);
}
