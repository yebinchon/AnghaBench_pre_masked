
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* data; int flags; } ;
typedef int CMS_ContentInfo ;
typedef TYPE_1__ ASN1_OCTET_STRING ;


 TYPE_1__* FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__** FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;

int FUNC_3(unsigned char ***VAR_4, CMS_ContentInfo *VAR_5)
{
    ASN1_OCTET_STRING **VAR_6;
    VAR_6 = FUNC_1(VAR_5);
    if (VAR_6 == ((void*)0))
        return 0;
    if (*VAR_6 == ((void*)0))
        *VAR_6 = FUNC_0();
    if (*VAR_6 != ((void*)0)) {
        (*VAR_6)->flags |= VAR_1;
        (*VAR_6)->flags &= ~VAR_0;
        *VAR_4 = &(*VAR_6)->data;
        return 1;
    }
    FUNC_2(VAR_2, VAR_3);
    return 0;
}
