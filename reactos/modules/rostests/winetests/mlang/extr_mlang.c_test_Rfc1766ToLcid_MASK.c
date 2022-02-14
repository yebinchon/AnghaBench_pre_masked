
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* rfc1766; int broken_lcid; int lcid; int hr; } ;
typedef int LCID ;
typedef int HRESULT ;
typedef size_t DWORD ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int,char*,size_t,...) ;
 int FUNC_3 (int*,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    LCID VAR_3;
    HRESULT VAR_4;
    DWORD VAR_5;

    for(VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
        VAR_3 = -1;
        VAR_4 = FUNC_3(&VAR_3, VAR_2[VAR_5].rfc1766);


        FUNC_2( (VAR_4 == VAR_2[VAR_5].hr) ||
            FUNC_1(VAR_2[VAR_5].broken_lcid && (VAR_4 == VAR_1)),
            "#%02d: HRESULT 0x%x (expected 0x%x)\n", VAR_5, VAR_4, VAR_2[VAR_5].hr);

        FUNC_2( (VAR_3 == VAR_2[VAR_5].lcid) ||
            FUNC_1(VAR_3 == VAR_2[VAR_5].broken_lcid),
            "#%02d: got LCID 0x%x (expected 0x%x)\n", VAR_5, VAR_3, VAR_2[VAR_5].lcid);
    }

    VAR_4 = FUNC_3(&VAR_3, ((void*)0));
    FUNC_2(VAR_4 == VAR_0, "got 0x%08x (expected E_INVALIDARG)\n", VAR_4);

    VAR_4 = FUNC_3(((void*)0), "en");
    FUNC_2(VAR_4 == VAR_0, "got 0x%08x (expected E_INVALIDARG)\n", VAR_4);
}
