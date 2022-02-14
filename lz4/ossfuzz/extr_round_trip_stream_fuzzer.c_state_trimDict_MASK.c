
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ pos; int buf; } ;
struct TYPE_6__ {scalar_t__ pos; int buf; int size; } ;
struct TYPE_7__ {TYPE_1__ roundTrip; TYPE_2__ data; int seed; } ;
typedef TYPE_3__ state_t ;


 int FUNC_0 (int,char*,size_t const) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,size_t const) ;

__attribute__((used)) static size_t FUNC_5(state_t* VAR_0)
{

    uint32_t VAR_1 = FUNC_3(70 * 1024, VAR_0->data.size);
    size_t const VAR_2 = FUNC_2(&VAR_0->seed, 0, VAR_1);
    FUNC_0(2, "dictSize = %zu", VAR_2);
    FUNC_1(VAR_0->data.pos == 0);
    FUNC_1(VAR_0->roundTrip.pos == 0);
    FUNC_4(VAR_0->roundTrip.buf, VAR_0->data.buf, VAR_2);
    VAR_0->data.pos += VAR_2;
    VAR_0->roundTrip.pos += VAR_2;
    return VAR_2;
}
