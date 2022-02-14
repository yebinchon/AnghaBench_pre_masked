
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int boolean; int * ptr; } ;
struct TYPE_5__ {int type; TYPE_1__ value; } ;
typedef int ASN1_VALUE ;
typedef TYPE_2__ ASN1_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int *,int ) ;

void FUNC_1(ASN1_TYPE *VAR_2, int VAR_3, void *VAR_4)
{
    if (VAR_2->type != VAR_0
            && VAR_2->type != VAR_1
            && VAR_2->value.ptr != ((void*)0)) {
        ASN1_TYPE **VAR_5 = &VAR_2;
        FUNC_0((ASN1_VALUE **)VAR_5, ((void*)0), 0);
    }
    VAR_2->type = VAR_3;
    if (VAR_3 == VAR_0)
        VAR_2->value.boolean = VAR_4 ? 0xff : 0;
    else
        VAR_2->value.ptr = VAR_4;
}
