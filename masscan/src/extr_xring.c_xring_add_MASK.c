
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct XRing {scalar_t__* ring; int head; int tail; } ;
typedef scalar_t__ Element ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct XRing *VAR_3, Element VAR_4)
{
    volatile Element *VAR_5 = VAR_3->ring;
    Element VAR_6;

    if (VAR_4 == 0) {
        return VAR_1;
    }

    if (VAR_3->head >= VAR_3->tail + VAR_0) {

        return VAR_1;
    }
    VAR_6 = VAR_3->ring[VAR_3->head & (VAR_0-1)];
    if (VAR_6 == 0) {
        VAR_5[VAR_3->head & (VAR_0-1)] = VAR_4;
        VAR_3->head++;
        return VAR_2;







    }
    return VAR_1;
}
