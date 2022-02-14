
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysctl_path ;
struct sysctl_test {int attach_type; char* descr; char* sysctl; scalar_t__ result; } ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,struct sysctl_test*) ;
 int FUNC_1 (int,int,int,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct sysctl_test*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_8(int VAR_7, struct sysctl_test *VAR_8)
{
 enum bpf_attach_type VAR_9 = VAR_8->attach_type;
 char VAR_10[128];
 int VAR_11 = -1;
 int VAR_12 = 0;

 FUNC_6("Test case: %s .. ", VAR_8->descr);

 FUNC_7(VAR_10, sizeof(VAR_10), "/proc/sys/%s",
   VAR_8->sysctl);

 VAR_11 = FUNC_4(VAR_8, VAR_10);
 if (VAR_11 < 0) {
  if (VAR_8->result == VAR_3)
   goto out;
  else
   goto err;
 }

 if (FUNC_1(VAR_11, VAR_7, VAR_9, VAR_1) == -1) {
  if (VAR_8->result == VAR_0)
   goto out;
  else
   goto err;
 }

 VAR_6 = 0;
 if (FUNC_0(VAR_10, VAR_8) == -1) {
  if (VAR_8->result == VAR_4 && VAR_6 == VAR_2)
   goto out;
  else
   goto err;
 }

 if (VAR_8->result != VAR_5) {
  FUNC_5("Unexpected success");
  goto err;
 }

 goto out;
err:
 VAR_12 = -1;
out:

 if (VAR_11 != -1)
  FUNC_2(VAR_7, VAR_9);
 FUNC_3(VAR_11);
 FUNC_6("[%s]\n", VAR_12 ? "FAIL" : "PASS");
 return VAR_12;
}
