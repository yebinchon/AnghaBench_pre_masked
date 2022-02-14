
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {scalar_t__ len; } ;
struct stream_buf {int error; scalar_t__ maxlen; int port_share_state; int residual; struct buffer buf_init; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int const VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct stream_buf*) ;

__attribute__((used)) static void
FUNC_3(struct stream_buf *VAR_5,
                struct buffer *VAR_6,
                const unsigned int VAR_7,
                const int VAR_8)
{
    VAR_5->buf_init = *VAR_6;
    VAR_5->maxlen = VAR_5->buf_init.len;
    VAR_5->buf_init.len = 0;
    VAR_5->residual = FUNC_0(VAR_5->maxlen);
    VAR_5->error = 0;





    FUNC_2(VAR_5);

    FUNC_1(VAR_0, "STREAM: INIT maxlen=%d", VAR_5->maxlen);
}
