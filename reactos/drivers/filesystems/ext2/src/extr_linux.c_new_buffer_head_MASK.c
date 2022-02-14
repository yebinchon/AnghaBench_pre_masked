
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_head {int b_ts_creat; int b_link; } ;
struct TYPE_2__ {int bh_acount; int bh_count; int bh_cache; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct buffer_head*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_3 ;
 struct buffer_head* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct buffer_head*,int ,int) ;

struct buffer_head *
FUNC_7()
{
    struct buffer_head * VAR_4 = ((void*)0);
    VAR_4 = FUNC_5(VAR_3.bh_cache, VAR_1);
    if (VAR_4) {
        FUNC_4(&VAR_3.bh_count);
        FUNC_4(&VAR_3.bh_acount);

        FUNC_6(VAR_4, 0, sizeof(struct buffer_head));
        FUNC_2(&VAR_4->b_link);
        FUNC_3(&VAR_4->b_ts_creat);
        FUNC_0(VAR_0, ("bh=%p allocated.\n", VAR_4));
        FUNC_1(VAR_2, VAR_4, sizeof(struct buffer_head));
    }

    return VAR_4;
}
