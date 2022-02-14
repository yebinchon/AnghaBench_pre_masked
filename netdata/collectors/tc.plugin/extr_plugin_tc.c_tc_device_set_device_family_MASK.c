
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_device {int family_updated; int * family; int id; } ;


 int D_TC_LOOP ;
 int debug (int ,char*,int ,char*) ;
 int freez (int *) ;
 scalar_t__ likely (int) ;
 scalar_t__ strcmp (int ,char*) ;
 int * strdupz (char*) ;

__attribute__((used)) static inline void tc_device_set_device_family(struct tc_device *d, char *family) {
    freez(d->family);
    d->family = ((void*)0);

    if(likely(family && *family && strcmp(d->id, family) != 0)) {
        debug(D_TC_LOOP, "TC: Setting device '%s' family to '%s'", d->id, family);
        d->family = strdupz(family);
        d->family_updated = 1;
    }

}
