
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int device_extension ;
struct TYPE_5__ {int cache_loaded; } ;
typedef TYPE_1__ chunk ;
typedef int PIRP ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

NTSTATUS FUNC_4(device_extension* VAR_1, chunk* VAR_2, PIRP VAR_3) {
    NTSTATUS VAR_4;

    if (VAR_2->cache_loaded)
        return VAR_0;

    VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
    if (!FUNC_1(VAR_4)) {
        FUNC_0("load_free_space_cache returned %08x\n", VAR_4);
        return VAR_4;
    }

    FUNC_3(VAR_2);

    VAR_2->cache_loaded = 1;

    return VAR_0;
}
