
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int item ;
struct TYPE_8__ {int it_flags; size_t remaining; size_t slabs_clsid; scalar_t__ checked; scalar_t__ unfetched; scalar_t__ reclaimed; scalar_t__ time; scalar_t__ prev; scalar_t__ next; scalar_t__ nkey; scalar_t__ nbytes; } ;
struct TYPE_7__ {int verbose; } ;
struct TYPE_6__ {int lru_crawler_starts; } ;
struct TYPE_5__ {int lru_crawler_running; } ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,size_t) ;
 int * VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(uint32_t VAR_8, uint32_t VAR_9) {
    uint32_t VAR_10 = VAR_8;
    int VAR_11 = 0;

    FUNC_5(&VAR_3[VAR_10]);
    if (VAR_2[VAR_10].it_flags == 0) {
        if (VAR_4.verbose > 2)
            FUNC_4(VAR_7, "Kicking LRU crawler off for LRU %zu\n", VAR_10);
        VAR_2[VAR_10].nbytes = 0;
        VAR_2[VAR_10].nkey = 0;
        VAR_2[VAR_10].it_flags = 1;
        VAR_2[VAR_10].next = 0;
        VAR_2[VAR_10].prev = 0;
        VAR_2[VAR_10].time = 0;
        if (VAR_9 == VAR_0) {
            VAR_9 = FUNC_2(VAR_10);
        }







        if (VAR_9) VAR_9++;
        VAR_2[VAR_10].remaining = VAR_9;
        VAR_2[VAR_10].slabs_clsid = VAR_10;
        VAR_2[VAR_10].reclaimed = 0;
        VAR_2[VAR_10].unfetched = 0;
        VAR_2[VAR_10].checked = 0;
        FUNC_3((item *)&VAR_2[VAR_10]);
        VAR_1++;
        VAR_11++;
    }
    FUNC_6(&VAR_3[VAR_10]);
    if (VAR_11) {
        FUNC_0();
        VAR_6.lru_crawler_running = 1;
        VAR_5.lru_crawler_starts++;
        FUNC_1();
    }
    return VAR_11;
}
