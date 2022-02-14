
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int working_dir; } ;
typedef char const* LPCWSTR ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_1__ ADVInfo ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (int ,char const*,int) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (char const*,char) ;

__attribute__((used)) static HRESULT FUNC_9(ADVInfo *VAR_4, LPCWSTR VAR_5, LPCWSTR VAR_6)
{
    WCHAR VAR_7[VAR_2];
    LPCWSTR VAR_8;
    DWORD VAR_9;

    static const WCHAR VAR_10[] = {'\\',0};
    static const WCHAR VAR_11[] = {'\\','I','N','F',0};

    if ((VAR_8 = FUNC_8(VAR_5, '\\')))
    {
        VAR_9 = VAR_8 - VAR_5 + 1;
        VAR_8 = VAR_5;
    }
    else if (VAR_6 && *VAR_6)
    {
        VAR_9 = FUNC_7(VAR_6) + 1;
        VAR_8 = VAR_6;
    }
    else
    {
        FUNC_0(VAR_2, VAR_7);
        FUNC_5(VAR_7, VAR_10);
        FUNC_5(VAR_7, VAR_5);


        if (FUNC_1(VAR_7) != VAR_1)
        {
            FUNC_0(VAR_2, VAR_7);
        }
        else
        {

            FUNC_3(VAR_7, VAR_2);
            FUNC_5(VAR_7, VAR_11);
        }

        VAR_9 = FUNC_7(VAR_7) + 1;
        VAR_8 = VAR_7;
    }

    VAR_4->working_dir = FUNC_4(FUNC_2(), 0, VAR_9 * sizeof(WCHAR));
    if (!VAR_4->working_dir)
        return VAR_0;

    FUNC_6(VAR_4->working_dir, VAR_8, VAR_9);

    return VAR_3;
}
