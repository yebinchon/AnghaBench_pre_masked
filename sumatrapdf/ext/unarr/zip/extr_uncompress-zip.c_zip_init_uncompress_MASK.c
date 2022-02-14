
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ar_archive_zip_uncomp {int initialized; int * clear_state; int * uncompress_data; } ;
struct TYPE_5__ {scalar_t__ method; int flags; } ;
struct TYPE_6__ {TYPE_1__ entry; struct ar_archive_zip_uncomp uncomp; } ;
typedef TYPE_2__ ar_archive_zip ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ar_archive_zip_uncomp*,int ,int) ;
 int FUNC_1 (char*,...) ;
 int * VAR_5 ;
 int * VAR_6 ;
 void* VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 scalar_t__ FUNC_2 (struct ar_archive_zip_uncomp*) ;
 scalar_t__ FUNC_3 (struct ar_archive_zip_uncomp*) ;
 scalar_t__ FUNC_4 (struct ar_archive_zip_uncomp*,int) ;
 scalar_t__ FUNC_5 (struct ar_archive_zip_uncomp*,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int * VAR_10 ;
 int * VAR_11 ;
 void* VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;

__attribute__((used)) static bool FUNC_7(ar_archive_zip *VAR_15)
{
    struct ar_archive_zip_uncomp *VAR_16 = &VAR_15->uncomp;
    if (VAR_16->initialized)
        return 1;
    FUNC_0(VAR_16, 0, sizeof(*VAR_16));
    if (VAR_15->entry.method == VAR_1) {






        if (FUNC_4(VAR_16, 0)) {
            VAR_16->uncompress_data = VAR_12;
            VAR_16->clear_state = VAR_7;
        }

    }
    else if (VAR_15->entry.method == VAR_2) {
        if (FUNC_4(VAR_16, 1)) {
            VAR_16->uncompress_data = VAR_12;
            VAR_16->clear_state = VAR_7;
        }
    }
    else if (VAR_15->entry.method == VAR_0) {






        FUNC_1("BZIP2 support requires BZIP2 (define HAVE_BZIP2)");

    }
    else if (VAR_15->entry.method == VAR_3) {
        if (FUNC_5(VAR_16, VAR_15->entry.flags)) {
            VAR_16->uncompress_data = VAR_13;
            VAR_16->clear_state = VAR_8;
        }
    }
    else if (VAR_15->entry.method == VAR_4) {
        if (FUNC_6(VAR_15)) {
            VAR_16->uncompress_data = VAR_14;
            VAR_16->clear_state = VAR_9;
        }
    }
    else
        FUNC_1("Unsupported compression method %d", VAR_15->entry.method);
    VAR_16->initialized = VAR_16->uncompress_data != ((void*)0) && VAR_16->clear_state != ((void*)0);
    return VAR_16->initialized;
}
