
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct addrinfo {scalar_t__ ai_addrlen; int * ai_addr; scalar_t__ ai_protocol; void* ai_socktype; int ai_family; int * ai_next; int * ai_canonname; void* ai_flags; } ;
typedef int remote_port ;
typedef int remote_addr_s ;
typedef scalar_t__ pgsocket ;
typedef int local_port ;
typedef int local_addr_s ;
typedef int ident_response ;
typedef int ident_query ;
typedef int ident_port ;
struct TYPE_9__ {int ss_family; } ;
struct TYPE_8__ {TYPE_4__ addr; int salen; } ;
struct TYPE_7__ {int user_name; TYPE_1__* hba; TYPE_3__ laddr; TYPE_3__ raddr; } ;
typedef TYPE_2__ hbaPort ;
struct TYPE_6__ {int usermap; } ;
typedef TYPE_3__ SockAddr ;


 void* VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (scalar_t__,int *,scalar_t__) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int *,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,struct addrinfo*) ;
 int FUNC_10 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_11 (TYPE_4__*,int ,char*,int,char*,int,int) ;
 int FUNC_12 (scalar_t__,char*,int,int ) ;
 int FUNC_13 (scalar_t__,char*,int ,int ) ;
 int FUNC_14 (char*,int,char*,...) ;
 scalar_t__ FUNC_15 (int ,void*,scalar_t__) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static int
FUNC_17(hbaPort *VAR_13)
{
 const SockAddr VAR_14 = VAR_13->raddr;
 const SockAddr VAR_15 = VAR_13->laddr;
 char VAR_16[VAR_3 + 1];
 pgsocket VAR_17 = VAR_9;
 int VAR_18;
 bool VAR_19;
 char VAR_20[VAR_5];
 char VAR_21[VAR_6];
 char VAR_22[VAR_5];
 char VAR_23[VAR_6];
 char VAR_24[VAR_6];
 char VAR_25[80];
 char VAR_26[80 + VAR_3];
 struct addrinfo *VAR_27 = ((void*)0),
      *VAR_28 = ((void*)0),
    VAR_29;





 FUNC_11(&VAR_14.addr, VAR_14.salen,
        VAR_20, sizeof(VAR_20),
        VAR_21, sizeof(VAR_21),
        VAR_7 | VAR_8);
 FUNC_11(&VAR_15.addr, VAR_15.salen,
        VAR_22, sizeof(VAR_22),
        VAR_23, sizeof(VAR_23),
        VAR_7 | VAR_8);

 FUNC_14(VAR_24, sizeof(VAR_24), "%d", VAR_2);
 VAR_29.ai_flags = VAR_0;
 VAR_29.ai_family = VAR_14.addr.ss_family;
 VAR_29.ai_socktype = VAR_10;
 VAR_29.ai_protocol = 0;
 VAR_29.ai_addrlen = 0;
 VAR_29.ai_canonname = ((void*)0);
 VAR_29.ai_addr = ((void*)0);
 VAR_29.ai_next = ((void*)0);
 VAR_18 = FUNC_10(VAR_20, VAR_24, &VAR_29, &VAR_27);
 if (VAR_18 || !VAR_27)
 {

  VAR_19 = 0;
  goto ident_inet_done;
 }

 VAR_29.ai_flags = VAR_0;
 VAR_29.ai_family = VAR_15.addr.ss_family;
 VAR_29.ai_socktype = VAR_10;
 VAR_29.ai_protocol = 0;
 VAR_29.ai_addrlen = 0;
 VAR_29.ai_canonname = ((void*)0);
 VAR_29.ai_addr = ((void*)0);
 VAR_29.ai_next = ((void*)0);
 VAR_18 = FUNC_10(VAR_22, ((void*)0), &VAR_29, &VAR_28);
 if (VAR_18 || !VAR_28)
 {

  VAR_19 = 0;
  goto ident_inet_done;
 }

 VAR_17 = FUNC_15(VAR_27->ai_family, VAR_27->ai_socktype,
      VAR_27->ai_protocol);
 if (VAR_17 == VAR_9)
 {
  FUNC_5(VAR_4,
    (FUNC_6(),
     FUNC_7("could not create socket for Ident connection: %m")));
  VAR_19 = 0;
  goto ident_inet_done;
 }






 VAR_18 = FUNC_1(VAR_17, VAR_28->ai_addr, VAR_28->ai_addrlen);
 if (VAR_18 != 0)
 {
  FUNC_5(VAR_4,
    (FUNC_6(),
     FUNC_7("could not bind to local address \"%s\": %m",
      VAR_22)));
  VAR_19 = 0;
  goto ident_inet_done;
 }

 VAR_18 = FUNC_4(VAR_17, VAR_27->ai_addr,
     VAR_27->ai_addrlen);
 if (VAR_18 != 0)
 {
  FUNC_5(VAR_4,
    (FUNC_6(),
     FUNC_7("could not connect to Ident server at address \"%s\", port %s: %m",
      VAR_20, VAR_24)));
  VAR_19 = 0;
  goto ident_inet_done;
 }


 FUNC_14(VAR_25, sizeof(VAR_25), "%s,%s\r\n",
    VAR_21, VAR_23);


 do
 {
  FUNC_0();

  VAR_18 = FUNC_13(VAR_17, VAR_25, FUNC_16(VAR_25), 0);
 } while (VAR_18 < 0 && VAR_12 == VAR_1);

 if (VAR_18 < 0)
 {
  FUNC_5(VAR_4,
    (FUNC_6(),
     FUNC_7("could not send query to Ident server at address \"%s\", port %s: %m",
      VAR_20, VAR_24)));
  VAR_19 = 0;
  goto ident_inet_done;
 }

 do
 {
  FUNC_0();

  VAR_18 = FUNC_12(VAR_17, VAR_26, sizeof(VAR_26) - 1, 0);
 } while (VAR_18 < 0 && VAR_12 == VAR_1);

 if (VAR_18 < 0)
 {
  FUNC_5(VAR_4,
    (FUNC_6(),
     FUNC_7("could not receive response from Ident server at address \"%s\", port %s: %m",
      VAR_20, VAR_24)));
  VAR_19 = 0;
  goto ident_inet_done;
 }

 VAR_26[VAR_18] = '\0';
 VAR_19 = FUNC_8(VAR_26, VAR_16);
 if (!VAR_19)
  FUNC_5(VAR_4,
    (FUNC_7("invalidly formatted response from Ident server: \"%s\"",
      VAR_26)));

ident_inet_done:
 if (VAR_17 != VAR_9)
  FUNC_3(VAR_17);
 if (VAR_27)
  FUNC_9(VAR_14.addr.ss_family, VAR_27);
 if (VAR_28)
  FUNC_9(VAR_15.addr.ss_family, VAR_28);

 if (VAR_19)

  return FUNC_2(VAR_13->hba->usermap, VAR_13->user_name, VAR_16, 0);
 return VAR_11;
}
