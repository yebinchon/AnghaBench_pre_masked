
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int test_family ;
struct TYPE_2__ {int fd; } ;
struct epoll_event {TYPE_1__ data; int events; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ,int,struct epoll_event*) ;
 int VAR_5 ;
 int FUNC_3 (int,int ,char*,...) ;
 scalar_t__ FUNC_4 (int,int ,int ,int*,int*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(int *VAR_6, int VAR_7, int VAR_8)
{
 struct epoll_event VAR_9;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13;
 socklen_t VAR_14;

 VAR_10 = FUNC_1(1);
 if (VAR_10 < 0)
  FUNC_3(1, VAR_5, "failed to create epoll");

 VAR_9.events = VAR_1;
 for (VAR_11 = 0; VAR_11 < VAR_7; ++VAR_11) {
  VAR_9.data.fd = VAR_6[VAR_11];
  if (FUNC_2(VAR_10, VAR_2, VAR_6[VAR_11], &VAR_9))
   FUNC_3(1, VAR_5, "failed to register sock epoll");
 }

 FUNC_6(VAR_8);

 VAR_12 = FUNC_5(VAR_10, VAR_8);
 VAR_14 = sizeof(VAR_13);
 if (FUNC_4(VAR_12, VAR_3, VAR_4, &VAR_13, &VAR_14))
  FUNC_3(1, VAR_5, "failed to read socket domain");
 if (VAR_13 != VAR_0)
  FUNC_3(1, 0, "expected to receive on v4 socket but got v6 (%d)",
        VAR_13);

 FUNC_0(VAR_10);
}
