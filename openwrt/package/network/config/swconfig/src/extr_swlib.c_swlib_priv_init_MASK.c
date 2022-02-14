
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(void)
{
 int VAR_4;

 VAR_3 = FUNC_4();
 if (!VAR_3) {
  FUNC_0("Failed to create handle\n");
  goto err;
 }

 if (FUNC_1(VAR_3)) {
  FUNC_0("Failed to connect to generic netlink\n");
  goto err;
 }

 VAR_4 = FUNC_2(VAR_3, &VAR_1);
 if (VAR_4 < 0) {
  FUNC_0("Failed to allocate netlink cache\n");
  goto err;
 }

 VAR_2 = FUNC_3(VAR_1, "switch");
 if (!VAR_2) {
  FUNC_0("Switch API not present\n");
  goto err;
 }
 return 0;

err:
 FUNC_5();
 return -VAR_0;
}
