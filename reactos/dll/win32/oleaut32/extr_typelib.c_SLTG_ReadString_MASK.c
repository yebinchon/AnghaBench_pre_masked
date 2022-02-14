
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int string_list; } ;
typedef int TLBString ;
typedef TYPE_1__ ITypeLibImpl ;
typedef int DWORD ;
typedef int * BSTR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*,int,int *,int ) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;

__attribute__((used)) static WORD FUNC_4(const char *VAR_1, const TLBString **VAR_2, ITypeLibImpl *VAR_3)
{
    WORD VAR_4;
    DWORD VAR_5;
    BSTR VAR_6;

    *VAR_2 = ((void*)0);
    VAR_4 = *(const WORD*)VAR_1;
    if(VAR_4 == 0xffff) return 2;

    VAR_5 = FUNC_0(VAR_0, 0, VAR_1 + 2, VAR_4, ((void*)0), 0);
    VAR_6 = FUNC_1(((void*)0), VAR_5);
    if (VAR_6) {
        FUNC_0(VAR_0, 0, VAR_1 + 2, VAR_4, VAR_6, VAR_5);
        *VAR_2 = FUNC_3(&VAR_3->string_list, VAR_6);
        FUNC_2(VAR_6);
    }
    return VAR_4 + 2;
}
