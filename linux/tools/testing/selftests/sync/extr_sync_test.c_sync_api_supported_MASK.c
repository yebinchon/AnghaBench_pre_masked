
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,struct stat*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct stat VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2("/sys/kernel/debug/sync/sw_sync", &VAR_3);
 if (!VAR_4)
  return;

 if (VAR_2 == VAR_1)
  FUNC_1("Sync framework not supported by kernel\n");

 if (VAR_2 == VAR_0)
  FUNC_1("Run Sync test as root.\n");

 FUNC_0("stat failed on /sys/kernel/debug/sync/sw_sync: %s",
    FUNC_3(VAR_2));
}
