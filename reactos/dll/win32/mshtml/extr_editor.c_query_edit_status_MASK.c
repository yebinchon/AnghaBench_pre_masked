
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cmdID; void* cmdf; } ;
typedef TYPE_1__ OLECMD ;
typedef int HTMLDocument ;
typedef int HRESULT ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (int *,int *) ;

__attribute__((used)) static HRESULT FUNC_2(HTMLDocument *VAR_6, OLECMD *VAR_7)
{
    switch(VAR_7->cmdID) {
    case 139:
        FUNC_0("CGID_MSHTML: IDM_DELETE\n");
        VAR_7->cmdf = FUNC_1(VAR_6, ((void*)0));
        break;
    case 138:
        FUNC_0("CGID_MSHTML: IDM_FONTNAME\n");
        VAR_7->cmdf = FUNC_1(VAR_6, ((void*)0));
        break;
    case 137:
        FUNC_0("CGID_MSHTML: IDM_FONTSIZE\n");
        VAR_7->cmdf = FUNC_1(VAR_6, ((void*)0));
        break;
    case 140:
        FUNC_0("CGID_MSHTML: IDM_BOLD\n");
        VAR_7->cmdf = FUNC_1(VAR_6, VAR_0);
        break;
    case 136:
        FUNC_0("CGID_MSHTML: IDM_FORECOLOR\n");
        VAR_7->cmdf = FUNC_1(VAR_6, ((void*)0));
        break;
    case 132:
        FUNC_0("CGID_MSHTML: IDM_ITALIC\n");
        VAR_7->cmdf = FUNC_1(VAR_6, VAR_1);
        break;
    case 129:
        FUNC_0("CGID_MSHTML: IDM_UNDERLINE\n");
        VAR_7->cmdf = FUNC_1(VAR_6, VAR_4);
        break;
    case 135:
        FUNC_0("CGID_MSHTML: IDM_HORIZONTALLINE\n");
        VAR_7->cmdf = FUNC_1(VAR_6, ((void*)0));
        break;
    case 131:
        FUNC_0("CGID_MSHTML: IDM_ORDERLIST\n");
        VAR_7->cmdf = FUNC_1(VAR_6, VAR_2);
        break;
    case 128:
        FUNC_0("CGID_MSHTML: IDM_HORIZONTALLINE\n");
        VAR_7->cmdf = FUNC_1(VAR_6, VAR_3);
        break;
    case 133:
        FUNC_0("CGID_MSHTML: IDM_INDENT\n");
        VAR_7->cmdf = FUNC_1(VAR_6, ((void*)0));
        break;
    case 130:
        FUNC_0("CGID_MSHTML: IDM_OUTDENT\n");
        VAR_7->cmdf = FUNC_1(VAR_6, ((void*)0));
        break;
    case 134:
        FUNC_0("CGID_MSHTML: IDM_HYPERLINK\n");
        VAR_7->cmdf = FUNC_1(VAR_6, ((void*)0));
        break;
    }

    return VAR_5;
}
