
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int g; } ;
struct TYPE_13__ {TYPE_1__ lldb; } ;
struct TYPE_14__ {scalar_t__ remote_type; int data; int data_len; TYPE_2__ stub_features; int gdbr_lock; } ;
typedef TYPE_3__ libgdbr_t ;
struct TYPE_15__ {int valid; int buflen; int buf; scalar_t__ init; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int) ;
 TYPE_5__ VAR_2 ;
 int FUNC_8 (TYPE_3__*,int ) ;

int FUNC_9(libgdbr_t *VAR_3) {
 int VAR_4 = -1;

 if (!VAR_3 || !VAR_3->data) {
  return -1;
 }
 if (VAR_2.init && VAR_2.valid) {
  VAR_3->data_len = VAR_2.buflen;
  FUNC_4 (VAR_3->data, VAR_2.buf, VAR_2.buflen);
  return 0;
 }



 if (FUNC_6 (VAR_3->gdbr_lock)) {
  return -1;
 }

 if (!FUNC_0 (VAR_3)) {
  goto end;
 }
 if (VAR_3->remote_type == VAR_1 && !VAR_3->stub_features.lldb.g) {
  VAR_4 = FUNC_2 (VAR_3);
  goto end;
 }
 if ((VAR_4 = FUNC_8 (VAR_3, VAR_0)) < 0) {
  goto end;
 }
 if (FUNC_7 (VAR_3, 0) < 0 || FUNC_3 (VAR_3) < 0) {
  VAR_4 = -1;
  goto end;
 }
 if (VAR_2.init) {
  VAR_2.buflen = VAR_3->data_len;
  FUNC_5 (VAR_2.buf, 0, VAR_2.buflen);
  FUNC_4 (VAR_2.buf, VAR_3->data, VAR_2.buflen);
  VAR_2.valid = 1;
 }

 VAR_4 = 0;
end:
 FUNC_1 (VAR_3);
 return VAR_4;
}
