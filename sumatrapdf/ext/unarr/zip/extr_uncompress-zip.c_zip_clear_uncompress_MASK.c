
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar_archive_zip_uncomp {int initialized; int (* clear_state ) (struct ar_archive_zip_uncomp*) ;} ;


 int FUNC_0 (struct ar_archive_zip_uncomp*) ;

void FUNC_1(struct ar_archive_zip_uncomp *VAR_0)
{
    if (!VAR_0->initialized)
        return;
    VAR_0->clear_state(VAR_0);
    VAR_0->initialized = 0;
}
