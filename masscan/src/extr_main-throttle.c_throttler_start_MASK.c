
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Throttler {double max_rate; int batch_size; TYPE_1__* buckets; } ;
struct TYPE_2__ {scalar_t__ packet_count; int timestamp; } ;


 int FUNC_0 (int,char*,double) ;
 int FUNC_1 (struct Throttler*,int ,int) ;
 int FUNC_2 () ;

void
FUNC_3(struct Throttler *VAR_0, double VAR_1)
{
    unsigned VAR_2;

    FUNC_1(VAR_0, 0, sizeof(*VAR_0));

    VAR_0->max_rate = VAR_1;

    for (VAR_2=0; VAR_2<sizeof(VAR_0->buckets)/sizeof(VAR_0->buckets[0]); VAR_2++) {
        VAR_0->buckets[VAR_2].timestamp = FUNC_2();
        VAR_0->buckets[VAR_2].packet_count = 0;
    }

    VAR_0->batch_size = 1;

    FUNC_0(1, "maxrate = %0.2f\n", VAR_0->max_rate);
}
