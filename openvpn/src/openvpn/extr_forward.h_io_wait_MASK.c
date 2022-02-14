
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int event_set_status; scalar_t__ fast_io; } ;
struct context {TYPE_1__ c2; } ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static inline void
FUNC_0(struct context *VAR_5, const unsigned int VAR_6)
{
    void FUNC_1(struct context *VAR_7, const unsigned int VAR_8);

    if (VAR_5->c2.fast_io && (VAR_6 & (VAR_2|VAR_1|VAR_0)))
    {

        unsigned int VAR_9 = 0;
        if (VAR_6 & VAR_2)
        {
            VAR_9 |= VAR_4;
        }
        if (VAR_6 & (VAR_1|VAR_0))
        {
            VAR_9 |= VAR_3;
        }
        VAR_5->c2.event_set_status = VAR_9;
    }
    else
    {

        FUNC_1(VAR_5, VAR_6);
    }
}
