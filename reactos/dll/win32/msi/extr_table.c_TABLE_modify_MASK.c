
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef size_t UINT ;
struct TYPE_6__ {int error_column; int error; } ;
struct TYPE_8__ {TYPE_2__* columns; TYPE_1__ view; } ;
struct TYPE_7__ {int colname; } ;
typedef TYPE_3__ MSITABLEVIEW ;
typedef int MSIRECORD ;
typedef int MSIMODIFY ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct tagMSIVIEW*,int,int *) ;
 int VAR_4 ;
 size_t FUNC_1 (struct tagMSIVIEW*,int *,int,int ) ;
 int FUNC_2 (char*,struct tagMSIVIEW*,int,int *) ;
 int VAR_5 ;
 size_t FUNC_3 (struct tagMSIVIEW*,int *) ;
 size_t FUNC_4 (struct tagMSIVIEW*,int *,size_t) ;
 size_t FUNC_5 (struct tagMSIVIEW*,int *) ;
 size_t FUNC_6 (TYPE_3__*,int *,size_t*,size_t*) ;
 size_t FUNC_7 (struct tagMSIVIEW*,int *,size_t) ;
 size_t FUNC_8 (TYPE_3__*,int *,size_t*) ;

__attribute__((used)) static UINT FUNC_9( struct tagMSIVIEW *VAR_6, MSIMODIFY VAR_7,
                          MSIRECORD *VAR_8, UINT VAR_9)
{
    MSITABLEVIEW *VAR_10 = (MSITABLEVIEW*)VAR_6;
    UINT VAR_11, VAR_12, VAR_13;

    FUNC_2("%p %d %p\n", VAR_6, VAR_7, VAR_8 );

    switch (VAR_7)
    {
    case 138:
        VAR_11 = FUNC_3( VAR_6, VAR_8 );
        break;
    case 128:
        VAR_11 = FUNC_8( VAR_10, VAR_8, &VAR_13 );
        if (VAR_11 != VAR_2)
        {
            VAR_10->view.error = VAR_4;
            VAR_10->view.error_column = VAR_10->columns[VAR_13].colname;
            VAR_11 = VAR_1;
        }
        break;

    case 137:
        VAR_11 = FUNC_8( VAR_10, VAR_8, ((void*)0) );
        if (VAR_11 != VAR_2)
            break;
        VAR_11 = FUNC_1( VAR_6, VAR_8, -1, VAR_3 );
        break;

    case 136:
        VAR_11 = FUNC_8( VAR_10, VAR_8, ((void*)0) );
        if (VAR_11 != VAR_2)
            break;
        VAR_11 = FUNC_1( VAR_6, VAR_8, -1, VAR_5 );
        break;

    case 134:
        VAR_11 = FUNC_4( VAR_6, VAR_8, VAR_9 );
        break;

    case 132:
        VAR_11 = FUNC_7( VAR_6, VAR_8, VAR_9 );
        break;

    case 139:
        VAR_11 = FUNC_5( VAR_6, VAR_8 );
        break;

    case 135:

        VAR_11 = FUNC_6( VAR_10, VAR_8, &VAR_12, &VAR_13 );
        if (VAR_11 != VAR_2)
        {
            VAR_11 = FUNC_8( VAR_10, VAR_8, ((void*)0) );
            if (VAR_11 == VAR_2)
                VAR_11 = FUNC_1( VAR_6, VAR_8, -1, VAR_3 );
        }
        break;

    case 133:
    case 131:
    case 129:
    case 130:
        FUNC_0("%p %d %p - mode not implemented\n", VAR_6, VAR_7, VAR_8 );
        VAR_11 = VAR_0;
        break;

    default:
        VAR_11 = VAR_1;
    }

    return VAR_11;
}
