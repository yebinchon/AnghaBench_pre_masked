
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; scalar_t__ data; } ;
typedef TYPE_1__ ASN1_IA5STRING ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(ASN1_IA5STRING *VAR_2, ASN1_IA5STRING *VAR_3)
{
    char *VAR_4 = (char *)VAR_3->data;
    char *VAR_5 = (char *)VAR_2->data;


    if (*VAR_4 == '\0')
        return VAR_1;




    if (VAR_2->length > VAR_3->length) {
        VAR_5 += VAR_2->length - VAR_3->length;
        if (*VAR_4 != '.' && VAR_5[-1] != '.')
            return VAR_0;
    }

    if (FUNC_0(VAR_4, VAR_5))
        return VAR_0;

    return VAR_1;

}
