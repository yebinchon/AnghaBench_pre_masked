
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_buffer_size {scalar_t__ rcvbuf; scalar_t__ sndbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int const,int,int const,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(int VAR_1, const struct socket_buffer_size *VAR_2)
{
    if (VAR_2)
    {
        const int VAR_3 = FUNC_2(VAR_1);
        const int VAR_4 = FUNC_1(VAR_1);

        if (VAR_2->sndbuf)
        {
            FUNC_4(VAR_1, VAR_2->sndbuf);
        }

        if (VAR_2->rcvbuf)
        {
            FUNC_3(VAR_1, VAR_2->rcvbuf);
        }

        FUNC_0(VAR_0, "Socket Buffers: R=[%d->%d] S=[%d->%d]",
            VAR_4,
            FUNC_1(VAR_1),
            VAR_3,
            FUNC_2(VAR_1));
    }
}
