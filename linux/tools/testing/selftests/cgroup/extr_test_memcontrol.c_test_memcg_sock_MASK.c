
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_server_args {unsigned short port; int * ctl; } ;
typedef int err ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int ,struct tcp_server_args*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int*,int) ;
 int FUNC_12 (char*,unsigned short) ;
 int VAR_4 ;
 int FUNC_13 (int,int*,int ) ;

__attribute__((used)) static int FUNC_14(const char *VAR_5)
{
 int VAR_6 = 5, VAR_7 = VAR_1, VAR_8, VAR_9;
 unsigned short VAR_10;
 char *VAR_11;

 VAR_11 = FUNC_3(VAR_5, "memcg_test");
 if (!VAR_11)
  goto cleanup;

 if (FUNC_1(VAR_11))
  goto cleanup;

 while (VAR_6--) {
  struct tcp_server_args VAR_12;

  if (FUNC_9(VAR_12.ctl))
   goto cleanup;

  VAR_10 = VAR_12.port = 1000 + FUNC_10() % 60000;

  VAR_8 = FUNC_6(VAR_11, VAR_4, &VAR_12);
  if (VAR_8 < 0)
   goto cleanup;

  FUNC_7(VAR_12.ctl[1]);
  if (FUNC_11(VAR_12.ctl[0], &VAR_9, sizeof(VAR_9)) != sizeof(VAR_9))
   goto cleanup;
  FUNC_7(VAR_12.ctl[0]);

  if (!VAR_9)
   break;
  if (VAR_9 != VAR_0)
   goto cleanup;

  FUNC_13(VAR_8, ((void*)0), 0);
 }

 if (VAR_9 == VAR_0) {
  VAR_7 = VAR_3;
  goto cleanup;
 }

 if (FUNC_12(VAR_11, VAR_10) != VAR_2)
  goto cleanup;

 FUNC_13(VAR_8, &VAR_9, 0);
 if (FUNC_0(VAR_9))
  goto cleanup;

 if (FUNC_5(VAR_11, "memory.current") < 0)
  goto cleanup;

 if (FUNC_4(VAR_11, "memory.stat", "sock "))
  goto cleanup;

 VAR_7 = VAR_2;

cleanup:
 FUNC_2(VAR_11);
 FUNC_8(VAR_11);

 return VAR_7;
}
