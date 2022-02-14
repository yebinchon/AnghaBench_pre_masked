
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* callbackexex ) (char*,int ,int ) ;int (* callbackex ) (char*,int ) ;int (* callback ) (char*) ;} ;
struct enumdateformats_context {int flags; int type; int lParam; TYPE_1__ u; scalar_t__ unicode; int lcid; } ;
typedef int cal_id ;
typedef char WCHAR ;
typedef char* LPWSTR ;
typedef int LCTYPE ;
typedef scalar_t__ INT ;
typedef int CALID ;
typedef int BOOL ;


 int FUNC_0 (char*) ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int ,int,char*,int) ;
 scalar_t__ FUNC_3 (int ,int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ,int ) ;

__attribute__((used)) static BOOL FUNC_8(const struct enumdateformats_context *VAR_9)
{
    WCHAR VAR_10[256];
    char VAR_11[256];
    LCTYPE VAR_12;
    CALID VAR_13;
    INT VAR_14;

    if (!VAR_9->u.callback)
    {
        FUNC_4(VAR_0);
        return VAR_1;
    }

    if (!FUNC_3(VAR_9->lcid, VAR_2|VAR_3, (LPWSTR)&VAR_13, sizeof(VAR_13)/sizeof(WCHAR)))
        return VAR_1;

    switch (VAR_9->flags & ~VAR_7)
    {
    case 0:
    case 129:
        VAR_12 = VAR_5;
        break;
    case 130:
        VAR_12 = VAR_4;
        break;
    case 128:
        VAR_12 = VAR_6;
        break;
    default:
        FUNC_1("Unknown date format (0x%08x)\n", VAR_9->flags);
        FUNC_4(VAR_0);
        return VAR_1;
    }

    VAR_12 |= VAR_9->flags & VAR_7;
    if (VAR_9->unicode)
        VAR_14 = FUNC_3(VAR_9->lcid, VAR_12, VAR_10, FUNC_0(VAR_10));
    else
        VAR_14 = FUNC_2(VAR_9->lcid, VAR_12, VAR_11, FUNC_0(VAR_11));

    if (VAR_14)
    {
        switch (VAR_9->type)
        {
        case 133:
            VAR_9->u.callback(VAR_9->unicode ? VAR_10 : (WCHAR*)VAR_11);
            break;
        case 132:
            VAR_9->u.callbackex(VAR_9->unicode ? VAR_10 : (WCHAR*)VAR_11, VAR_13);
            break;
        case 131:
            VAR_9->u.callbackexex(VAR_10, VAR_13, VAR_9->lParam);
            break;
        default:
            ;
        }
    }

    return VAR_8;
}
