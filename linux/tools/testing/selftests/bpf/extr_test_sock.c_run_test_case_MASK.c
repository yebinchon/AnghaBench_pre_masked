
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_test {char* descr; scalar_t__ result; int attach_type; int port; int ip; int type; int domain; int expected_attach_type; int insns; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(int VAR_6, const struct sock_test *VAR_7)
{
 int VAR_8 = -1;
 int VAR_9 = 0;

 FUNC_5("Test case: %s .. ", VAR_7->descr);
 VAR_8 = FUNC_4(VAR_7->insns, VAR_7->expected_attach_type);
 if (VAR_8 < 0) {
  if (VAR_7->result == VAR_3)
   goto out;
  else
   goto err;
 }

 if (FUNC_0(VAR_6, VAR_8, VAR_7->attach_type) == -1) {
  if (VAR_7->result == VAR_0)
   goto out;
  else
   goto err;
 }

 if (FUNC_1(VAR_7->domain, VAR_7->type, VAR_7->ip, VAR_7->port) == -1) {



  if (VAR_7->result == VAR_1 && VAR_5 == VAR_2)
   goto out;
  else
   goto err;
 }


 if (VAR_7->result != VAR_4)
  goto err;

 goto out;
err:
 VAR_9 = -1;
out:

 if (VAR_8 != -1)
  FUNC_2(VAR_6, VAR_7->attach_type);
 FUNC_3(VAR_8);
 FUNC_5("[%s]\n", VAR_9 ? "FAIL" : "PASS");
 return VAR_9;
}
