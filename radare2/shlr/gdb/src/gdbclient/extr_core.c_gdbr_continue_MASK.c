
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
typedef int command ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*,char*) ;
 int FUNC_3 (char*,int,char*,char*,int) ;
 int FUNC_4 (char*,int ,int) ;
 scalar_t__ FUNC_5 (char*,int,int ,int,int ) ;

int FUNC_6(libgdbr_t *VAR_2, int VAR_3, int VAR_4, int VAR_5) {
 char VAR_6[64] = { 0 };
 char VAR_7[16] = { 0 };
 int VAR_8 = -1;

 if (!FUNC_0 (VAR_2)) {
  goto end;
 }

 if (VAR_5 <= 0) {
  FUNC_4 (VAR_7, VAR_0, sizeof (VAR_7) - 1);
 } else {
  FUNC_3 (VAR_7, sizeof (VAR_7) - 1, "%s%02x", VAR_1, VAR_5);
 }
 if (VAR_4 <= 0 || FUNC_5 (VAR_6, sizeof (VAR_6) - 1, VAR_2->pid, VAR_4,
      VAR_2->stub_features.multiprocess) < 0) {
  VAR_8 = FUNC_2 (VAR_2, VAR_7, ((void*)0));
  goto end;
 }

 VAR_8 = FUNC_2 (VAR_2, VAR_7, VAR_6);
end:
 FUNC_1 (VAR_2);
 return VAR_8;
}
