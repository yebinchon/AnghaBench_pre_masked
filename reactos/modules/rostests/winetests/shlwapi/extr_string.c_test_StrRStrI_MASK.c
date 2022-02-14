
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LPWSTR ;
typedef int LPSTR ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,int,char const*,char const*) ;

__attribute__((used)) static void FUNC_1(void)
{
    static const CHAR VAR_2[] = "yAxxxxAy";
    static const CHAR VAR_3[] = "ABABABAB";
    static const WCHAR VAR_4[] = {'y','A','x','x','x','x','A','y',0};
    static const WCHAR VAR_5[] = {'A','B','A','B','A','B','A','B',0};

    static const WCHAR VAR_6[] = {'A',0};
    static const WCHAR VAR_7[] = {'a','X',0};
    static const WCHAR VAR_8[] = {'A','y',0};
    static const WCHAR VAR_9[] = {'a','b',0};
    LPWSTR VAR_10;
    LPSTR VAR_11;

    FUNC_0(VAR_0, VAR_2, 4, "A", VAR_2+1);
    FUNC_0(VAR_0, VAR_2, 4, "aX", VAR_2+1);
    FUNC_0(VAR_0, VAR_2, 4, "Ay", ((void*)0));
    FUNC_0(VAR_1, VAR_4, 4, VAR_6, VAR_4+1);
    FUNC_0(VAR_1, VAR_4, 4, VAR_7, VAR_4+1);
    FUNC_0(VAR_1, VAR_4, 4, VAR_8, ((void*)0));

    FUNC_0(VAR_0, VAR_3, 4, "ab", VAR_3+2);
    FUNC_0(VAR_0, VAR_3, 3, "ab", VAR_3+2);
    FUNC_0(VAR_0, VAR_3, 2, "ab", VAR_3);
    FUNC_0(VAR_0, VAR_3, 1, "ab", VAR_3);
    FUNC_0(VAR_0, VAR_3, 0, "ab", ((void*)0));
    FUNC_0(VAR_1, VAR_5, 4, VAR_9, VAR_5+2);
    FUNC_0(VAR_1, VAR_5, 3, VAR_9, VAR_5+2);
    FUNC_0(VAR_1, VAR_5, 2, VAR_9, VAR_5);
    FUNC_0(VAR_1, VAR_5, 1, VAR_9, VAR_5);
    FUNC_0(VAR_1, VAR_5, 0, VAR_9, ((void*)0));

}
