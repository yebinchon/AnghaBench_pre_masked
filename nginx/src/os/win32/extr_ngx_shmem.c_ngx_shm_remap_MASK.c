
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int name; int size; int log; int * addr; int handle; } ;
typedef TYPE_1__ ngx_shm_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int ,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,char*,int ,int *,...) ;

ngx_int_t
FUNC_3(ngx_shm_t *VAR_5, u_char *VAR_6)
{
    if (FUNC_1(VAR_5->addr) == 0) {
        FUNC_2(VAR_2, VAR_5->log, VAR_4,
                      "UnmapViewOfFile(%p) of file mapping \"%V\" failed",
                      *VAR_5->addr, &VAR_5->name);
        return VAR_1;
    }

    VAR_5->addr = FUNC_0(VAR_5->handle, VAR_0, 0, 0, 0, VAR_6);

    if (VAR_5->addr != ((void*)0)) {
        return VAR_3;
    }

    FUNC_2(VAR_2, VAR_5->log, VAR_4,
                  "MapViewOfFileEx(%uz, %p) of file mapping \"%V\" failed",
                  VAR_5->size, VAR_6, &VAR_5->name);

    return VAR_1;
}
