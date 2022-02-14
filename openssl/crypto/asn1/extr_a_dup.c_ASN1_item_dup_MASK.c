
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_ITEM ;


 int VAR_0 ;
 void* FUNC_0 (int *,unsigned char const**,long,int const*) ;
 long FUNC_1 (void const*,unsigned char**,int const*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (unsigned char*) ;

void *FUNC_4(const ASN1_ITEM *VAR_2, const void *VAR_3)
{
    unsigned char *VAR_4 = ((void*)0);
    const unsigned char *VAR_5;
    long VAR_6;
    void *VAR_7;

    if (VAR_3 == ((void*)0))
        return ((void*)0);

    VAR_6 = FUNC_1(VAR_3, &VAR_4, VAR_2);
    if (VAR_4 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_1);
        return ((void*)0);
    }
    VAR_5 = VAR_4;
    VAR_7 = FUNC_0(((void*)0), &VAR_5, VAR_6, VAR_2);
    FUNC_3(VAR_4);
    return VAR_7;
}
