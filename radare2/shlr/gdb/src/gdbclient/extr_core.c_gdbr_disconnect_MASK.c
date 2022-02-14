
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int regprofile; scalar_t__ valid; } ;
struct TYPE_8__ {int is_valid; } ;
struct TYPE_10__ {scalar_t__ connected; int registers; TYPE_2__ target; TYPE_1__ stop_reason; int sock; } ;
typedef TYPE_3__ libgdbr_t ;
struct TYPE_11__ {int valid; int buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 TYPE_4__ VAR_0 ;

int FUNC_4(libgdbr_t *VAR_1) {

 if (!VAR_1 || !FUNC_3 (VAR_1->sock)) {
  return -1;
 }
 if (!FUNC_1 (VAR_1)) {
  goto end;
 }
 VAR_0.valid = 0;
 VAR_1->stop_reason.is_valid = 0;
 FUNC_0 (VAR_0.buf);
 if (VAR_1->target.valid) {
  FUNC_0 (VAR_1->target.regprofile);
  FUNC_0 (VAR_1->registers);
 }
 VAR_1->connected = 0;
end:
 FUNC_2 (VAR_1);
 return 0;
}
