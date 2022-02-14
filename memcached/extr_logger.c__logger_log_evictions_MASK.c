
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct logentry_eviction {long long exptime; scalar_t__ latime; scalar_t__ nkey; int key; int clsid; int it_flags; } ;
struct TYPE_7__ {scalar_t__ size; scalar_t__ data; } ;
typedef TYPE_1__ logentry ;
struct TYPE_8__ {scalar_t__ exptime; scalar_t__ time; scalar_t__ nkey; int it_flags; } ;
typedef TYPE_2__ item ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(logentry *VAR_1, item *VAR_2) {
    struct logentry_eviction *VAR_3 = (struct logentry_eviction *) VAR_1->data;
    VAR_3->exptime = (VAR_2->exptime > 0) ? (long long int)(VAR_2->exptime - VAR_0) : (long long int) -1;
    VAR_3->latime = VAR_0 - VAR_2->time;
    VAR_3->it_flags = VAR_2->it_flags;
    VAR_3->nkey = VAR_2->nkey;
    VAR_3->clsid = FUNC_0(VAR_2);
    FUNC_2(VAR_3->key, FUNC_1(VAR_2), VAR_2->nkey);
    VAR_1->size = sizeof(struct logentry_eviction) + VAR_3->nkey;
}
