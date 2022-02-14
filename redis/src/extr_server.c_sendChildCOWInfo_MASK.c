
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t cow_size; } ;
struct TYPE_4__ {TYPE_1__ child_info_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int ,char*,char*,size_t) ;
 size_t FUNC_2 (int) ;

void FUNC_3(int VAR_2, char *VAR_3) {
    size_t VAR_4 = FUNC_2(-1);

    if (VAR_4) {
        FUNC_1(VAR_0,
            "%s: %zu MB of memory used by copy-on-write",
            VAR_3, VAR_4/(1024*1024));
    }

    VAR_1.child_info_data.cow_size = VAR_4;
    FUNC_0(VAR_2);
}
