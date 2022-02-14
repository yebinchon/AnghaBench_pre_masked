
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_buf {int residual_fully_formed; int len; int next; int buf_init; int buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static inline void
FUNC_2(struct stream_buf *VAR_1)
{
    FUNC_1(VAR_0, "STREAM: RESET");
    VAR_1->residual_fully_formed = 0;
    VAR_1->buf = VAR_1->buf_init;
    FUNC_0(&VAR_1->next);
    VAR_1->len = -1;
}
