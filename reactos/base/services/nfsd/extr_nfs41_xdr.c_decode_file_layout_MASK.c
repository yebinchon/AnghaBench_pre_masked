
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int32_t ;
struct list_entry {int dummy; } ;
struct TYPE_8__ {int type; int iomode; int length; int offset; } ;
typedef TYPE_2__ pnfs_layout ;
struct TYPE_7__ {int entry; int type; int iomode; int length; int offset; } ;
struct TYPE_9__ {TYPE_1__ layout; int filehandles; int pattern_offset; int first_index; int util; scalar_t__ deviceid; } ;
typedef TYPE_3__ pnfs_file_layout ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct list_entry*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_8(
    XDR *VAR_3,
    struct list_entry *VAR_4,
    pnfs_layout *VAR_5)
{
    pnfs_file_layout *VAR_6;
    u_int32_t VAR_7;

    if (!FUNC_7(VAR_3, &VAR_7))
        return VAR_0;

    VAR_6 = FUNC_0(1, sizeof(pnfs_file_layout));
    if (VAR_6 == ((void*)0))
        return VAR_0;

    VAR_6->layout.offset = VAR_5->offset;
    VAR_6->layout.length = VAR_5->length;
    VAR_6->layout.iomode = VAR_5->iomode;
    VAR_6->layout.type = VAR_5->type;
    FUNC_4(&VAR_6->layout.entry);

    if (!FUNC_5(VAR_3, (char *)VAR_6->deviceid, VAR_1))
        goto out_error;

    if (!FUNC_7(VAR_3, &VAR_6->util))
        goto out_error;

    if (!FUNC_7(VAR_3, &VAR_6->first_index))
        goto out_error;

    if (!FUNC_6(VAR_3, &VAR_6->pattern_offset))
        goto out_error;

    if (!FUNC_1(VAR_3, &VAR_6->filehandles))
        goto out_error;

    FUNC_3(VAR_4, &VAR_6->layout.entry);
    return VAR_2;

out_error:
    FUNC_2(VAR_6);
    return VAR_0;
}
