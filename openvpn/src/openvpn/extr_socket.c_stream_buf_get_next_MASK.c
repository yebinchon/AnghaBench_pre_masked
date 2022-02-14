
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int len; } ;
struct stream_buf {struct buffer next; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct buffer*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static inline void
FUNC_3(struct stream_buf *VAR_1, struct buffer *VAR_2)
{
    FUNC_2(VAR_0, "STREAM: GET NEXT len=%d",
         FUNC_1(&VAR_1->next) ? VAR_1->next.len : -1);
    FUNC_0(FUNC_1(&VAR_1->next));
    *VAR_2 = VAR_1->next;
}
