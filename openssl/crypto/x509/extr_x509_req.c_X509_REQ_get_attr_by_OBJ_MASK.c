
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int attributes; } ;
struct TYPE_5__ {TYPE_1__ req_info; } ;
typedef TYPE_2__ X509_REQ ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int ,int const*,int) ;

int FUNC_1(const X509_REQ *VAR_0, const ASN1_OBJECT *VAR_1,
                             int VAR_2)
{
    return FUNC_0(VAR_0->req_info.attributes, VAR_1, VAR_2);
}
