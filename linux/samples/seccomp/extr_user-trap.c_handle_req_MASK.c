
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int target ;
struct seccomp_notif_resp {int error; scalar_t__ val; int id; } ;
struct TYPE_2__ {scalar_t__ nr; int* args; } ;
struct seccomp_notif {int pid; TYPE_1__ data; int id; } ;
typedef int source ;
typedef int path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int,int ,int *) ;
 scalar_t__ FUNC_3 (int,int,int ) ;
 scalar_t__ FUNC_4 (char*,char*,int *,int,int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (char*,int,char*,int) ;
 int VAR_7 ;
 int FUNC_9 (char*,char*,int) ;

__attribute__((used)) static int FUNC_10(struct seccomp_notif *VAR_8,
        struct seccomp_notif_resp *VAR_9, int VAR_10)
{
 char VAR_11[VAR_3], VAR_12[VAR_3], VAR_13[VAR_3];
 int VAR_14 = -1, VAR_15;

 VAR_9->id = VAR_8->id;
 VAR_9->error = -VAR_0;
 VAR_9->val = 0;

 if (VAR_8->data.nr != VAR_6) {
  FUNC_1(VAR_7, "huh? trapped something besides mount? %ld\n", VAR_8->data.nr);
  return -1;
 }


 if (!(VAR_8->data.args[3] & VAR_1))
  return 0;





 FUNC_8(VAR_11, sizeof(VAR_11), "/proc/%d/mem", VAR_8->pid);
 VAR_15 = FUNC_5(VAR_11, VAR_2);
 if (VAR_15 < 0) {
  FUNC_6("open mem");
  return -1;
 }
 if (FUNC_2(VAR_10, VAR_4, &VAR_8->id) < 0) {
  FUNC_1(VAR_7, "task died before we could map its memory\n");
  goto out;
 }






 if (FUNC_3(VAR_15, VAR_8->data.args[0], VAR_5) < 0) {
  FUNC_6("seek");
  goto out;
 }

 VAR_14 = FUNC_7(VAR_15, VAR_12, sizeof(VAR_12));
 if (VAR_14 < 0) {
  FUNC_6("read");
  goto out;
 }

 if (FUNC_3(VAR_15, VAR_8->data.args[1], VAR_5) < 0) {
  FUNC_6("seek");
  goto out;
 }

 VAR_14 = FUNC_7(VAR_15, VAR_13, sizeof(VAR_13));
 if (VAR_14 < 0) {
  FUNC_6("read");
  goto out;
 }






 if (!FUNC_9(VAR_12, "/tmp/", 5) && !FUNC_9(VAR_13, "/tmp/", 5)) {
  if (FUNC_4(VAR_12, VAR_13, ((void*)0), VAR_8->data.args[3], ((void*)0)) < 0) {
   VAR_14 = -1;
   FUNC_6("actual mount");
   goto out;
  }
  VAR_9->error = 0;
 }




 VAR_14 = 0;

out:
 FUNC_0(VAR_15);
 return VAR_14;
}
