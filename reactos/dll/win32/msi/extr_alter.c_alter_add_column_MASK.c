
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_18__ {int hold; TYPE_1__* colinfo; int db; } ;
struct TYPE_17__ {int hdr; } ;
struct TYPE_16__ {TYPE_2__* ops; } ;
struct TYPE_15__ {scalar_t__ (* add_column ) (TYPE_3__*,int ,scalar_t__,int ,int ,int) ;int (* delete ) (TYPE_3__*) ;} ;
struct TYPE_14__ {int type; int column; int table; } ;
typedef TYPE_3__ MSIVIEW ;
typedef TYPE_4__ MSIQUERY ;
typedef TYPE_5__ MSIALTERVIEW ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_4__**,char const*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,char const*,TYPE_3__**) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ,scalar_t__,int ,int ,int) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static UINT FUNC_9(MSIALTERVIEW *VAR_3)
{
    UINT VAR_4, VAR_5 = 1;
    MSIQUERY *VAR_6;
    MSIVIEW *VAR_7;

    static const WCHAR VAR_8[] = {'_','C','o','l','u','m','n','s',0};
    static const WCHAR VAR_9[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        '`','_','C','o','l','u','m','n','s','`',' ','W','H','E','R','E',' ',
        '`','T','a','b','l','e','`','=','\'','%','s','\'',' ','O','R','D','E','R',' ',
        'B','Y',' ','`','N','u','m','b','e','r','`',0
    };

    VAR_4 = FUNC_2(VAR_3->db, VAR_8, &VAR_7);
    if (VAR_4 != VAR_1)
        return VAR_4;

    if (FUNC_3(VAR_3->db, VAR_3->colinfo->table, VAR_3->colinfo->column))
    {
        VAR_7->ops->delete(VAR_7);
        return VAR_0;
    }

    VAR_4 = FUNC_1(VAR_3->db, &VAR_6, VAR_9, VAR_3->colinfo->table, VAR_3->colinfo->column);
    if (VAR_4 == VAR_1)
    {
        VAR_4 = FUNC_0(VAR_6, ((void*)0), VAR_2, &VAR_5);
        FUNC_4(&VAR_6->hdr);
        if (VAR_4 != VAR_1)
        {
            VAR_7->ops->delete(VAR_7);
            return VAR_4;
        }
    }
    VAR_4 = VAR_7->ops->add_column(VAR_7, VAR_3->colinfo->table,
                                 VAR_5, VAR_3->colinfo->column,
                                 VAR_3->colinfo->type, (VAR_3->hold == 1));

    VAR_7->ops->delete(VAR_7);
    return VAR_4;
}
