
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sha1_hash; } ;
typedef TYPE_1__ X509_CRL ;


 int FUNC_0 (int ,int ,int) ;

int FUNC_1(const X509_CRL *VAR_0, const X509_CRL *VAR_1)
{
    return FUNC_0(VAR_0->sha1_hash, VAR_1->sha1_hash, 20);
}
