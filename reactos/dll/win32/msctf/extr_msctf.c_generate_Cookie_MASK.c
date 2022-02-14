
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_6__ {size_t id; size_t magic; int data; } ;
typedef int LPVOID ;
typedef size_t DWORD ;
typedef TYPE_1__ CookieInternal ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 TYPE_1__* FUNC_3 (int ,int ,TYPE_1__*,int) ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;

DWORD FUNC_4(DWORD VAR_4, LPVOID VAR_5)
{
    UINT VAR_6;


    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
        if (VAR_2[VAR_6].id == 0) break;

    if (VAR_6 == VAR_1)
    {
        if (!VAR_1)
        {
            VAR_2 = FUNC_2(FUNC_1(),VAR_0,sizeof(CookieInternal) * 10);
            if (!VAR_2)
            {
                FUNC_0("Out of memory, Unable to alloc cookies array\n");
                return 0;
            }
            VAR_1 = 10;
        }
        else
        {
            CookieInternal *VAR_7 = FUNC_3(FUNC_1(), VAR_0, VAR_2,
                                                      sizeof(CookieInternal) * (VAR_1 * 2));
            if (!VAR_7)
            {
                FUNC_0("Out of memory, Unable to realloc cookies array\n");
                return 0;
            }
            VAR_2 = VAR_7;
            VAR_1 *= 2;
        }
    }

    VAR_2[VAR_6].id = VAR_6 + 1;
    VAR_2[VAR_6].magic = VAR_4;
    VAR_2[VAR_6].data = VAR_5;

    if (VAR_6 == VAR_3)
        VAR_3++;

    return VAR_2[VAR_6].id;
}
