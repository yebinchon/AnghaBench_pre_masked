
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int urlfile ;
struct TYPE_7__ {char const* const name; char const* const user; char const* const pass; char const* const acct; int port; int hasUTIME; int hasPASV; int hasMDTM; int hasSIZE; } ;
struct TYPE_6__ {char* host; char* user; char* pass; char* acct; char* firewallHost; char* firewallUser; char* firewallPass; void* firewallPort; void* firewallType; int port; int hasUTIME; int hasPASV; int hasMDTM; int hasSIZE; } ;


 int FUNC_0 (TYPE_1__*,char*,int *,char*,int) ;
 scalar_t__ FUNC_1 (char*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (char*,void*,int ) ;
 int FUNC_3 (char*,char const* const) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,...) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 char const* const VAR_3 ;
 char const* const VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 char const* const VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_7(const char *const VAR_14)
{
 int VAR_15;
 char VAR_16[256];
 char VAR_17[128];

 VAR_8 = 0;
 (void) FUNC_3(VAR_16, VAR_14);

 VAR_15 = FUNC_0(&VAR_1, VAR_16, &VAR_9, VAR_17, sizeof(VAR_17));
 if (VAR_15 == VAR_11) {
  (void) FUNC_6(VAR_13, "Malformed URL: %s\n", VAR_16);
  FUNC_5(1);
 } else if (VAR_15 == VAR_12) {

  (void) FUNC_3(VAR_1.host, VAR_14);
  VAR_10 = 2;
  if (FUNC_1(VAR_1.host, &VAR_0) >= 0) {
   VAR_8 = 1;
   (void) FUNC_3(VAR_1.host, VAR_0.name);
   (void) FUNC_3(VAR_1.user, VAR_0.user);
   (void) FUNC_3(VAR_1.pass, VAR_0.pass);
   (void) FUNC_3(VAR_1.acct, VAR_0.acct);
   VAR_1.hasSIZE = VAR_0.hasSIZE;
   VAR_1.hasMDTM = VAR_0.hasMDTM;
   VAR_1.hasPASV = VAR_0.hasPASV;
   VAR_1.hasUTIME = VAR_0.hasUTIME;
   VAR_1.port = VAR_0.port;
  } else {
   FUNC_4(&VAR_0);
  }

  if (FUNC_2(VAR_1.host, VAR_6, VAR_2) != 0) {
   VAR_1.firewallType = VAR_6;
   (void) FUNC_3(VAR_1.firewallHost, VAR_3);
   (void) FUNC_3(VAR_1.firewallUser, VAR_7);
   (void) FUNC_3(VAR_1.firewallPass, VAR_4);
   VAR_1.firewallPort = VAR_5;
  }
 } else {

  if (VAR_17[0] != '\0') {

   (void) FUNC_6(VAR_13, "Use ncftpget or ncftpput to handle file URLs.\n");
   FUNC_5(1);
  }
  VAR_10 = 1;
  if (FUNC_2(VAR_1.host, VAR_6, VAR_2) != 0) {
   VAR_1.firewallType = VAR_6;
   (void) FUNC_3(VAR_1.firewallHost, VAR_3);
   (void) FUNC_3(VAR_1.firewallUser, VAR_7);
   (void) FUNC_3(VAR_1.firewallPass, VAR_4);
   VAR_1.firewallPort = VAR_5;
  }
 }
}
