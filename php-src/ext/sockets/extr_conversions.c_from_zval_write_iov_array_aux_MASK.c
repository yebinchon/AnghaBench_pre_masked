
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct msghdr {TYPE_1__* msg_iov; } ;
typedef int ser_context ;
struct TYPE_2__ {int iov_base; int iov_len; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int **) ;

__attribute__((used)) static void FUNC_6(zval *VAR_0, unsigned VAR_1, void **VAR_2, ser_context *VAR_3)
{
 struct msghdr *VAR_4 = VAR_2[0];
 zend_string *VAR_5, *VAR_6;

 VAR_5 = FUNC_5(VAR_0, &VAR_6);

 VAR_4->msg_iov[VAR_1 - 1].iov_base = FUNC_2(FUNC_0(VAR_5), VAR_3);
 VAR_4->msg_iov[VAR_1 - 1].iov_len = FUNC_0(VAR_5);
 FUNC_3(VAR_4->msg_iov[VAR_1 - 1].iov_base, FUNC_1(VAR_5), FUNC_0(VAR_5));

 FUNC_4(VAR_6);
}
