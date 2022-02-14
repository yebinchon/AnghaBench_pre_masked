
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int IPropertyStorage_iface; } ;
typedef int REFFMTID ;
typedef TYPE_1__ PropertyStorage_impl ;
typedef int IStream ;
typedef int IPropertyStorage ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (char*,TYPE_1__*) ;
 int FUNC_5 (int **) ;

__attribute__((used)) static HRESULT FUNC_6(IStream *VAR_1,
 REFFMTID VAR_2, DWORD VAR_3, IPropertyStorage** VAR_4)
{
    PropertyStorage_impl *VAR_5;
    HRESULT VAR_6;

    FUNC_5(VAR_4);
    VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_5);
    if (FUNC_3(VAR_6))
    {
        VAR_6 = FUNC_2(VAR_5);
        if (FUNC_3(VAR_6))
        {
            *VAR_4 = &VAR_5->IPropertyStorage_iface;
            FUNC_4("PropertyStorage %p constructed\n", VAR_5);
            VAR_6 = VAR_0;
        }
        else FUNC_0( &VAR_5->IPropertyStorage_iface );
    }
    return VAR_6;
}
