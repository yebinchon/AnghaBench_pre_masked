
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; } ;
struct stream_buf {int len; scalar_t__ port_share_state; int error; int maxlen; TYPE_1__ buf; TYPE_1__ residual; } ;
typedef int packet_size_type ;
typedef int net_size ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct stream_buf*) ;
 int FUNC_10 (struct stream_buf*) ;

__attribute__((used)) static bool
FUNC_11(struct stream_buf *VAR_6,
                 int VAR_7)
{
    FUNC_5(VAR_0, "STREAM: ADD length_added=%d", VAR_7);
    if (VAR_7 > 0)
    {
        VAR_6->buf.len += VAR_7;
    }



    if (VAR_6->len < 0 && VAR_6->buf.len >= (int) sizeof(packet_size_type))
    {
        packet_size_type VAR_8;
        FUNC_0(FUNC_4(&VAR_6->buf, &VAR_8, sizeof(VAR_8)));
        VAR_6->len = FUNC_8(VAR_8);

        if (VAR_6->len < 1 || VAR_6->len > VAR_6->maxlen)
        {
            FUNC_7(VAR_2, "WARNING: Bad encapsulated packet length from peer (%d), which must be > 0 and <= %d -- please ensure that --tun-mtu or --link-mtu is equal on both peers -- this condition could also indicate a possible active attack on the TCP link -- [Attempting restart...]", VAR_6->len, VAR_6->maxlen);
            FUNC_9(VAR_6);
            VAR_6->error = 1;
            return 0;
        }
    }


    if (VAR_6->len > 0 && VAR_6->buf.len >= VAR_6->len)
    {

        FUNC_0(FUNC_3(&VAR_6->residual, 0));
        if (VAR_6->buf.len > VAR_6->len)
        {
            FUNC_0(FUNC_2(&VAR_6->residual, &VAR_6->buf, VAR_6->len));
        }
        FUNC_5(VAR_0, "STREAM: ADD returned TRUE, buf_len=%d, residual_len=%d",
             FUNC_1(&VAR_6->buf),
             FUNC_1(&VAR_6->residual));
        return 1;
    }
    else
    {
        FUNC_5(VAR_0, "STREAM: ADD returned FALSE (have=%d need=%d)", VAR_6->buf.len, VAR_6->len);
        FUNC_10(VAR_6);
        return 0;
    }
}
