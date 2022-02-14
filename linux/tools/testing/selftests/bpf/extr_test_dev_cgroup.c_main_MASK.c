
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,struct bpf_object**,int*) ;
 scalar_t__ FUNC_3 (int,int ,int ,int *,int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char*) ;

int FUNC_10(int VAR_5, char **VAR_6)
{
 struct bpf_object *VAR_7;
 int VAR_8 = VAR_3;
 int VAR_9, VAR_10;
 __u32 VAR_11;

 if (FUNC_2(VAR_2, VAR_1,
     &VAR_7, &VAR_9)) {
  FUNC_7("Failed to load DEV_CGROUP program\n");
  goto out;
 }

 if (FUNC_8()) {
  FUNC_7("Failed to load DEV_CGROUP program\n");
  goto err;
 }


 VAR_10 = FUNC_5(VAR_4);
 if (VAR_10 < 0) {
  FUNC_7("Failed to create test cgroup\n");
  goto err;
 }

 if (FUNC_6(VAR_4)) {
  FUNC_7("Failed to join cgroup\n");
  goto err;
 }


 if (FUNC_1(VAR_9, VAR_10, VAR_0, 0)) {
  FUNC_7("Failed to attach DEV_CGROUP program");
  goto err;
 }

 if (FUNC_3(VAR_10, VAR_0, 0, ((void*)0), ((void*)0),
      &VAR_11)) {
  FUNC_7("Failed to query attached programs");
  goto err;
 }




 FUNC_0(FUNC_9("rm -f /tmp/test_dev_cgroup_null") == 0);
 FUNC_0(FUNC_9("mknod /tmp/test_dev_cgroup_null c 1 3"));
 FUNC_0(FUNC_9("rm -f /tmp/test_dev_cgroup_null") == 0);


 FUNC_0(FUNC_9("rm -f /tmp/test_dev_cgroup_zero") == 0);
 FUNC_0(FUNC_9("mknod /tmp/test_dev_cgroup_zero c 1 5") == 0);
 FUNC_0(FUNC_9("rm -f /tmp/test_dev_cgroup_zero") == 0);

 FUNC_0(FUNC_9("dd if=/dev/urandom of=/dev/zero count=64") == 0);


 FUNC_0(FUNC_9("dd if=/dev/urandom of=/dev/full count=64"));


 FUNC_0(FUNC_9("dd if=/dev/random of=/dev/zero count=64"));

 VAR_8 = 0;
 FUNC_7("test_dev_cgroup:PASS\n");

err:
 FUNC_4();

out:
 return VAR_8;
}
