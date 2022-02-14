
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int format; int grfFlags; int IPropertyStorage_iface; int locale; int codePage; } ;
typedef int REFFMTID ;
typedef TYPE_1__ PropertyStorage_impl ;
typedef int IStream ;
typedef int IPropertyStorage ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int,TYPE_1__**) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (char*,TYPE_1__*,...) ;
 int FUNC_4 (int **) ;

__attribute__((used)) static HRESULT FUNC_5(IStream *VAR_5,
 REFFMTID VAR_6, DWORD VAR_7, DWORD VAR_8, IPropertyStorage** VAR_9)
{
    PropertyStorage_impl *VAR_10;
    HRESULT VAR_11;

    FUNC_4(VAR_9);
    VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_8, &VAR_10);
    if (FUNC_2(VAR_11))
    {
        VAR_10->format = 0;
        VAR_10->grfFlags = VAR_7;
        if (VAR_10->grfFlags & VAR_3)
            VAR_10->format = 1;

        if (VAR_10->grfFlags & VAR_2)
            VAR_10->codePage = FUNC_0();
        else
            VAR_10->codePage = VAR_0;
        VAR_10->locale = VAR_1;
        FUNC_3("Code page is %d, locale is %d\n", VAR_10->codePage, VAR_10->locale);
        *VAR_9 = &VAR_10->IPropertyStorage_iface;
        FUNC_3("PropertyStorage %p constructed\n", VAR_10);
        VAR_11 = VAR_4;
    }
    return VAR_11;
}
