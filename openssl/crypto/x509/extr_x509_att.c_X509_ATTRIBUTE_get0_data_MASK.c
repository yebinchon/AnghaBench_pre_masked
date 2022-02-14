
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_ATTRIBUTE ;
struct TYPE_5__ {void* ptr; } ;
struct TYPE_6__ {TYPE_1__ value; } ;
typedef TYPE_2__ ASN1_TYPE ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;

void *FUNC_3(X509_ATTRIBUTE *VAR_4, int VAR_5,
                               int VAR_6, void *VAR_7)
{
    ASN1_TYPE *VAR_8;
    VAR_8 = FUNC_1(VAR_4, VAR_5);
    if (!VAR_8)
        return ((void*)0);
    if (VAR_6 == VAR_0
            || VAR_6 == VAR_1
            || VAR_6 != FUNC_0(VAR_8)) {
        FUNC_2(VAR_2, VAR_3);
        return ((void*)0);
    }
    return VAR_8->value.ptr;
}
