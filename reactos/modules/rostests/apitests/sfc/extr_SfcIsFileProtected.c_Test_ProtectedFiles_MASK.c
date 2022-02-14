
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ Min; scalar_t__ Max; } ;
struct TYPE_10__ {TYPE_1__ Success; int Path; scalar_t__ Expand; } ;
typedef TYPE_2__ WCHAR ;
typedef size_t ULONG ;
typedef int BOOL ;


 int FUNC_0 (int ,TYPE_2__*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,size_t,int ) ;
 size_t FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int,char*,size_t,scalar_t__,TYPE_2__*) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void FUNC_5()
{
    ULONG VAR_3;
    BOOL VAR_4;
    WCHAR VAR_5[VAR_0 * 3];

    for (VAR_3 = 0; VAR_3 < FUNC_3(VAR_2); ++VAR_3)
    {
        if (VAR_2[VAR_3].Expand)
            FUNC_0(VAR_2[VAR_3].Path, VAR_5, FUNC_3(VAR_5));
        else
            FUNC_2(VAR_5, FUNC_3(VAR_5), VAR_2[VAR_3].Path);

        VAR_4 = FUNC_1(((void*)0), VAR_5);

        if (VAR_1 >= VAR_2[VAR_3].Success.Min && VAR_1 <= VAR_2[VAR_3].Success.Max)
        {
            FUNC_4(VAR_4, "[%lu,0x%04lx]: Failed: %S\n", VAR_3, VAR_1, VAR_5);
        }
        else
        {
            FUNC_4(!VAR_4, "[%lu,0x%04lx]: Succeeded: %S\n", VAR_3, VAR_1, VAR_5);
        }
    }
}
