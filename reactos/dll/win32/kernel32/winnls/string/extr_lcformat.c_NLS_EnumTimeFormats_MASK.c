
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* callbackex ) (char*,int ) ;int (* callback ) (char*) ;} ;
struct enumtimeformats_context {int flags; int type; int lParam; TYPE_1__ u; scalar_t__ unicode; int lcid; } ;
typedef char WCHAR ;
typedef int LCTYPE ;
typedef scalar_t__ INT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int ,int,char*,int ) ;
 scalar_t__ FUNC_3 (int ,int,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;

 int VAR_5 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static BOOL FUNC_7(struct enumtimeformats_context *VAR_6)
{
    WCHAR VAR_7[256];
    char VAR_8[256];
    LCTYPE VAR_9;
    INT VAR_10;

    if (!VAR_6->u.callback)
    {
        FUNC_4(VAR_0);
        return VAR_1;
    }

    switch (VAR_6->flags & ~VAR_4)
    {
    case 0:
        VAR_9 = VAR_3;
        break;
    case 128:
        VAR_9 = VAR_2;
        break;
    default:
        FUNC_1("Unknown time format (%d)\n", VAR_6->flags);
        FUNC_4(VAR_0);
        return VAR_1;
    }

    VAR_9 |= VAR_6->flags & VAR_4;
    if (VAR_6->unicode)
        VAR_10 = FUNC_3(VAR_6->lcid, VAR_9, VAR_7, FUNC_0(VAR_7));
    else
        VAR_10 = FUNC_2(VAR_6->lcid, VAR_9, VAR_8, FUNC_0(VAR_8));

    if (VAR_10)
    {
        switch (VAR_6->type)
        {
        case 130:
            VAR_6->u.callback(VAR_6->unicode ? VAR_7 : (WCHAR*)VAR_8);
            break;
        case 129:
            VAR_6->u.callbackex(VAR_7, VAR_6->lParam);
            break;
        default:
            ;
        }
    }

    return VAR_5;
}
