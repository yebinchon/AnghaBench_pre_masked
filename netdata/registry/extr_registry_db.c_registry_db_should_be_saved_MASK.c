
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ log_count; scalar_t__ save_registry_every_entries; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_1 ;

int FUNC_1(void) {
    FUNC_0(VAR_0, "log entries %llu, max %llu", VAR_1.log_count, VAR_1.save_registry_every_entries);
    return VAR_1.log_count > VAR_1.save_registry_every_entries;
}
