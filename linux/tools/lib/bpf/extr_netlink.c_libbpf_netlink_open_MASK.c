
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_nl {int nl_pid; int nl_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sa ;
typedef int one ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int*) ;
 int FUNC_4 (struct sockaddr_nl*,int ,int) ;
 scalar_t__ FUNC_5 (int,int ,int ,int*,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_7 ;

int FUNC_7(__u32 *VAR_8)
{
 struct sockaddr_nl VAR_9;
 socklen_t VAR_10;
 int VAR_11 = 1, VAR_12;
 int VAR_13;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.nl_family = VAR_0;

 VAR_13 = FUNC_6(VAR_0, VAR_4, VAR_3);
 if (VAR_13 < 0)
  return -VAR_6;

 if (FUNC_5(VAR_13, VAR_5, VAR_2,
         &VAR_11, sizeof(VAR_11)) < 0) {
  FUNC_2(VAR_7, "Netlink error reporting not supported\n");
 }

 if (FUNC_0(VAR_13, (struct sockaddr *)&VAR_9, sizeof(VAR_9)) < 0) {
  VAR_12 = -VAR_6;
  goto cleanup;
 }

 VAR_10 = sizeof(VAR_9);
 if (FUNC_3(VAR_13, (struct sockaddr *)&VAR_9, &VAR_10) < 0) {
  VAR_12 = -VAR_6;
  goto cleanup;
 }

 if (VAR_10 != sizeof(VAR_9)) {
  VAR_12 = -VAR_1;
  goto cleanup;
 }

 *VAR_8 = VAR_9.nl_pid;
 return VAR_13;

cleanup:
 FUNC_1(VAR_13);
 return VAR_12;
}
