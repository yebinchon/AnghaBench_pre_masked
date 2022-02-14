
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {char const* buf; size_t size; scalar_t__ pos; } ;
struct TYPE_5__ {int dstream; int cstream; int cstreamHC; void* roundTrip; void* compressed; TYPE_1__ data; int seed; } ;
typedef TYPE_2__ state_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 void* FUNC_5 (size_t) ;

state_t FUNC_6(char const* VAR_0, size_t VAR_1, uint32_t VAR_2)
{
    state_t VAR_3;

    VAR_3.seed = VAR_2;

    VAR_3.data.buf = (char const*)VAR_0;
    VAR_3.data.size = VAR_1;
    VAR_3.data.pos = 0;


    VAR_3.compressed = FUNC_5(1024 + 2 * FUNC_1(VAR_1));
    VAR_3.roundTrip = FUNC_5(VAR_1);

    VAR_3.cstream = FUNC_2();
    FUNC_0(VAR_3.cstream);
    VAR_3.cstreamHC = FUNC_4();
    FUNC_0(VAR_3.cstream);
    VAR_3.dstream = FUNC_3();
    FUNC_0(VAR_3.dstream);

    return VAR_3;
}
