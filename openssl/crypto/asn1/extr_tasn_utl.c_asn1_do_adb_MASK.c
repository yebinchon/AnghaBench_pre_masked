
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ (* adb_cb ) (long*) ;int tblcount; TYPE_1__ const* default_tt; TYPE_2__* tbl; TYPE_1__ const* null_tt; int offset; } ;
struct TYPE_7__ {int flags; int item; } ;
struct TYPE_8__ {long value; TYPE_1__ const tt; } ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_TEMPLATE ;
typedef int ASN1_OBJECT ;
typedef int ASN1_INTEGER ;
typedef TYPE_2__ ASN1_ADB_TABLE ;
typedef TYPE_3__ ASN1_ADB ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;
 long FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 long FUNC_3 (int *) ;
 int ** FUNC_4 (int const*,int ) ;
 scalar_t__ FUNC_5 (long*) ;

const ASN1_TEMPLATE *FUNC_6(const ASN1_VALUE *VAR_4,
                                 const ASN1_TEMPLATE *VAR_5,
                                 int VAR_6)
{
    const ASN1_ADB *VAR_7;
    const ASN1_ADB_TABLE *VAR_8;
    long VAR_9;
    const ASN1_VALUE **VAR_10;
    int VAR_11;

    if ((VAR_5->flags & VAR_2) == 0)
        return VAR_5;


    VAR_7 = FUNC_0(VAR_5->item);


    VAR_10 = FUNC_4(VAR_4, VAR_7->offset);


    if (*VAR_10 == ((void*)0)) {
        if (VAR_7->null_tt == ((void*)0))
            goto err;
        return VAR_7->null_tt;
    }





    if ((VAR_5->flags & VAR_3) != 0)
        VAR_9 = FUNC_3((ASN1_OBJECT *)*VAR_10);
    else
        VAR_9 = FUNC_1((ASN1_INTEGER *)*VAR_10);


    if (VAR_7->adb_cb != ((void*)0) && VAR_7->adb_cb(&VAR_9) == 0) {
        FUNC_2(VAR_0, VAR_1);
        return ((void*)0);
    }
    for (VAR_8 = VAR_7->tbl, VAR_11 = 0; VAR_11 < VAR_7->tblcount; VAR_11++, VAR_8++)
        if (VAR_8->value == VAR_9)
            return &VAR_8->tt;




    if (!VAR_7->default_tt)
        goto err;
    return VAR_7->default_tt;

 err:

    if (VAR_6)
        FUNC_2(VAR_0, VAR_1);
    return ((void*)0);
}
