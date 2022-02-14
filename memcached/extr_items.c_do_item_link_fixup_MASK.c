
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {size_t slabs_clsid; scalar_t__ prev; scalar_t__ next; int nkey; } ;
typedef TYPE_1__ item ;
struct TYPE_13__ {int total_items; } ;
struct TYPE_12__ {int curr_bytes; int curr_items; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__** VAR_0 ;
 int FUNC_6 (TYPE_1__*) ;
 int * VAR_1 ;
 int* VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_1__** VAR_5 ;

void FUNC_7(item *VAR_6) {
    item **VAR_7, **VAR_8;
    int VAR_9 = FUNC_1(VAR_6);
    uint32_t VAR_10 = FUNC_5(FUNC_0(VAR_6), VAR_6->nkey);
    FUNC_4(VAR_6, VAR_10);

    VAR_7 = &VAR_0[VAR_6->slabs_clsid];
    VAR_8 = &VAR_5[VAR_6->slabs_clsid];
    if (VAR_6->prev == 0 && *VAR_7 == 0) *VAR_7 = VAR_6;
    if (VAR_6->next == 0 && *VAR_8 == 0) *VAR_8 = VAR_6;
    VAR_1[VAR_6->slabs_clsid]++;
    VAR_2[VAR_6->slabs_clsid] += VAR_9;

    FUNC_2();
    VAR_4.curr_bytes += VAR_9;
    VAR_4.curr_items += 1;
    VAR_3.total_items += 1;
    FUNC_3();

    FUNC_6(VAR_6);

    return;
}
