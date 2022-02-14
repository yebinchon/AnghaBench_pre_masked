
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_list {int dummy; } ;
struct msg_chunk {int chunk; int item; } ;


 int FUNC_0 (struct msg_chunk*) ;
 struct msg_chunk* FUNC_1 (int,char*) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (struct nn_list*) ;
 int FUNC_5 (struct nn_list*,int *,int ) ;
 int FUNC_6 (int *) ;

void *FUNC_7 (size_t VAR_0, struct nn_list *VAR_1)
{
    struct msg_chunk *VAR_2;

    VAR_2 = FUNC_1 (sizeof (struct msg_chunk), "msg_chunk");
    FUNC_0 (VAR_2);

    FUNC_3 (&VAR_2->chunk, VAR_0);
    FUNC_6 (&VAR_2->item);

    FUNC_5 (VAR_1, &VAR_2->item, FUNC_4 (VAR_1));

    return FUNC_2 (&VAR_2->chunk);
}
