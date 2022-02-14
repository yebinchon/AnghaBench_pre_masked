
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sdb_types; } ;
typedef TYPE_1__ RAnal ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char**) ;
 char* FUNC_2 (char*,char const*,...) ;
 char* FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 char* FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;
 int FUNC_7 (char*,int,int) ;

__attribute__((used)) static int FUNC_8(void *VAR_1, const char *VAR_2, const char *VAR_3) {
 if (!VAR_1) {
  return -1;
 }
 int VAR_4 = 0;
 RAnal *VAR_5 = (RAnal*)VAR_1;


 if (!FUNC_6 (VAR_3, "struct", 6) && FUNC_6 (VAR_2, "struct.", 7)) {

  VAR_4 = VAR_0;
  const char *VAR_6 = VAR_2;
  int VAR_7 = 0;

  char* VAR_8 = FUNC_2 ("struct.%s", VAR_2);
  char *VAR_9 = FUNC_3 (VAR_5->sdb_types, VAR_8, 0);
  char *VAR_10, *VAR_11 = VAR_9;
  if (VAR_9) {
   do {
    char *VAR_12 = FUNC_1 (VAR_11, &VAR_10);
    if (!VAR_12) {
     break;
    }
    VAR_8 = FUNC_2 ("struct.%s.%s", VAR_2, VAR_12);
    char *VAR_13 = FUNC_3 (VAR_5->sdb_types, VAR_8, 0);
    if (!VAR_13) {
     break;
    }
    char *VAR_14 = FUNC_5 (VAR_13, ',');
    if (VAR_14) {
     *VAR_14++ = 0;
     VAR_14 = FUNC_5 (VAR_14, ',');
     if (VAR_14) {
      *VAR_14++ = 0;
     }
     char *VAR_15 = VAR_14;

     VAR_8 = FUNC_2 ("struct.%s.%s.meta", VAR_13, VAR_15);
     VAR_4 = FUNC_4 (VAR_5->sdb_types, VAR_8, 0);
     FUNC_7 (VAR_13, 0, VAR_4);
    }
    FUNC_0 (VAR_13);
    VAR_11 = VAR_10;
   } while (VAR_10);
   FUNC_0 (VAR_9);
  }
  FUNC_7 ((char *)VAR_6, VAR_7, VAR_4);
 }
 return 0;
}
