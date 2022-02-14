
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dpname; } ;
typedef TYPE_1__ DIST_POINT_NAME ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;




 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(int VAR_0, ASN1_VALUE **VAR_1, const ASN1_ITEM *VAR_2,
                  void *VAR_3)
{
    DIST_POINT_NAME *VAR_4 = (DIST_POINT_NAME *)*VAR_1;

    switch (VAR_0) {
    case 128:
        VAR_4->dpname = ((void*)0);
        break;

    case 129:
        FUNC_0(VAR_4->dpname);
        break;
    }
    return 1;
}
