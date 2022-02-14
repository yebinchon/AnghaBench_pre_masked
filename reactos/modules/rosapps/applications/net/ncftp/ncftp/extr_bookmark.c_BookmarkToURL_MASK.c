
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* user; char* pass; char* name; int port; char* dir; } ;
typedef TYPE_1__* BookmarkPtr ;


 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*,char*,unsigned int) ;

void
FUNC_3(BookmarkPtr VAR_0, char *VAR_1, size_t VAR_2)
{
 char VAR_3[32];





 (void) FUNC_1(VAR_1, "ftp://", VAR_2);
 if (VAR_0->user[0] != '\0') {
  (void) FUNC_0(VAR_1, VAR_0->user, VAR_2);
  if (VAR_0->pass[0] != '\0') {
   (void) FUNC_0(VAR_1, ":", VAR_2);
   (void) FUNC_0(VAR_1, "PASSWORD", VAR_2);
  }
  (void) FUNC_0(VAR_1, "@", VAR_2);
 }
 (void) FUNC_0(VAR_1, VAR_0->name, VAR_2);
 if (VAR_0->port != 21) {
  (void) FUNC_2(VAR_3, ":%u", (unsigned int) VAR_0->port);
  (void) FUNC_0(VAR_1, VAR_3, VAR_2);
 }
 if (VAR_0->dir[0] == '/') {

  (void) FUNC_0(VAR_1, "/%2F", VAR_2);
  (void) FUNC_0(VAR_1, VAR_0->dir + 1, VAR_2);
  (void) FUNC_0(VAR_1, "/", VAR_2);
 } else if (VAR_0->dir[0] != '\0') {
  (void) FUNC_0(VAR_1, "/", VAR_2);
  (void) FUNC_0(VAR_1, VAR_0->dir, VAR_2);
  (void) FUNC_0(VAR_1, "/", VAR_2);
 }
}
