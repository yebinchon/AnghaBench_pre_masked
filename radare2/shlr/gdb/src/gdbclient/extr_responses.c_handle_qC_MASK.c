
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int multiprocess; } ;
struct TYPE_6__ {char* data; size_t data_len; TYPE_1__ stub_features; int tid; int pid; } ;
typedef TYPE_2__ libgdbr_t ;


 scalar_t__ FUNC_0 (char*,int *,int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

int FUNC_3(libgdbr_t *VAR_0) {

 if (FUNC_2 (VAR_0->data, "QC", 2)) {
  FUNC_1 (VAR_0);
  return -1;
 }
 VAR_0->data[VAR_0->data_len] = '\0';
 if (FUNC_0 (VAR_0->data + 2, &VAR_0->pid, &VAR_0->tid, VAR_0->stub_features.multiprocess) < 0) {
  FUNC_1 (VAR_0);
  return -1;
 }
 return FUNC_1 (VAR_0);
}
