
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ip; int hasUTIME; int hasPASV; int hasMDTM; int hasSIZE; int port; int acct; int pass; int user; int host; } ;
struct TYPE_4__ {char* name; char* user; char* pass; char* acct; char* lastIP; int hasUTIME; int hasPASV; int hasMDTM; int hasSIZE; int lastCall; int port; int dir; } ;
typedef TYPE_1__* BookmarkPtr ;


 int FUNC_0 (int ,int,char*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void
FUNC_5(BookmarkPtr VAR_5)
{
 char VAR_6[160];

 (void) FUNC_2(VAR_5->name, VAR_0.host);
 if ((FUNC_1(VAR_0.user, "anonymous")) || (FUNC_1(VAR_0.user, "ftp"))) {
  VAR_5->user[0] = '\0';
  VAR_5->pass[0] = '\0';
  VAR_5->acct[0] = '\0';
 } else {
  (void) FUNC_2(VAR_5->user, VAR_0.user);
  (void) FUNC_2(VAR_5->pass, VAR_0.pass);
  (void) FUNC_2(VAR_5->acct, VAR_0.acct);
 }






 (void) FUNC_2(VAR_6, VAR_2);
 FUNC_0(VAR_5->dir, sizeof(VAR_5->dir), VAR_6, VAR_3, FUNC_3(VAR_3));
 VAR_5->port = VAR_0.port;
 (void) FUNC_4(&VAR_5->lastCall);
 VAR_5->hasSIZE = VAR_0.hasSIZE;
 VAR_5->hasMDTM = VAR_0.hasMDTM;
 VAR_5->hasPASV = VAR_0.hasPASV;
 VAR_5->hasUTIME = VAR_0.hasUTIME;
 if (VAR_1 == VAR_4)
  (void) FUNC_2(VAR_5->lastIP, VAR_0.ip);
}
