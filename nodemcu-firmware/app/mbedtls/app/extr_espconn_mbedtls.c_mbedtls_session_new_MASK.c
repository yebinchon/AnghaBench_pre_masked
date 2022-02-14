
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pmbedtls_session ;
typedef int mbedtls_session ;
struct TYPE_3__ {int pkey; int clicert; int cacert; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static pmbedtls_session FUNC_3(void)
{
 pmbedtls_session VAR_0 = (pmbedtls_session)FUNC_2(sizeof(mbedtls_session));
 if (VAR_0){
  FUNC_1(&VAR_0->cacert);
  FUNC_1(&VAR_0->clicert);
  FUNC_0(&VAR_0->pkey);

 }
 return VAR_0;
}
