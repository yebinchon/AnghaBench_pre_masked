
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ canon_enclen; int canon_enc; scalar_t__ modified; } ;
typedef TYPE_1__ X509_NAME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(X509_NAME *VAR_3, X509_NAME *VAR_4)
{

    if (VAR_3->modified && FUNC_0(VAR_3, ((void*)0)) < 0)
        return VAR_0;
    if (VAR_4->modified && FUNC_0(VAR_4, ((void*)0)) < 0)
        return VAR_0;
    if (VAR_4->canon_enclen > VAR_3->canon_enclen)
        return VAR_1;
    if (FUNC_1(VAR_4->canon_enc, VAR_3->canon_enc, VAR_4->canon_enclen))
        return VAR_1;
    return VAR_2;
}
