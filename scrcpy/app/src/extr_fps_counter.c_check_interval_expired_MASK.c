
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fps_counter {scalar_t__ next_timestamp; scalar_t__ nr_skipped; scalar_t__ nr_rendered; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fps_counter*) ;

__attribute__((used)) static void
FUNC_1(struct fps_counter *VAR_1, uint32_t VAR_2) {
    if (VAR_2 < VAR_1->next_timestamp) {
        return;
    }

    FUNC_0(VAR_1);
    VAR_1->nr_rendered = 0;
    VAR_1->nr_skipped = 0;

    uint32_t VAR_3 =
        (VAR_2 - VAR_1->next_timestamp) / VAR_0 + 1;
    VAR_1->next_timestamp += VAR_0 * VAR_3;
}
