
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DOMNodeType ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(DOMNodeType VAR_0, char *VAR_1)
{
    switch (VAR_0)
    {
        case 133:
            FUNC_0(VAR_1, "A");
            break;
        case 130:
            FUNC_0(VAR_1, "E");
            break;
        case 131:
            FUNC_0(VAR_1, "D");
            break;
        case 128:
            FUNC_0(VAR_1, "T");
            break;
        case 132:
            FUNC_0(VAR_1, "C");
            break;
        case 129:
            FUNC_0(VAR_1, "P");
            break;
        default:
            FUNC_1(VAR_1, "[%d]", VAR_0);
    }
}
