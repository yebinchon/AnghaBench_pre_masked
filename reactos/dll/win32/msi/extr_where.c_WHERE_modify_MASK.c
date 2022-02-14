
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_10__ {TYPE_1__* ops; } ;
struct TYPE_9__ {TYPE_4__* view; int next; } ;
struct TYPE_8__ {TYPE_3__* tables; } ;
struct TYPE_7__ {int (* modify ) (TYPE_4__*,int ,int *,int) ;} ;
typedef TYPE_2__ MSIWHEREVIEW ;
typedef int MSIRECORD ;
typedef int MSIMODIFY ;
typedef TYPE_3__ JOINTABLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,TYPE_2__*,int ,int *) ;
 int FUNC_1 (char*,struct tagMSIVIEW*,int ,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int**) ;
 int FUNC_3 (struct tagMSIVIEW*,int *) ;
 int FUNC_4 (TYPE_4__*,int ,int *,int) ;

__attribute__((used)) static UINT FUNC_5( struct tagMSIVIEW *VAR_4, MSIMODIFY VAR_5,
                          MSIRECORD *VAR_6, UINT VAR_7 )
{
    MSIWHEREVIEW *VAR_8 = (MSIWHEREVIEW*)VAR_4;
    JOINTABLE *VAR_9 = VAR_8->tables;
    UINT VAR_10;

    FUNC_0("%p %d %p\n", VAR_8, VAR_5, VAR_6);

    if (!VAR_9)
        return VAR_1;

    if (!VAR_9->next)
    {
        UINT *VAR_11;

        if (FUNC_2(VAR_8, VAR_7 - 1, &VAR_11) == VAR_3)
            VAR_7 = VAR_11[0] + 1;
        else
            VAR_7 = -1;

        return VAR_9->view->ops->modify(VAR_9->view, VAR_5, VAR_6, VAR_7);
    }

    switch (VAR_5)
    {
    case 132:
        return FUNC_3( VAR_4, VAR_6 );

    case 140:
    case 139:
    case 138:
    case 137:
    case 136:
    case 134:
    case 133:
    case 131:
    case 130:
    case 129:
    case 128:
        VAR_10 = VAR_1;
        break;

    case 135:
        VAR_10 = VAR_0;
        break;

    default:
        FUNC_1("%p %d %p %u - unknown mode\n", VAR_4, VAR_5, VAR_6, VAR_7 );
        VAR_10 = VAR_2;
        break;
    }

    return VAR_10;
}
