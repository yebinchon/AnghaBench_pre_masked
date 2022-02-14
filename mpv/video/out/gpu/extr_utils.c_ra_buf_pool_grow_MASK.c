
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct ra_buf_pool {int num_buffers; TYPE_1__ current_params; int index; int buffers; } ;
struct ra_buf {int dummy; } ;
struct ra {int dummy; } ;


 int FUNC_0 (int *,int ,int ,int ,struct ra_buf*) ;
 int FUNC_1 (struct ra*,char*,int ,int ) ;
 struct ra_buf* FUNC_2 (struct ra*,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_3(struct ra *VAR_0, struct ra_buf_pool *VAR_1)
{
    struct ra_buf *VAR_2 = FUNC_2(VAR_0, &VAR_1->current_params);
    if (!VAR_2)
        return 0;

    FUNC_0(((void*)0), VAR_1->buffers, VAR_1->num_buffers, VAR_1->index, VAR_2);
    FUNC_1(VAR_0, "Resized buffer pool of type %u to size %d\n",
               VAR_1->current_params.type, VAR_1->num_buffers);
    return 1;
}
