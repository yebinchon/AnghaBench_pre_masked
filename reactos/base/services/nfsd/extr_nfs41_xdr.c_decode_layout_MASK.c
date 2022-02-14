
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list_entry {int dummy; } ;
struct TYPE_3__ {int type; int iomode; int length; int offset; } ;
typedef TYPE_1__ pnfs_layout ;
typedef int enum_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;

 int FUNC_0 (int *,struct list_entry*,TYPE_1__*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_4(
    XDR *VAR_1,
    struct list_entry *VAR_2)
{
    pnfs_layout VAR_3;

    if (!FUNC_3(VAR_1, &VAR_3.offset))
        return VAR_0;

    if (!FUNC_3(VAR_1, &VAR_3.length))
        return VAR_0;

    if (!FUNC_2(VAR_1, (enum_t *)&VAR_3.iomode))
        return VAR_0;

    if (!FUNC_2(VAR_1, (enum_t *)&VAR_3.type))
        return VAR_0;

    switch (VAR_3.type) {
    case 128:
        return FUNC_0(VAR_1, VAR_2, &VAR_3);

    default:
        FUNC_1("%s: received non-FILE layout type, %d\n",
            "decode_file_layout", VAR_3.type);
    }
    return VAR_0;
}
