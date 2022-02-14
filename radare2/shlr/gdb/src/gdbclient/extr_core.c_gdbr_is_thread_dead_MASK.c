
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int thread_id ;
typedef int msg ;
struct TYPE_9__ {scalar_t__ multiprocess; } ;
struct TYPE_10__ {int data_len; char* data; TYPE_1__ stub_features; } ;
typedef TYPE_2__ libgdbr_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_5 (char*,int,char*,char*) ;
 scalar_t__ FUNC_6 (char*,int,int,int,scalar_t__) ;

bool FUNC_7 (libgdbr_t *VAR_0, int VAR_1, int VAR_2) {
 bool VAR_3 = 0;

 if (!VAR_0) {
  return 0;
 }
 if (VAR_0->stub_features.multiprocess && VAR_1 <= 0) {
  return 0;
 }

 if (!FUNC_0 (VAR_0)) {
  goto end;
 }
 char VAR_4[64] = { 0 }, VAR_5[63] = { 0 };
 if (FUNC_6 (VAR_5, sizeof (VAR_5) - 1, VAR_1, VAR_2,
      VAR_0->stub_features.multiprocess) < 0) {
  goto end;
 }
 if (FUNC_5 (VAR_4, sizeof (VAR_4) - 1, "T%s", VAR_5) < 0) {
  goto end;
 }
 if (FUNC_4 (VAR_0, VAR_4) < 0 || FUNC_2 (VAR_0, 0) < 0 || FUNC_3 (VAR_0) < 0) {
  goto end;
 }
 if (VAR_0->data_len == 3 && VAR_0->data[0] == 'E') {
  VAR_3 = 1;
 } else {
  VAR_3 = 0;
 }

end:
 FUNC_1 (VAR_0);
 return VAR_3;
}
