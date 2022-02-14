
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ssl; } ;
typedef TYPE_1__ PGconn ;
typedef int BIO_METHOD ;
typedef int BIO ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(PGconn *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 BIO *VAR_6;
 BIO_METHOD *VAR_7;

 VAR_7 = FUNC_5();
 if (VAR_7 == ((void*)0))
 {
  FUNC_4(VAR_2, VAR_1);
  goto err;
 }
 VAR_6 = FUNC_0(VAR_7);
 if (VAR_6 == ((void*)0))
 {
  FUNC_4(VAR_2, VAR_1);
  goto err;
 }
 FUNC_1(VAR_6, VAR_3);

 FUNC_3(VAR_3->ssl, VAR_6, VAR_6);
 FUNC_2(VAR_6, VAR_4, VAR_0);
 VAR_5 = 1;
err:
 return VAR_5;
}
