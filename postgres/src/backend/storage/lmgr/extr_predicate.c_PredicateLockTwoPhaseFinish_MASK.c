
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TransactionId ;
struct TYPE_5__ {int myXact; } ;
struct TYPE_4__ {int xid; } ;
typedef TYPE_1__ SERIALIZABLEXIDTAG ;
typedef TYPE_2__ SERIALIZABLEXID ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int ,int *) ;

void
FUNC_4(TransactionId VAR_6, bool VAR_7)
{
 SERIALIZABLEXID *VAR_8;
 SERIALIZABLEXIDTAG VAR_9;

 VAR_9.xid = VAR_6;

 FUNC_0(VAR_4, VAR_1);
 VAR_8 = (SERIALIZABLEXID *)
  FUNC_3(VAR_5, &VAR_9, VAR_0, ((void*)0));
 FUNC_1(VAR_4);


 if (VAR_8 == ((void*)0))
  return;


 VAR_2 = VAR_8->myXact;
 VAR_3 = 1;

 FUNC_2(VAR_7, 0);
}
