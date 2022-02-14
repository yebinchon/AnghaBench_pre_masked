
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
struct Throttler {double max_rate; int index; int batch_size; double current_rate; size_t test_timestamp; size_t test_packet_count; TYPE_1__* buckets; } ;
struct TYPE_2__ {size_t timestamp; size_t packet_count; } ;


 size_t FUNC_0 () ;
 int FUNC_1 (size_t) ;

uint64_t
FUNC_2(struct Throttler *VAR_0, uint64_t VAR_1)
{
    uint64_t VAR_2;
    uint64_t VAR_3;
    uint64_t VAR_4;
    uint64_t VAR_5;
    double VAR_6;
    double VAR_7 = VAR_0->max_rate;

again:



    VAR_2 = FUNC_0();





    VAR_3 = (VAR_0->index) & 0xFF;
    VAR_0->buckets[VAR_3].timestamp = VAR_2;
    VAR_0->buckets[VAR_3].packet_count = VAR_1;

    VAR_3 = (++VAR_0->index) & 0xFF;
    VAR_4 = VAR_0->buckets[VAR_3].timestamp;
    VAR_5 = VAR_0->buckets[VAR_3].packet_count;





    if (VAR_2 - VAR_4 > 1000000) {

        VAR_0->batch_size = 1;
        goto again;
    }







    VAR_6 = 1.0*(VAR_1 - VAR_5)/((VAR_2 - VAR_4)/1000000.0);






    if (VAR_6 > VAR_7) {
        double VAR_8;


        VAR_8 = (VAR_6 - VAR_7) / VAR_0->max_rate;




        VAR_8 *= 0.1;





        if (VAR_8 > 0.1)
            VAR_8 = 0.1;







        VAR_0->batch_size *= 0.999;


        FUNC_1((uint64_t)(VAR_8 * 1000000.0));







        goto again;
    }
    VAR_0->batch_size *= 1.005;
    if (VAR_0->batch_size > 10000)
        VAR_0->batch_size = 10000;
    VAR_0->current_rate = VAR_6;

    VAR_0->test_timestamp = VAR_2;
    VAR_0->test_packet_count = VAR_1;
    return (uint64_t)VAR_0->batch_size;
}
