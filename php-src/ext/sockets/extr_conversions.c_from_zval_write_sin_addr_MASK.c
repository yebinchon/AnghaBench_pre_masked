
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct sockaddr_in {int sin_addr; int member_0; } ;
struct TYPE_4__ {int sock; } ;
typedef TYPE_1__ ser_context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (char*,int *,int) ;
 int FUNC_3 (struct sockaddr_in*,int ,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int **) ;

__attribute__((used)) static void FUNC_6(const zval *VAR_0, char *VAR_1, ser_context *VAR_2)
{
 int VAR_3;
 struct sockaddr_in VAR_4 = {0};
 zend_string *VAR_5, *VAR_6;

 VAR_5 = FUNC_5((zval *) VAR_0, &VAR_6);
 VAR_3 = FUNC_3(&VAR_4, FUNC_0(VAR_5), VAR_2->sock);
 if (VAR_3) {
  FUNC_2(VAR_1, &VAR_4.sin_addr, sizeof VAR_4.sin_addr);
 } else {

  FUNC_1(VAR_2, "could not resolve address '%s' to get an AF_INET "
    "address", FUNC_0(VAR_5));
 }

 FUNC_4(VAR_6);
}
