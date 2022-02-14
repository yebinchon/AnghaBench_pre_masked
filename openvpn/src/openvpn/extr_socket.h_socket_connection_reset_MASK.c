
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ error; } ;
struct link_socket {TYPE_1__ stream_buf; scalar_t__ stream_reset; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 scalar_t__ FUNC_0 (struct link_socket const*) ;
 int FUNC_1 () ;

__attribute__((used)) static inline bool
FUNC_2(const struct link_socket *VAR_3, int VAR_4)
{
    if (FUNC_0(VAR_3))
    {
        if (VAR_3->stream_reset || VAR_3->stream_buf.error)
        {
            return 1;
        }
        else if (VAR_4 < 0)
        {
            const int VAR_5 = FUNC_1();



            return VAR_5 == VAR_0;

        }
    }
    return 0;
}
