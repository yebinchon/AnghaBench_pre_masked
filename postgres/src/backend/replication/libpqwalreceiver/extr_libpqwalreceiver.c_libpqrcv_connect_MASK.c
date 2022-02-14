
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int keys ;
struct TYPE_4__ {int logical; int streamConn; } ;
typedef TYPE_1__ WalReceiverConn ;
typedef scalar_t__ PostgresPollingStatusType ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char const**,char const**,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int ,int,int ,int ,int ) ;
 TYPE_1__* FUNC_10 (int) ;
 char* FUNC_11 (int ) ;

__attribute__((used)) static WalReceiverConn *
FUNC_12(const char *VAR_14, bool VAR_15, const char *VAR_16,
     char **VAR_17)
{
 WalReceiverConn *VAR_18;
 PostgresPollingStatusType VAR_19;
 const char *VAR_20[5];
 const char *VAR_21[5];
 int VAR_22 = 0;





 VAR_20[VAR_22] = "dbname";
 VAR_21[VAR_22] = VAR_14;
 VAR_20[++VAR_22] = "replication";
 VAR_21[VAR_22] = VAR_15 ? "database" : "true";
 if (!VAR_15)
 {




  VAR_20[++VAR_22] = "dbname";
  VAR_21[VAR_22] = "replication";
 }
 VAR_20[++VAR_22] = "fallback_application_name";
 VAR_21[VAR_22] = VAR_16;
 if (VAR_15)
 {
  VAR_20[++VAR_22] = "client_encoding";
  VAR_21[VAR_22] = FUNC_1();
 }
 VAR_20[++VAR_22] = ((void*)0);
 VAR_21[VAR_22] = ((void*)0);

 FUNC_0(VAR_22 < sizeof(VAR_20));

 VAR_18 = FUNC_10(sizeof(WalReceiverConn));
 VAR_18->streamConn = FUNC_3(VAR_20, VAR_21,
                                  1);
 if (FUNC_6(VAR_18->streamConn) == VAR_0)
 {
  *VAR_17 = FUNC_11(FUNC_4(VAR_18->streamConn));
  return ((void*)0);
 }






 VAR_19 = VAR_7;
 do
 {
  int VAR_23;
  int VAR_24;

  if (VAR_19 == VAR_6)
   VAR_23 = VAR_12;





  else
   VAR_23 = VAR_13;

  VAR_24 = FUNC_9(VAR_3,
          VAR_9 | VAR_10 | VAR_23,
          FUNC_5(VAR_18->streamConn),
          0,
          VAR_8);


  if (VAR_24 & VAR_10)
  {
   FUNC_8(VAR_3);
   FUNC_7();
  }


  if (VAR_24 & VAR_23)
   VAR_19 = FUNC_2(VAR_18->streamConn);
 } while (VAR_19 != VAR_5 && VAR_19 != VAR_4);

 if (FUNC_6(VAR_18->streamConn) != VAR_1)
 {
  *VAR_17 = FUNC_11(FUNC_4(VAR_18->streamConn));
  return ((void*)0);
 }

 VAR_18->logical = VAR_15;

 return VAR_18;
}
