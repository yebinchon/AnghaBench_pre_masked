
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_13__ {int hdr; } ;
struct TYPE_12__ {scalar_t__ col_count; TYPE_1__* colinfo; } ;
struct TYPE_11__ {int db; int view; } ;
struct TYPE_10__ {int ref_count; int colname; } ;
typedef TYPE_2__ MSITABLEVIEW ;
typedef TYPE_3__ MSITABLE ;
typedef TYPE_4__ MSIRECORD ;
typedef int LPCWSTR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_4 (int *,TYPE_4__*,int,int ) ;
 TYPE_3__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static UINT FUNC_9(struct tagMSIVIEW *VAR_3, LPCWSTR VAR_4, UINT VAR_5,
                             LPCWSTR VAR_6, UINT VAR_7, BOOL VAR_8)
{
    MSITABLEVIEW *VAR_9 = (MSITABLEVIEW*)VAR_3;
    MSITABLE *VAR_10;
    MSIRECORD *VAR_11;
    UINT VAR_12, VAR_13;

    VAR_11 = FUNC_1(4);
    if (!VAR_11)
        return VAR_0;

    FUNC_3(VAR_11, 1, VAR_4);
    FUNC_2(VAR_11, 2, VAR_5);
    FUNC_3(VAR_11, 3, VAR_6);
    FUNC_2(VAR_11, 4, VAR_7);

    VAR_12 = FUNC_4(&VAR_9->view, VAR_11, -1, VAR_2);
    if (VAR_12 != VAR_1)
        goto done;

    FUNC_6(VAR_9->db, VAR_4);

    if (!VAR_8)
        goto done;

    VAR_10 = FUNC_5(VAR_9->db, VAR_4);
    for (VAR_13 = 0; VAR_13 < VAR_10->col_count; VAR_13++)
    {
        if (!FUNC_8( VAR_10->colinfo[VAR_13].colname, VAR_6 ))
        {
            FUNC_0(&VAR_10->colinfo[VAR_13].ref_count);
            break;
        }
    }

done:
    FUNC_7(&VAR_11->hdr);
    return VAR_12;
}
