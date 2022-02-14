
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int length; TYPE_1__* item; } ;
struct TYPE_4__ {size_t* pcls; } ;
typedef TYPE_2__ IsolatedRun ;


 int FUNC_0 (char*,...) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(const char* VAR_1, IsolatedRun *VAR_2)
{
    int VAR_3, VAR_4 = 0;
    FUNC_0("%s:",VAR_1);
    FUNC_0("[ ");
    for (VAR_3 = 0; VAR_3 < VAR_2->length && VAR_4 < 200; VAR_3++)
    {
        FUNC_0(" %s",VAR_0[*VAR_2->item[VAR_3].pcls]);
        VAR_4 += FUNC_1(VAR_0[*VAR_2->item[VAR_3].pcls])+1;
    }
    if (VAR_3 != VAR_2->length)
        FUNC_0("...");
    FUNC_0(" ]\n");
}
