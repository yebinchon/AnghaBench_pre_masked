
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef int CMS_ContentInfo ;
typedef TYPE_1__ ASN1_OCTET_STRING ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;

int FUNC_4(CMS_ContentInfo *VAR_3, int VAR_4)
{
    ASN1_OCTET_STRING **VAR_5;

    VAR_5 = FUNC_2(VAR_3);
    if (VAR_5 == ((void*)0))
        return 0;
    if (VAR_4) {
        FUNC_0(*VAR_5);
        *VAR_5 = ((void*)0);
        return 1;
    }
    if (*VAR_5 == ((void*)0))
        *VAR_5 = FUNC_1();
    if (*VAR_5 != ((void*)0)) {



        (*VAR_5)->flags |= VAR_0;
        return 1;
    }
    FUNC_3(VAR_1, VAR_2);
    return 0;
}
