
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bitstream {int length; scalar_t__ current; int const* buffer; } ;
typedef int WORD ;
typedef char WCHAR ;
struct TYPE_3__ {int string_list; } ;
typedef int const TLBString ;
typedef TYPE_1__ ITypeLibImpl ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__* BSTR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*,int,scalar_t__*,int) ;
 scalar_t__* FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__*) ;
 int const* FUNC_3 (int *,scalar_t__*) ;
 char* FUNC_4 (int const*,int,struct bitstream*) ;
 int FUNC_5 (scalar_t__*,char const*) ;
 int FUNC_6 (scalar_t__*) ;

__attribute__((used)) static const TLBString *FUNC_7(const BYTE *VAR_1, const char *VAR_2, DWORD VAR_3, ITypeLibImpl *VAR_4)
{
    DWORD VAR_5, VAR_6;
    const char *VAR_7;
    struct bitstream VAR_8;
    BSTR VAR_9;
    TLBString *VAR_10;

    if (!VAR_3) return ((void*)0);

    VAR_8.buffer = (const BYTE *)VAR_2;
    VAR_8.length = VAR_3;
    VAR_8.current = 0;

    VAR_5 = *(const WORD *)VAR_1;
    VAR_1 += sizeof(WORD);
    VAR_6 = *(const DWORD *)VAR_1;
    VAR_1 += sizeof(DWORD);

    VAR_9 = FUNC_1(((void*)0), VAR_5);
    VAR_9[0] = 0;

    while ((VAR_7 = FUNC_4(VAR_1, VAR_6, &VAR_8)))
    {
        static const WCHAR VAR_11[] = { ' ',0 };
        if (VAR_9[0]) FUNC_5(VAR_9, VAR_11);
        FUNC_0(VAR_0, 0, VAR_7, -1, VAR_9 + FUNC_6(VAR_9), VAR_5 - FUNC_6(VAR_9));
    }

    VAR_10 = FUNC_3(&VAR_4->string_list, VAR_9);
    FUNC_2(VAR_9);

    return VAR_10;
}
