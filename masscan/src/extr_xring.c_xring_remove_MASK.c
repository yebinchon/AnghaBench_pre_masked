
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct XRing {int tail; int head; scalar_t__* ring; } ;
typedef scalar_t__ Element ;


 int VAR_0 ;

__attribute__((used)) static Element
FUNC_0(struct XRing *VAR_1)
{
    volatile Element *VAR_2 = VAR_1->ring;
    Element VAR_3;

    if (VAR_1->tail >= VAR_1->head)
        return 0;


    VAR_3 = VAR_2[VAR_1->tail & (VAR_0-1)];
    if (VAR_3) {
        VAR_2[VAR_1->tail & (VAR_0-1)] = 0;
        VAR_1->tail++;
        return VAR_3;
    } else {
        return 0;
    }
}
