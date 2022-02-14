
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int g; } ;
struct TYPE_13__ {TYPE_1__ lldb; scalar_t__ qXfer_features_read; } ;
struct TYPE_14__ {int data_len; char* data; TYPE_2__ stub_features; } ;
typedef TYPE_3__ libgdbr_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,char*) ;

__attribute__((used)) static int FUNC_7(libgdbr_t *VAR_0) {
 int VAR_1 = -1;
 if (!FUNC_0 (VAR_0)) {
  goto end;
 }
 FUNC_4 (VAR_0);
 if (VAR_0->stub_features.qXfer_features_read) {
  FUNC_2 (VAR_0);
 }

 if (FUNC_6 (VAR_0, "g") < 0 || FUNC_3 (VAR_0, 0) < 0 || FUNC_5 (VAR_0) < 0) {
  VAR_1 = -1;
  goto end;
 }
 if (VAR_0->data_len == 0 || (VAR_0->data_len == 3 && VAR_0->data[0] == 'E')) {
  VAR_1 = -1;
  goto end;
 }
 VAR_0->stub_features.lldb.g = 1;

 VAR_1 = 0;
end:
 FUNC_1 (VAR_0);
 return VAR_1;
}
