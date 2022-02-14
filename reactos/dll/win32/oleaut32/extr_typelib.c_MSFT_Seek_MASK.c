
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ oStart; scalar_t__ length; scalar_t__ pos; } ;
typedef TYPE_1__ TLBContext ;
typedef scalar_t__ LONG ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(TLBContext *VAR_1, LONG VAR_2)
{
    if (VAR_2 != VAR_0)
    {
        VAR_2 += VAR_1->oStart;
        if (VAR_2 > VAR_1->length)
        {

            FUNC_0("seek beyond end (%d/%d)\n", VAR_2, VAR_1->length );
            FUNC_1();
        }
        VAR_1->pos = VAR_2;
    }
}
