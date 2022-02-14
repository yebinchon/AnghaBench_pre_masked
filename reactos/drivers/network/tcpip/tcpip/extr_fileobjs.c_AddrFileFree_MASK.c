
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_9__ {int Context; int (* Complete ) (int ,int ,int ) ;} ;
struct TYPE_8__ {int Protocol; int Port; int Context; int (* Complete ) (int ,int ,int ) ;int Lock; int ReceiveQueue; int ListEntry; int Connection; } ;
typedef TYPE_1__* PVOID ;
typedef int PLIST_ENTRY ;
typedef TYPE_1__* PDATAGRAM_SEND_REQUEST ;
typedef TYPE_3__* PDATAGRAM_RECEIVE_REQUEST ;
typedef TYPE_1__* PADDRESS_FILE ;
typedef int KIRQL ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,int *) ;


 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;

VOID FUNC_13(
    PVOID VAR_9)





{
  PADDRESS_FILE VAR_10 = VAR_9;
  KIRQL VAR_11;
  PDATAGRAM_RECEIVE_REQUEST VAR_12;
  PDATAGRAM_SEND_REQUEST VAR_13;
  PLIST_ENTRY VAR_14;

  FUNC_7(VAR_7, ("Called.\n"));


  FUNC_0(!VAR_10->Connection);


  FUNC_8(&VAR_1, &VAR_11);
  FUNC_5(&VAR_10->ListEntry);
  FUNC_9(&VAR_1, VAR_11);





  FUNC_7(VAR_5, ("Aborting receive requests on AddrFile at (0x%X).\n", VAR_10));


  while ((VAR_14 = FUNC_3(&VAR_10->ReceiveQueue, &VAR_10->Lock))) {
    VAR_12 = FUNC_1(VAR_14, VAR_2, VAR_6);
    (*VAR_12->Complete)(VAR_12->Context, VAR_8, 0);

  }

  FUNC_7(VAR_5, ("Aborting send requests on address file at (0x%X).\n", VAR_10));


  while ((VAR_14 = FUNC_3(&VAR_10->ReceiveQueue, &VAR_10->Lock))) {
    VAR_13 = FUNC_1(VAR_14, VAR_3, VAR_6);
    (*VAR_13->Complete)(VAR_13->Context, VAR_8, 0);
    FUNC_2(VAR_13, VAR_4);
  }


  switch (VAR_10->Protocol) {
  case 129:
    if (VAR_10->Port)
    {
        FUNC_6(VAR_10->Port);
    }
    break;

  case 128:
    FUNC_10( VAR_10->Port );
    break;
  }

  FUNC_4(VAR_10);

  FUNC_2(VAR_9, VAR_0);
}
