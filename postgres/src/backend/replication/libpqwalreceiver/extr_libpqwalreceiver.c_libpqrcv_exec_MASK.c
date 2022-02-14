
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int streamConn; } ;
typedef TYPE_1__ WalReceiverConn ;
struct TYPE_8__ {int err; void* status; } ;
typedef TYPE_2__ WalRcvExecResult ;
typedef int PGresult ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int ,char const*) ;
 int FUNC_8 (int *,TYPE_2__*,int const,int const*) ;
 TYPE_2__* FUNC_9 (int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static WalRcvExecResult *
FUNC_11(WalReceiverConn *VAR_10, const char *VAR_11,
     const int VAR_12, const Oid *VAR_13)
{
 PGresult *VAR_14 = ((void*)0);
 WalRcvExecResult *VAR_15 = FUNC_9(sizeof(WalRcvExecResult));

 if (VAR_3 == VAR_2)
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("the query interface requires a database connection")));

 VAR_14 = FUNC_7(VAR_10->streamConn, VAR_11);

 switch (FUNC_2(VAR_14))
 {
  case 129:
  case 128:
   VAR_15->status = VAR_9;
   FUNC_8(VAR_14, VAR_15, VAR_12, VAR_13);
   break;

  case 134:
   VAR_15->status = VAR_7;
   break;

  case 133:
   VAR_15->status = VAR_8;
   break;

  case 135:
   VAR_15->status = VAR_6;
   break;

  case 136:
   VAR_15->status = VAR_5;
   break;


  case 132:
   VAR_15->status = VAR_4;
   VAR_15->err = FUNC_3("empty query");
   break;

  case 130:
  case 131:
  case 137:
   VAR_15->status = VAR_4;
   VAR_15->err = FUNC_10(FUNC_1(VAR_10->streamConn));
   break;
 }

 FUNC_0(VAR_14);

 return VAR_15;
}
