
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_9__ {scalar_t__ description; scalar_t__ template; size_t (* handler ) (TYPE_1__*) ;scalar_t__ action_rollback; int * action; } ;
struct TYPE_8__ {int need_rollback; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int LPWSTR ;
typedef int LPCWSTR ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int) ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 size_t FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int) ;
 int FUNC_8 (TYPE_1__*,int ,int *,int *) ;

__attribute__((used)) static UINT FUNC_9(MSIPACKAGE *VAR_7, LPCWSTR VAR_8)
{
    UINT VAR_9 = VAR_0;
    UINT VAR_10;

    VAR_10 = 0;
    while (VAR_4[VAR_10].action != ((void*)0))
    {
        if (!FUNC_5( VAR_4[VAR_10].action, VAR_8 ))
        {
            WCHAR VAR_11[100] = {0}, VAR_12[100] = {0};

            if (VAR_4[VAR_10].description != 0)
                FUNC_1(VAR_6, VAR_4[VAR_10].description, (LPWSTR)&VAR_11, 100);
            if (VAR_4[VAR_10].template != 0)
                FUNC_1(VAR_6, VAR_4[VAR_10].template, (LPWSTR)&VAR_12, 100);

            FUNC_8(VAR_7, VAR_8, VAR_11, VAR_12);
            if (VAR_4[VAR_10].handler)
            {
                FUNC_7( VAR_7, VAR_8, VAR_5, 0 );
                VAR_9 = VAR_4[VAR_10].handler( VAR_7 );
                FUNC_7( VAR_7, VAR_8, VAR_2, !VAR_9 );

                if (VAR_4[VAR_10].action_rollback && !VAR_7->need_rollback)
                {
                    FUNC_2("scheduling rollback action\n");
                    FUNC_4( VAR_7, VAR_3, VAR_4[VAR_10].action_rollback );
                }
            }
            else
            {
                FUNC_0("unhandled standard action %s\n", FUNC_3(VAR_8));
                VAR_9 = VAR_1;
            }
            break;
        }
        VAR_10++;
    }
    return VAR_9;
}
