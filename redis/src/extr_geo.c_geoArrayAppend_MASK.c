
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int geoPoint ;
struct TYPE_3__ {int used; int buckets; int * array; } ;
typedef TYPE_1__ geoArray ;


 int * FUNC_0 (int *,int) ;

geoPoint *FUNC_1(geoArray *VAR_0) {
    if (VAR_0->used == VAR_0->buckets) {
        VAR_0->buckets = (VAR_0->buckets == 0) ? 8 : VAR_0->buckets*2;
        VAR_0->array = FUNC_0(VAR_0->array,sizeof(geoPoint)*VAR_0->buckets);
    }
    geoPoint *VAR_1 = VAR_0->array+VAR_0->used;
    VAR_0->used++;
    return VAR_1;
}
