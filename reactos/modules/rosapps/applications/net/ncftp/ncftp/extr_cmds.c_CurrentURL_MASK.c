
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bm ;
struct TYPE_6__ {char* host; char* user; char* pass; char* acct; int port; } ;
struct TYPE_5__ {char* name; char* user; char* pass; char* acct; int dir; int port; } ;
typedef TYPE_1__ Bookmark ;


 int FUNC_0 (int ,int,char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,char*,size_t) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 TYPE_3__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int ) ;

void
FUNC_6(char *VAR_3, size_t VAR_4, int VAR_5)
{
 Bookmark VAR_6;
 char VAR_7[160];

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 (void) FUNC_3(VAR_6.name, VAR_0.host);
 if ((VAR_0.user[0] != '\0') && (! FUNC_2(VAR_0.user, "anonymous")) && (! FUNC_2(VAR_0.user, "ftp"))) {
  (void) FUNC_3(VAR_6.user, VAR_0.user);
  (void) FUNC_3(VAR_6.pass, (VAR_5 == 0) ? "PASSWORD" : VAR_0.pass);
  (void) FUNC_3(VAR_6.acct, VAR_0.acct);
 }

 VAR_6.port = VAR_0.port;






 (void) FUNC_3(VAR_7, VAR_1);
 FUNC_0(VAR_6.dir, sizeof(VAR_6.dir), VAR_7, VAR_2, FUNC_5(VAR_2));

 FUNC_1(&VAR_6, VAR_3, VAR_4);
}
