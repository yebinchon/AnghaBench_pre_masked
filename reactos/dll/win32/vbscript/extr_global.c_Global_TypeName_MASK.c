
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbdisp_t ;
typedef char WCHAR ;
typedef int VARIANT ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*) ;

__attribute__((used)) static HRESULT FUNC_6(vbdisp_t *VAR_1, VARIANT *VAR_2, unsigned VAR_3, VARIANT *VAR_4)
{
    static const WCHAR VAR_5[] = {'B', 'y', 't', 'e', 0};
    static const WCHAR VAR_6[] = {'I', 'n', 't', 'e', 'g', 'e', 'r', 0};
    static const WCHAR VAR_7[] = {'L', 'o', 'n', 'g', 0};
    static const WCHAR VAR_8[] = {'S', 'i', 'n', 'g', 'l', 'e', 0};
    static const WCHAR VAR_9[] = {'D', 'o', 'u', 'b', 'l', 'e', 0};
    static const WCHAR VAR_10[] = {'C', 'u', 'r', 'r', 'e', 'n', 'c', 'y', 0};
    static const WCHAR VAR_11[] = {'D', 'e', 'c', 'i', 'm', 'a', 'l', 0};
    static const WCHAR VAR_12[] = {'D', 'a', 't', 'e', 0};
    static const WCHAR VAR_13[] = {'S', 't', 'r', 'i', 'n', 'g', 0};
    static const WCHAR VAR_14[] = {'B', 'o', 'o', 'l', 'e', 'a', 'n', 0};
    static const WCHAR VAR_15[] = {'E', 'm', 'p', 't', 'y', 0};
    static const WCHAR VAR_16[] = {'N', 'u', 'l', 'l', 0};

    FUNC_1("(%s)\n", FUNC_4(VAR_2));

    FUNC_3(VAR_3 == 1);

    switch(FUNC_2(VAR_2)) {
        case 128:
            return FUNC_5(VAR_4, VAR_5);
        case 133:
            return FUNC_5(VAR_4, VAR_6);
        case 132:
            return FUNC_5(VAR_4, VAR_7);
        case 130:
            return FUNC_5(VAR_4, VAR_8);
        case 129:
            return FUNC_5(VAR_4, VAR_9);
        case 137:
            return FUNC_5(VAR_4, VAR_10);
        case 135:
            return FUNC_5(VAR_4, VAR_11);
        case 136:
            return FUNC_5(VAR_4, VAR_12);
        case 138:
            return FUNC_5(VAR_4, VAR_13);
        case 139:
            return FUNC_5(VAR_4, VAR_14);
        case 134:
            return FUNC_5(VAR_4, VAR_15);
        case 131:
            return FUNC_5(VAR_4, VAR_16);
        default:
            FUNC_0("arg %s not supported\n", FUNC_4(VAR_2));
            return VAR_0;
        }
}
