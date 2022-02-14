
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lexret {char const* string; void* integer; } ;
struct TYPE_7__ {scalar_t__ hMainWnd; TYPE_1__* info; struct TYPE_7__* next; } ;
typedef TYPE_3__ WINHELP_WINDOW ;
struct TYPE_8__ {TYPE_2__* active_win; TYPE_3__* win_list; } ;
struct TYPE_6__ {scalar_t__ hMainWnd; } ;
struct TYPE_5__ {char const* name; } ;
typedef void* LONG_PTR ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,char const*,struct lexret*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*) ;

int FUNC_4(const char* VAR_7, struct lexret* VAR_8)
{
    int VAR_9;

    if ((VAR_9 = FUNC_0(VAR_4, VAR_7, VAR_8, -1)) != VAR_0)
        return VAR_9;
    if (VAR_5 && (VAR_9 = FUNC_0(VAR_5, VAR_7, VAR_8, VAR_6)) != VAR_0)
        return VAR_9;
    if (!FUNC_3(VAR_7, "hwndApp"))
    {
        WINHELP_WINDOW* VAR_10;
        VAR_8->integer = 0;
        for (VAR_10 = VAR_1.win_list; VAR_10; VAR_10 = VAR_10->next)
        {
            if (!FUNC_3(VAR_10->info->name, "main"))
            {
                VAR_8->integer = (LONG_PTR)VAR_10->hMainWnd;
                break;
            }
        }
        return VAR_3;
    }
    if (!FUNC_3(VAR_7, "hwndContext"))
    {
        VAR_8->integer = VAR_1.active_win ?
            (LONG_PTR)VAR_1.active_win->hMainWnd : 0;
        return VAR_3;
    }
    if (!FUNC_3(VAR_7, "qchPath") || !FUNC_3(VAR_7, "qError") || !FUNC_3(VAR_7, "lTopicNo") ||
        !FUNC_3(VAR_7, "hfs") || !FUNC_3(VAR_7, "coForeground") || !FUNC_3(VAR_7, "coBackground"))
    {
        FUNC_1("keyword %s not substituted in macro parsing\n", FUNC_2(VAR_7));
        return VAR_0;
    }

    VAR_8->string = VAR_7;
    return VAR_2;
}
