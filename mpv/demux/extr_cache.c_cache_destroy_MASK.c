
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demux_cache {scalar_t__ fd; int filename; TYPE_1__* opts; scalar_t__ need_unlink; } ;
struct TYPE_2__ {int unlink_files; } ;


 int FUNC_0 (struct demux_cache*,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    struct demux_cache *VAR_1 = VAR_0;

    if (VAR_1->fd >= 0)
        FUNC_1(VAR_1->fd);

    if (VAR_1->need_unlink && VAR_1->opts->unlink_files >= 1) {
        if (FUNC_2(VAR_1->filename))
            FUNC_0(VAR_1, "Failed to delete cache temporary file.\n");
    }
}
