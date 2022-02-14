
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int filename ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ,int*,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,int*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int * VAR_3 ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (char*,int,char*,char*) ;
 int VAR_4 ;
 int FUNC_13 () ;

int FUNC_14(int VAR_5, char **VAR_6)
{
 pid_t VAR_7, VAR_8 = FUNC_6();
 int VAR_9, VAR_10 = 0, VAR_11 = 0;
 char VAR_12[256];

 FUNC_12(VAR_12, sizeof(VAR_12), "%s_kern.o", VAR_6[0]);
 if (FUNC_8(VAR_12)) {
  FUNC_10("%s", VAR_2);
  return 1;
 }

 if (FUNC_11())
  goto err;

 VAR_9 = FUNC_4(VAR_1);

 if (VAR_9 < 0)
  goto err;

 if (FUNC_1(VAR_3[0], &VAR_10, &VAR_9, VAR_0)) {
  FUNC_9("Adding target cgroup to map");
  goto err;
 }

 if (FUNC_7(VAR_1))
  goto err;






 FUNC_13();
 FUNC_0(VAR_3[1], &VAR_10, &VAR_7);

 if (VAR_8 != VAR_7) {
  FUNC_5(VAR_4,
   "BPF Helper didn't write correct PID to map, but: %ld\n",
   VAR_7);
  goto err;
 }


 if (FUNC_7("/"))
  goto err;

 VAR_7 = 0;
 FUNC_1(VAR_3[1], &VAR_10, &VAR_7, VAR_0);

 FUNC_13();
 FUNC_0(VAR_3[1], &VAR_10, &VAR_7);

 if (VAR_8 == VAR_7) {
  FUNC_5(VAR_4, "BPF cgroup negative test did not work\n");
  goto err;
 }

 goto out;
err:
 VAR_11 = 1;

out:
 FUNC_3(VAR_9);
 FUNC_2();
 return VAR_11;
}
