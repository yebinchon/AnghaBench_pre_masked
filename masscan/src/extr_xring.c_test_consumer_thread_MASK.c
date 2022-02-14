
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct XRing {scalar_t__ tail; scalar_t__ head; } ;
struct Test {int consumer_done; int total_count; int not_active; struct XRing* xring; } ;
typedef scalar_t__ Element ;


 scalar_t__ FUNC_0 (struct XRing*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
    struct Test *VAR_1 = (struct Test *)VAR_0;
    struct XRing *VAR_2 = VAR_1->xring;


    while (!VAR_1->not_active) {
        Element VAR_3;

        VAR_3 = FUNC_0(VAR_2);
        if (VAR_3 == 0)
            ;
        else {
            VAR_1->total_count += VAR_3;
        }
    }

    while (VAR_2->tail < VAR_2->head) {
        Element VAR_4;

        VAR_4 = FUNC_0(VAR_2);
        if (VAR_4 == 0)
            ;
        else {
            VAR_1->total_count += VAR_4;
        }
    }

    VAR_1->consumer_done = 1;
}
