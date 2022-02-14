
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ residual_fully_formed; } ;
struct link_socket {int stream_reset; TYPE_1__ stream_buf; int sd; int reads; } ;
struct buffer {int len; } ;


 int FUNC_0 (struct buffer*) ;
 int FUNC_1 (struct buffer*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int *,struct buffer*,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,struct buffer*) ;
 int FUNC_6 (TYPE_1__*,struct buffer*) ;
 int FUNC_7 (TYPE_1__*) ;

int
FUNC_8(struct link_socket *VAR_1,
                     struct buffer *VAR_2)
{
    int VAR_3 = 0;

    if (!VAR_1->stream_buf.residual_fully_formed)
    {



        struct buffer VAR_4;
        FUNC_6(&VAR_1->stream_buf, &VAR_4);
        VAR_3 = FUNC_2(VAR_1->sd, FUNC_1(&VAR_4), FUNC_0(&VAR_4), VAR_0);


        if (!VAR_3)
        {
            VAR_1->stream_reset = 1;
        }
        if (VAR_3 <= 0)
        {
            return VAR_2->len = VAR_3;
        }
    }

    if (VAR_1->stream_buf.residual_fully_formed
        || FUNC_4(&VAR_1->stream_buf, VAR_3))
    {
        FUNC_5(&VAR_1->stream_buf, VAR_2);
        FUNC_7(&VAR_1->stream_buf);
        return VAR_2->len;
    }
    else
    {
        return VAR_2->len = 0;
    }
}
