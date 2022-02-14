
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xmlstr_t ;
struct progids {int allocated; int num; int ** progids; } ;
struct TYPE_3__ {struct progids progids; } ;
struct TYPE_4__ {TYPE_1__ comclass; } ;
struct entity {TYPE_2__ u; } ;
typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int ** FUNC_0 (int ,int ,int) ;
 int FUNC_1 () ;
 int ** FUNC_2 (int ,int ,int **,int) ;
 int VAR_1 ;
 int * FUNC_3 (int const*) ;

__attribute__((used)) static BOOL FUNC_4(const xmlstr_t *VAR_2, struct entity *VAR_3)
{
    struct progids *VAR_4 = &VAR_3->u.comclass.progids;

    if (VAR_4->allocated == 0)
    {
        VAR_4->allocated = 4;
        if (!(VAR_4->progids = FUNC_0(FUNC_1(), 0, VAR_4->allocated * sizeof(WCHAR*)))) return VAR_0;
    }

    if (VAR_4->allocated == VAR_4->num)
    {
        WCHAR **VAR_5 = FUNC_2(FUNC_1(), 0, VAR_4->progids,
                                                2 * VAR_4->allocated * sizeof(WCHAR*));
        if (!VAR_5) return VAR_0;
        VAR_4->allocated *= 2;
        VAR_4->progids = VAR_5;
    }

    if (!(VAR_4->progids[VAR_4->num] = FUNC_3(VAR_2))) return VAR_0;
    VAR_4->num++;

    return VAR_1;
}
