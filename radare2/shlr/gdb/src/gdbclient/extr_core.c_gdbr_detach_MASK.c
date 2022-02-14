
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int is_valid; } ;
struct TYPE_10__ {TYPE_1__ stop_reason; int sock; } ;
typedef TYPE_2__ libgdbr_t ;
struct TYPE_11__ {int valid; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_3 (TYPE_2__*,char*) ;

int FUNC_4(libgdbr_t *VAR_1) {
 int VAR_2 = -1;

 if (!VAR_1 || !VAR_1->sock) {
  return -1;
 }

 if (!FUNC_1 (VAR_1)) {
  goto end;
 }

 VAR_0.valid = 0;
 VAR_1->stop_reason.is_valid = 0;
 VAR_2 = FUNC_3 (VAR_1, "D");
 if (VAR_2 < 0) {
  VAR_2 = -1;
  goto end;
 }

 VAR_2 = FUNC_0 (VAR_1);
end:
 FUNC_2 (VAR_1);
 return VAR_2;
}
