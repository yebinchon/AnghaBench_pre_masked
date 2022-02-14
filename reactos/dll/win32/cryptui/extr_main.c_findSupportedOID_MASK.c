
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct OIDToString {int oid; } ;
typedef int LPCSTR ;


 int FUNC_0 (struct OIDToString*) ;
 struct OIDToString* VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static struct OIDToString *FUNC_2(LPCSTR VAR_1)
{
    int VAR_2 = FUNC_0(VAR_0) - 1, VAR_3 = 0;

    while (VAR_3 <= VAR_2)
    {
        int VAR_4, VAR_5 = (VAR_3 + VAR_2) / 2;
        if (!(VAR_4 = FUNC_1(VAR_1, VAR_0[VAR_5].oid)))
            return &VAR_0[VAR_5];
        if (VAR_4 > 0)
            VAR_3 = VAR_5 + 1;
        else
            VAR_2 = VAR_5 - 1;
    }
    return ((void*)0);
}
