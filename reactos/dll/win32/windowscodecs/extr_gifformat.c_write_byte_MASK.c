
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; char* data; } ;
struct output_stream {TYPE_1__ gif_block; int out; } ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*,int,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct output_stream *VAR_1, char VAR_2)
{
    if (VAR_1->gif_block.len == 255)
    {
        if (FUNC_0(VAR_1->out, &VAR_1->gif_block, sizeof(VAR_1->gif_block), ((void*)0)) != VAR_0)
            return 0;

        VAR_1->gif_block.len = 0;
    }

    VAR_1->gif_block.data[VAR_1->gif_block.len++] = VAR_2;

    return 1;
}
