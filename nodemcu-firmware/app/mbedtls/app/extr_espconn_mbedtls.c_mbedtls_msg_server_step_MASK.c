
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* pmbedtls_msg ;
typedef int mbedtls_msg ;
struct TYPE_8__ {int * out_buf; } ;
struct TYPE_7__ {int entropy; int ctr_drbg; int conf; TYPE_3__ ssl; int fd; scalar_t__ psession; scalar_t__ quiet; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(pmbedtls_msg VAR_1)
{
 FUNC_0(VAR_1);


 if (VAR_1->psession){
  FUNC_6(&VAR_1->psession);
 }
 FUNC_3(&VAR_1->entropy);
 FUNC_10(&VAR_1->ssl);
 FUNC_8(&VAR_1->conf);
 FUNC_1(&VAR_1->ctr_drbg);


 FUNC_13(VAR_1, sizeof(mbedtls_msg));
 VAR_1->psession = FUNC_7();
 if (VAR_1->psession){
  FUNC_5(&VAR_1->fd);
  FUNC_11(&VAR_1->ssl);
  FUNC_9(&VAR_1->conf);
  FUNC_2(&VAR_1->ctr_drbg);
  FUNC_4(&VAR_1->entropy);
 }
}
