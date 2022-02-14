
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_3__ {int lcid; char* broken_rfc; int rfc1766; int hr; scalar_t__ broken_lcid; } ;
typedef int HRESULT ;
typedef size_t DWORD ;
typedef char CHAR ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,scalar_t__,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__* VAR_7 ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,char,int) ;
 int FUNC_6 (int,char*,size_t,...) ;
 int FUNC_7 (int,char*,int) ;

__attribute__((used)) static void FUNC_8(void)
{
    CHAR VAR_8[VAR_5];
    CHAR VAR_9[VAR_5 * 2];
    HRESULT VAR_10;
    DWORD VAR_11;

    for(VAR_11 = 0; VAR_11 < FUNC_0(VAR_7); VAR_11++) {

        FUNC_5(VAR_9, '#', sizeof(VAR_9)-1);
        VAR_9[sizeof(VAR_9)-1] = '\0';

        VAR_10 = FUNC_7(VAR_7[VAR_11].lcid, VAR_9, VAR_5);


        FUNC_6( (VAR_10 == VAR_7[VAR_11].hr) ||
            FUNC_2(VAR_7[VAR_11].broken_lcid && (VAR_10 == VAR_0)),
            "#%02d: HRESULT 0x%x (expected 0x%x)\n", VAR_11, VAR_10, VAR_7[VAR_11].hr);

        if (VAR_10 != VAR_6)
            continue;

        FUNC_1(VAR_4, VAR_3, VAR_7[VAR_11].rfc1766,
                    FUNC_4(VAR_7[VAR_11].rfc1766) + 1, VAR_8, VAR_5);



        FUNC_6( (!FUNC_3(VAR_9, VAR_8)) ||
            FUNC_2(!FUNC_3(VAR_9, VAR_7[VAR_11].broken_rfc)),
            "#%02d: got '%s' (expected '%s')\n", VAR_11, VAR_9, VAR_8);

    }

    FUNC_5(VAR_9, '#', sizeof(VAR_9)-1);
    VAR_9[sizeof(VAR_9)-1] = '\0';
    VAR_10 = FUNC_7(-1, VAR_9, VAR_5);
    FUNC_6(VAR_10 == VAR_0, "got 0x%08x and '%s' (expected E_FAIL)\n", VAR_10, VAR_9);

    VAR_10 = FUNC_7(VAR_2, ((void*)0), VAR_5);
    FUNC_6(VAR_10 == VAR_1, "got 0x%08x (expected E_INVALIDARG)\n", VAR_10);

    FUNC_5(VAR_9, '#', sizeof(VAR_9)-1);
    VAR_9[sizeof(VAR_9)-1] = '\0';
    VAR_10 = FUNC_7(VAR_2, VAR_9, -1);
    FUNC_6(VAR_10 == VAR_1, "got 0x%08x and '%s' (expected E_INVALIDARG)\n", VAR_10, VAR_9);

    FUNC_5(VAR_9, '#', sizeof(VAR_9)-1);
    VAR_9[sizeof(VAR_9)-1] = '\0';
    VAR_10 = FUNC_7(VAR_2, VAR_9, 0);
    FUNC_6(VAR_10 == VAR_1, "got 0x%08x and '%s' (expected E_INVALIDARG)\n", VAR_10, VAR_9);
}
