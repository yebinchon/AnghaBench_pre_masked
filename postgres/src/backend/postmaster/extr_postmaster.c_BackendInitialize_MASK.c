
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int remote_ps_data ;
typedef int remote_port ;
typedef int remote_host ;
struct TYPE_6__ {int salen; int addr; } ;
struct TYPE_7__ {char* remote_host; char* remote_port; int database_name; int user_name; void* remote_hostname; TYPE_1__ raddr; } ;
typedef TYPE_2__ Port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 long VAR_12 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,char*,char*) ;
 scalar_t__ VAR_21 ;
 int FUNC_11 (int *,int ,char*,int,char*,int,int) ;
 int FUNC_12 (long) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,int,char*,char*,...) ;
 int VAR_22 ;
 void* FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static void
FUNC_21(Port *VAR_25)
{
 int VAR_26;
 int VAR_27;
 char VAR_28[VAR_8];
 char VAR_29[VAR_9];
 char VAR_30[VAR_8];


 VAR_7 = VAR_25;
 if (VAR_12 > 0)
  FUNC_12(VAR_12 * 1000000L);


 VAR_3 = 1;


 VAR_25->remote_host = "";
 VAR_25->remote_port = "";





 FUNC_14();
 VAR_24 = VAR_4;
 FUNC_15(VAR_14, VAR_22);
 FUNC_15(VAR_13, VAR_22);
 FUNC_0();
 FUNC_1(&VAR_17);




 VAR_28[0] = '\0';
 VAR_29[0] = '\0';
 if ((VAR_27 = FUNC_11(&VAR_25->raddr.addr, VAR_25->raddr.salen,
          VAR_28, sizeof(VAR_28),
          VAR_29, sizeof(VAR_29),
          (VAR_21 ? 0 : VAR_10) | VAR_11)) != 0)
  FUNC_6(VAR_19,
    (FUNC_8("pg_getnameinfo_all() failed: %s",
         FUNC_9(VAR_27))));
 if (VAR_29[0] == '\0')
  FUNC_17(VAR_30, sizeof(VAR_30), "%s", VAR_28);
 else
  FUNC_17(VAR_30, sizeof(VAR_30), "%s(%s)", VAR_28, VAR_29);





 VAR_25->remote_host = FUNC_18(VAR_28);
 VAR_25->remote_port = FUNC_18(VAR_29);


 if (VAR_6)
 {
  if (VAR_29[0])
   FUNC_6(VAR_5,
     (FUNC_7("connection received: host=%s port=%s",
       VAR_28,
       VAR_29)));
  else
   FUNC_6(VAR_5,
     (FUNC_7("connection received: host=%s",
       VAR_28)));
 }
 if (VAR_21 &&
  VAR_27 == 0 &&
  FUNC_20(VAR_28, "0123456789.") < FUNC_19(VAR_28) &&
  FUNC_20(VAR_28, "0123456789ABCDEFabcdef:") < FUNC_19(VAR_28))
  VAR_25->remote_hostname = FUNC_18(VAR_28);
 FUNC_3(VAR_15, VAR_18);
 FUNC_5(VAR_15, VAR_0 * 1000);





 VAR_26 = FUNC_2(VAR_25, 0);





 if (VAR_26 != VAR_16)
  FUNC_16(0);
 if (VAR_20)
  FUNC_10(FUNC_13(VAR_1), VAR_25->user_name, VAR_30,
      VAR_23 ? "authentication" : "");
 else
  FUNC_10(VAR_25->user_name, VAR_25->database_name, VAR_30,
      VAR_23 ? "authentication" : "");




 FUNC_4(VAR_15, 0);
 FUNC_1(&VAR_2);
}
