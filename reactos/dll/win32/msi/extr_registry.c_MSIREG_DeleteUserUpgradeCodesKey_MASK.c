
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int * LPCWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_3 ;

UINT FUNC_6(LPCWSTR VAR_4)
{
    WCHAR VAR_5[VAR_2], VAR_6[0x200];

    if (!FUNC_3( VAR_4, VAR_5 )) return VAR_0;
    FUNC_1("%s squashed %s\n", FUNC_2(VAR_4), FUNC_2(VAR_5));

    FUNC_5(VAR_6, VAR_3);
    FUNC_4( VAR_6, VAR_5 );
    return FUNC_0(VAR_1, VAR_6);
}
