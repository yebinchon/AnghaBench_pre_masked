
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* input; } ;
typedef TYPE_3__ xmlreader ;
typedef int strval ;
struct TYPE_16__ {int written; char* data; int cur; } ;
typedef TYPE_4__ encoded_buffer ;
typedef char WCHAR ;
typedef int UINT ;
struct TYPE_14__ {TYPE_1__* buffer; } ;
struct TYPE_13__ {TYPE_4__ utf16; } ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*,int *) ;
 char FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_3__*) ;
 char* FUNC_8 (TYPE_3__*) ;
 char* FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 int FUNC_11 (TYPE_3__*,int) ;

__attribute__((used)) static HRESULT FUNC_12(xmlreader *VAR_6)
{
    encoded_buffer *VAR_7 = &VAR_6->input->buffer->utf16;
    WCHAR *VAR_8 = FUNC_8(VAR_6), *VAR_9;
    UINT VAR_10 = FUNC_7(VAR_6);
    WCHAR VAR_11 = 0;
    int VAR_12;


    FUNC_11(VAR_6, 1);
    VAR_9 = FUNC_8(VAR_6);

    if (*VAR_9 == '#')
    {
        FUNC_11(VAR_6, 1);
        VAR_9 = FUNC_8(VAR_6);


        if (*VAR_9 == 'x')
        {
            FUNC_11(VAR_6, 1);
            VAR_9 = FUNC_8(VAR_6);

            while (*VAR_9 != ';')
            {
                if ((*VAR_9 >= '0' && *VAR_9 <= '9'))
                    VAR_11 = VAR_11*16 + *VAR_9 - '0';
                else if ((*VAR_9 >= 'a' && *VAR_9 <= 'f'))
                    VAR_11 = VAR_11*16 + *VAR_9 - 'a' + 10;
                else if ((*VAR_9 >= 'A' && *VAR_9 <= 'F'))
                    VAR_11 = VAR_11*16 + *VAR_9 - 'A' + 10;
                else
                    return VAR_11 ? VAR_3 : VAR_2;
                FUNC_11(VAR_6, 1);
                VAR_9 = FUNC_8(VAR_6);
            }
        }
        else
        {
            while (*VAR_9 != ';')
            {
                if ((*VAR_9 >= '0' && *VAR_9 <= '9'))
                {
                    VAR_11 = VAR_11*10 + *VAR_9 - '0';
                    FUNC_11(VAR_6, 1);
                    VAR_9 = FUNC_8(VAR_6);
                }
                else
                    return VAR_11 ? VAR_3 : VAR_1;
            }
        }

        if (!FUNC_4(VAR_11)) return VAR_5;


        if (FUNC_5(VAR_11)) VAR_11 = ' ';

        VAR_9 = FUNC_8(VAR_6);
        VAR_8 = FUNC_9(VAR_6, VAR_10);
        VAR_12 = VAR_7->written - ((char *)VAR_9 - VAR_7->data);
        FUNC_6(VAR_8 + 1, VAR_9 + 1, VAR_12);

        VAR_7->written -= (FUNC_7(VAR_6) - VAR_10) * sizeof(WCHAR);
        VAR_7->cur = VAR_10 + 1;

        *VAR_8 = VAR_11;
    }
    else
    {
        strval VAR_13;
        HRESULT VAR_14;

        VAR_14 = FUNC_10(VAR_6, &VAR_13);
        if (FUNC_0(VAR_14)) return VAR_14;

        VAR_9 = FUNC_8(VAR_6);
        if (*VAR_9 != ';') return VAR_3;


        VAR_11 = FUNC_3(VAR_6, &VAR_13);
        if (VAR_11)
        {
            VAR_12 = VAR_7->written - ((char*)VAR_9 - VAR_7->data) - sizeof(WCHAR);
            FUNC_6(VAR_8+1, VAR_9+1, VAR_12);
            VAR_7->cur = VAR_10 + 1;
            VAR_7->written -= (VAR_9 - VAR_8) * sizeof(WCHAR);

            *VAR_8 = VAR_11;
        }
        else
        {
            FUNC_1("undeclared entity %s\n", FUNC_2(VAR_6, &VAR_13));
            return VAR_4;
        }

    }

    return VAR_0;
}
