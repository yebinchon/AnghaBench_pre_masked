
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct GenericTable {int dummy; } ;
typedef int (* oidToKeyFunc ) (int *,void*) ;
typedef int compareFunc ;
typedef int UINT ;
typedef int AsnObjectIdentifier ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (int ,int ,void*) ;
 int FUNC_3 (void*,struct GenericTable*,size_t,int ) ;

__attribute__((used)) static UINT FUNC_4(AsnObjectIdentifier *VAR_0,
    struct GenericTable *VAR_1, size_t VAR_2, oidToKeyFunc VAR_3,
    compareFunc VAR_4)
{
    UINT VAR_5 = 0;
    void *VAR_6 = FUNC_1(FUNC_0(), 0, VAR_2);

    if (VAR_6)
    {
        VAR_3(VAR_0, VAR_6);
        VAR_5 = FUNC_3(VAR_6, VAR_1, VAR_2, VAR_4);
        FUNC_2(FUNC_0(), 0, VAR_6);
    }
    return VAR_5;
}
