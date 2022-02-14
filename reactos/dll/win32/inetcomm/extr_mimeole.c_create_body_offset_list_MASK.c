
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct list {int dummy; } ;
struct TYPE_9__ {size_t cbBodyEnd; size_t cbBoundaryStart; int cbHeaderStart; } ;
struct TYPE_10__ {int entry; TYPE_2__ offsets; } ;
typedef TYPE_3__ offset_entry_t ;
struct TYPE_8__ {size_t LowPart; } ;
struct TYPE_11__ {TYPE_1__ u; } ;
typedef TYPE_4__ ULARGE_INTEGER ;
struct TYPE_12__ {scalar_t__ QuadPart; } ;
typedef TYPE_5__ LARGE_INTEGER ;
typedef int IStream ;
typedef int HRESULT ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int *,char*,int,size_t*) ;
 int FUNC_5 (int *,TYPE_5__,int ,TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct list*,int *) ;
 int FUNC_7 (struct list*) ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (char*,char*,size_t) ;
 int FUNC_10 (char const*) ;
 char* FUNC_11 (char*,char*) ;

__attribute__((used)) static HRESULT FUNC_12(IStream *VAR_4, const char *VAR_5, struct list *VAR_6)
{
    HRESULT VAR_7;
    DWORD VAR_8, VAR_9;
    int VAR_10 = FUNC_10(VAR_5);
    char *VAR_11, *VAR_12, *VAR_13;
    DWORD VAR_14 = 0, VAR_15;
    offset_entry_t *VAR_16 = ((void*)0);
    BOOL VAR_17 = VAR_3;
    ULARGE_INTEGER VAR_18;
    LARGE_INTEGER VAR_19;

    FUNC_7(VAR_6);

    VAR_15 = VAR_10 + 5;

    VAR_13 = VAR_11 = FUNC_2(FUNC_1(), 0, VAR_15 + VAR_1 + 1);

    VAR_19.QuadPart = 0;
    VAR_7 = FUNC_5(VAR_4, VAR_19, VAR_2, &VAR_18);
    VAR_14 = VAR_18.u.LowPart;

    do {
        VAR_7 = FUNC_4(VAR_4, VAR_13, VAR_1, &VAR_8);
        if(FUNC_0(VAR_7)) goto end;
        if(VAR_8 == 0) break;
        VAR_13[VAR_8] = '\0';

        VAR_12 = VAR_11;
        while(1) {
            if(VAR_17) {
                VAR_17 = VAR_0;
            }else {
                VAR_12 = FUNC_11(VAR_12, "\r\n");
                if(!VAR_12)
                    break;
                VAR_12 += 2;
            }

            VAR_9 = VAR_14 + VAR_12 - VAR_11;

            if(*VAR_12 == '-' && *(VAR_12 + 1) == '-' && !FUNC_8(VAR_12 + 2, VAR_5, VAR_10)) {
                VAR_12 += VAR_10 + 2;

                if(*VAR_12 == '\r' && *(VAR_12 + 1) == '\n')
                {
                    VAR_12 += 2;
                    if(VAR_16)
                    {
                        VAR_16->offsets.cbBodyEnd = VAR_9 - 2;
                        FUNC_6(VAR_6, &VAR_16->entry);
                    }
                    VAR_16 = FUNC_2(FUNC_1(), 0, sizeof(*VAR_16));
                    VAR_16->offsets.cbBoundaryStart = VAR_9;
                    VAR_16->offsets.cbHeaderStart = VAR_14 + VAR_12 - VAR_11;
                }
                else if(*VAR_12 == '-' && *(VAR_12 + 1) == '-')
                {
                    if(VAR_16)
                    {
                        VAR_16->offsets.cbBodyEnd = VAR_9 - 2;
                        FUNC_6(VAR_6, &VAR_16->entry);
                        goto end;
                    }
                }
            }
        }

        if(VAR_13 == VAR_11)
        {
            FUNC_9(VAR_11, VAR_11 + VAR_1 - VAR_15, VAR_15);
            VAR_13 = VAR_11 + VAR_15;
            VAR_14 += VAR_8 - VAR_15;
        }
        else
        {
            FUNC_9(VAR_11, VAR_11 + VAR_1, VAR_15);
            VAR_14 += VAR_8;
        }
    } while(1);

end:
    FUNC_3(FUNC_1(), 0, VAR_11);
    return VAR_7;
}
