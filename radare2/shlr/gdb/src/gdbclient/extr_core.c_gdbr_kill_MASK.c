
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ multiprocess; } ;
struct TYPE_10__ {int is_valid; } ;
struct TYPE_12__ {scalar_t__ pid; TYPE_2__ stub_features; TYPE_1__ stop_reason; int sock; } ;
typedef TYPE_3__ libgdbr_t ;
struct TYPE_13__ {int valid; } ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_5__ VAR_0 ;
 int FUNC_3 (TYPE_3__*,char*) ;

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

 if (VAR_1->stub_features.multiprocess) {
  if (VAR_1->pid <= 0) {
   VAR_2 = -1;
   goto end;
  }
  VAR_2 = FUNC_0 (VAR_1, VAR_1->pid);
  goto end;
 }

 if ((VAR_2 = FUNC_3 (VAR_1, "k")) < 0) {
  goto end;
 }

 VAR_2 = 0;
end:
 FUNC_2 (VAR_1);
 return VAR_2;
}
