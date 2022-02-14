
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * uri; } ;
typedef TYPE_1__ parse_data ;
typedef int WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*,int ,...) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const**,TYPE_1__*,int ) ;
 int FUNC_3 (int const**,TYPE_1__*,int ) ;
 int FUNC_4 (int const**,TYPE_1__*,int ) ;
 int FUNC_5 (int const**,TYPE_1__*,int ,int ) ;

__attribute__((used)) static BOOL FUNC_6(parse_data *VAR_2, DWORD VAR_3) {
    const WCHAR *VAR_4;
    const WCHAR **VAR_5;

    VAR_4 = VAR_2->uri;
    VAR_5 = &VAR_4;

    FUNC_0("(%p %x): BEGINNING TO PARSE URI %s.\n", VAR_2, VAR_3, FUNC_1(VAR_2->uri));

    if(!FUNC_5(VAR_5, VAR_2, VAR_3, 0))
        return VAR_0;

    if(!FUNC_3(VAR_5, VAR_2, VAR_3))
        return VAR_0;

    if(!FUNC_4(VAR_5, VAR_2, VAR_3))
        return VAR_0;

    if(!FUNC_2(VAR_5, VAR_2, VAR_3))
        return VAR_0;

    FUNC_0("(%p %x): FINISHED PARSING URI.\n", VAR_2, VAR_3);
    return VAR_1;
}
