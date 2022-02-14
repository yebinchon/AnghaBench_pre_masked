
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pmbedtls_msg ;
typedef int mbedtls_msg ;
struct TYPE_5__ {int conf; int entropy; int ctr_drbg; int ssl; int fd; int listen_fd; scalar_t__ psession; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static pmbedtls_msg FUNC_10(void)
{
 pmbedtls_msg VAR_1 = (pmbedtls_msg)FUNC_9( sizeof(mbedtls_msg));
 if (VAR_1) {
  FUNC_7(VAR_1, sizeof(mbedtls_msg));
  VAR_1->psession = FUNC_3();
  if (VAR_1->psession){
   FUNC_2(&VAR_1->listen_fd);
   FUNC_2(&VAR_1->fd);
   FUNC_6(&VAR_1->ssl);
   FUNC_5(&VAR_1->conf);
   FUNC_0(&VAR_1->ctr_drbg);
   FUNC_1(&VAR_1->entropy);



  } else{
   FUNC_8(VAR_1);
   VAR_1 = ((void*)0);
  }
 }
 return VAR_1;
}
