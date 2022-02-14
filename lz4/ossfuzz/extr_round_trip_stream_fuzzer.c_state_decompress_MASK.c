
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buf; int pos; int size; } ;
struct TYPE_5__ {TYPE_1__ roundTrip; int dstream; } ;
typedef TYPE_2__ state_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char const*,char*,int,int const) ;

__attribute__((used)) static void FUNC_2(state_t* VAR_0, char const* VAR_1, int VAR_2)
{
    char* VAR_3 = VAR_0->roundTrip.buf + VAR_0->roundTrip.pos;
    int const VAR_4 = VAR_0->roundTrip.size - VAR_0->roundTrip.pos;
    int const VAR_5 = FUNC_1(VAR_0->dstream, VAR_1, VAR_3,
                                                   VAR_2, VAR_4);
    FUNC_0(VAR_5 >= 0);
    VAR_0->roundTrip.pos += VAR_5;
}
