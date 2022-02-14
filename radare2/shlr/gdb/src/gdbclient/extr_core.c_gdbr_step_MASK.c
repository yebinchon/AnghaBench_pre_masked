
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int thread_id ;
struct TYPE_7__ {int multiprocess; } ;
struct TYPE_8__ {TYPE_1__ stub_features; int pid; } ;
typedef TYPE_2__ libgdbr_t ;


 char* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_2__*,char*,char*) ;
 scalar_t__ FUNC_4 (char*,int,int ,int,int ) ;

int FUNC_5(libgdbr_t *VAR_1, int VAR_2) {
 int VAR_3 = -1;
 char VAR_4[64] = { 0 };

 if (!FUNC_0 (VAR_1)) {
  goto end;
 }

 if (VAR_2 <= 0 || FUNC_4 (VAR_4, sizeof (VAR_4) - 1, VAR_1->pid, VAR_2,
      VAR_1->stub_features.multiprocess) < 0) {
  FUNC_3 (VAR_1, "vCont?", ((void*)0));
  FUNC_3 (VAR_1, FUNC_2 ("Hc%d", VAR_2), ((void*)0));
  VAR_3 = FUNC_3 (VAR_1, VAR_0, ((void*)0));
  goto end;
 }

 VAR_3 = FUNC_3 (VAR_1, VAR_0, VAR_4);
end:
 FUNC_1 (VAR_1);
 return VAR_3;
}
