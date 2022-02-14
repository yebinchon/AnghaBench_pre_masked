
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_socket {int stream_buf_data; int stream_buf; void* ctrl_sd; int writes; int reads; void* sd; int listen_handle; int gremlin; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int *,void*,int ) ;
 int FUNC_2 (struct link_socket*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (int *) ;

void
FUNC_9(struct link_socket *VAR_4)
{
    if (VAR_4)
    {



        const int VAR_5 = 0;


        if (FUNC_7(VAR_4->sd))
        {



            if (!VAR_5)
            {
                FUNC_4(VAR_0, "TCP/UDP: Closing socket");
                if (FUNC_5(VAR_4->sd))
                {
                    FUNC_4(VAR_2 | VAR_1, "TCP/UDP: Close Socket failed");
                }
            }
            VAR_4->sd = VAR_3;







        }

        if (FUNC_7(VAR_4->ctrl_sd))
        {
            if (FUNC_5(VAR_4->ctrl_sd))
            {
                FUNC_4(VAR_2 | VAR_1, "TCP/UDP: Close Socket (ctrl_sd) failed");
            }
            VAR_4->ctrl_sd = VAR_3;
        }

        FUNC_8(&VAR_4->stream_buf);
        FUNC_3(&VAR_4->stream_buf_data);
        if (!VAR_5)
        {
            FUNC_2(VAR_4);
        }
    }
}
