
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_txtime {int member_0; int clockid; } ;
typedef int socklen_t ;
typedef int so_txtime_val ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,char*) ;
 scalar_t__ FUNC_1 (int,int ,int ,struct sock_txtime*,int*) ;
 scalar_t__ FUNC_2 (struct sock_txtime*,struct sock_txtime*,int) ;
 scalar_t__ FUNC_3 (int,int ,int ,struct sock_txtime*,int) ;

__attribute__((used)) static void FUNC_4(int VAR_4)
{
 struct sock_txtime VAR_5 = { .clockid = VAR_2 };
 struct sock_txtime VAR_6 = { 0 };
 socklen_t VAR_7 = sizeof(VAR_5);

 if (FUNC_3(VAR_4, VAR_0, VAR_1,
         &VAR_5, sizeof(VAR_5)))
  FUNC_0(1, VAR_3, "setsockopt txtime");

 if (FUNC_1(VAR_4, VAR_0, VAR_1,
         &VAR_6, &VAR_7))
  FUNC_0(1, VAR_3, "getsockopt txtime");

 if (VAR_7 != sizeof(VAR_5) ||
     FUNC_2(&VAR_5, &VAR_6, VAR_7))
  FUNC_0(1, 0, "getsockopt txtime: mismatch");
}
