
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct output_stream {TYPE_1__ gif_block; int out; } ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*,int,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(void *VAR_1)
{
    struct output_stream *VAR_2 = VAR_1;

    if (VAR_2->gif_block.len)
    {
        if (FUNC_0(VAR_2->out, &VAR_2->gif_block, VAR_2->gif_block.len + sizeof(VAR_2->gif_block.len), ((void*)0)) != VAR_0)
            return 0;
    }


    VAR_2->gif_block.len = 0;
    return FUNC_0(VAR_2->out, &VAR_2->gif_block, sizeof(VAR_2->gif_block.len), ((void*)0)) == VAR_0;
}
