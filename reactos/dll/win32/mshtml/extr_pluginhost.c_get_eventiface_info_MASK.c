
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ typekind; int cImplTypes; } ;
typedef TYPE_1__ TYPEATTR ;
typedef int ITypeInfo ;
typedef int HTMLPluginContainer ;
typedef int HRESULT ;
typedef int HREFTYPE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int,int*) ;
 int FUNC_3 (int *,int ,int **) ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *,TYPE_1__**) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static ITypeInfo *FUNC_8(HTMLPluginContainer *VAR_3, ITypeInfo *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    ITypeInfo *VAR_8 = ((void*)0);
    TYPEATTR *VAR_9;
    HREFTYPE VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_5(VAR_4, &VAR_9);
    if(FUNC_0(VAR_11))
        return ((void*)0);

    if(VAR_9->typekind != VAR_2) {
        FUNC_7("not coclass\n");
        FUNC_6(VAR_4, VAR_9);
        return ((void*)0);
    }

    VAR_5 = VAR_9->cImplTypes;
    FUNC_6(VAR_4, VAR_9);

    for(VAR_6=0; VAR_6<VAR_5; VAR_6++) {
        VAR_11 = FUNC_2(VAR_4, VAR_6, &VAR_7);
        if(FUNC_0(VAR_11))
            continue;

        if((VAR_7 & VAR_1)) {
            if(!(VAR_7 & VAR_0)) {
                FUNC_1("Handle non-default source iface\n");
                continue;
            }

            VAR_11 = FUNC_4(VAR_4, VAR_6, &VAR_10);
            if(FUNC_0(VAR_11))
                continue;

            VAR_11 = FUNC_3(VAR_4, VAR_10, &VAR_8);
            if(FUNC_0(VAR_11))
                VAR_8 = ((void*)0);
        }
    }

    return VAR_8;
}
