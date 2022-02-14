
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_addr_test {char* descr; int (* loadfn ) (struct sock_addr_test const*) ;scalar_t__ expected_result; int attach_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int,int,int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct sock_addr_test const*) ;
 int FUNC_5 (struct sock_addr_test const*) ;
 int FUNC_6 (struct sock_addr_test const*,int) ;
 int FUNC_7 (struct sock_addr_test const*) ;

__attribute__((used)) static int FUNC_8(int VAR_9, const struct sock_addr_test *VAR_10)
{
 int VAR_11 = -1;
 int VAR_12 = 0;

 FUNC_3("Test case: %s .. ", VAR_10->descr);

 VAR_11 = VAR_10->loadfn(VAR_10);
 if (VAR_10->expected_result == VAR_5 && VAR_11 < 0)
  goto out;
 else if (VAR_10->expected_result == VAR_5 || VAR_11 < 0)
  goto err;

 VAR_12 = FUNC_0(VAR_11, VAR_9, VAR_10->attach_type,
         VAR_2);
 if (VAR_10->expected_result == VAR_1 && VAR_12) {
  VAR_12 = 0;
  goto out;
 } else if (VAR_10->expected_result == VAR_1 || VAR_12) {
  goto err;
 } else if (VAR_10->expected_result == VAR_0) {
  VAR_12 = 0;
  goto out;
 }

 switch (VAR_10->attach_type) {
 case 135:
 case 133:
  VAR_12 = FUNC_4(VAR_10);
  break;
 case 134:
 case 132:
  VAR_12 = FUNC_5(VAR_10);
  break;
 case 130:
 case 128:
  VAR_12 = FUNC_6(VAR_10, 1);
  break;
 case 131:
 case 129:
  VAR_12 = FUNC_6(VAR_10, 0);
  break;
 default:
  goto err;
 }

 if (VAR_10->expected_result == VAR_8 && VAR_12 == VAR_4) {
  VAR_12 = 0;
  goto out;
 }

 if (VAR_10->expected_result == VAR_7 && VAR_12 == VAR_3) {
  VAR_12 = 0;
  goto out;
 }

 if (VAR_12 || VAR_10->expected_result != VAR_6)
  goto err;

 goto out;
err:
 VAR_12 = -1;
out:

 if (VAR_11 != -1)
  FUNC_1(VAR_9, VAR_10->attach_type);
 FUNC_2(VAR_11);
 FUNC_3("[%s]\n", VAR_12 ? "FAIL" : "PASS");
 return VAR_12;
}
