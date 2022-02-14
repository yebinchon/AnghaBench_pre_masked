
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int libgdbr_t ;
typedef int command ;
struct TYPE_2__ {int valid; } ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int,char*) ;
 scalar_t__ FUNC_6 (int *,int) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_7 (int *,char*) ;
 int FUNC_8 (char*,int,char*,char*,int) ;

int FUNC_9(libgdbr_t *VAR_2, int VAR_3, char *VAR_4, int VAR_5) {
 int VAR_6 = -1;
 char VAR_7[255] = { 0 };
 if (!VAR_2) {
  return -1;
 }
 if (!FUNC_1 (VAR_2)) {
  goto end;
 }

 VAR_1.valid = 0;
 VAR_6 = FUNC_8 (VAR_7, sizeof (VAR_7) - 1, "%s%x=", VAR_0, VAR_3);
 if (VAR_5 + VAR_6 >= sizeof (VAR_7)) {
  FUNC_0 ("command is too small\n");
  VAR_6 = -1;
  goto end;
 }
 FUNC_4 (VAR_7 + VAR_6, VAR_4, VAR_5);
 FUNC_5 (VAR_4, VAR_5, (VAR_7 + VAR_6));
 if (FUNC_7 (VAR_2, VAR_7) < 0) {
  VAR_6 = -1;
  goto end;
 }
 if (FUNC_6 (VAR_2, 0) >= 0) {
  FUNC_3 (VAR_2);
 }

 VAR_6 = 0;
end:
 FUNC_2 (VAR_2);
 return VAR_6;
}
