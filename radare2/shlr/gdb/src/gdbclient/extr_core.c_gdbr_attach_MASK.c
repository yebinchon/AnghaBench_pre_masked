
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int extended_mode; } ;
struct TYPE_12__ {int is_valid; } ;
struct TYPE_14__ {TYPE_2__ stub_features; TYPE_1__ stop_reason; int sock; } ;
typedef TYPE_3__ libgdbr_t ;
struct TYPE_15__ {int valid; } ;


 char* VAR_0 ;
 char* FUNC_0 (size_t,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int) ;
 TYPE_5__ VAR_1 ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (char*,size_t,char*,char*,int) ;
 int FUNC_9 (char*) ;

int FUNC_10(libgdbr_t *VAR_2, int VAR_3) {
 int VAR_4 = -1;
 char *VAR_5 = ((void*)0);
 size_t VAR_6;

 if (!VAR_2 || !VAR_2->sock) {
  return -1;
 }

 if (!FUNC_3 (VAR_2)) {
  goto end;
 }
 VAR_2->stop_reason.is_valid = 0;
 VAR_1.valid = 0;

 if (VAR_2->stub_features.extended_mode == -1) {
  FUNC_2 (VAR_2);
 }

 if (!VAR_2->stub_features.extended_mode) {

  VAR_4 = -2;
  goto end;
 }

 VAR_6 = FUNC_9 (VAR_0) + (sizeof (int) * 2) + 1;
 VAR_5 = FUNC_0 (VAR_6, sizeof (char));
 if (!VAR_5) {
  VAR_4 = -1;
  goto end;
 }

 VAR_4 = FUNC_8 (VAR_5, VAR_6, "%s%x", VAR_0, VAR_3);
 if (VAR_4 < 0) {
  goto end;
 }

 VAR_4 = FUNC_7 (VAR_2, VAR_5);
 if (VAR_4 < 0) {
  goto end;
 }

 if (FUNC_6 (VAR_2, 0) < 0) {
  VAR_4 = -1;
  goto end;
 }

 VAR_4 = FUNC_5 (VAR_2);
end:
 if (VAR_5) {
  FUNC_1 (VAR_5);
 }
 FUNC_4 (VAR_2);
 return VAR_4;
}
