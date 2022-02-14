
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sws {int inhdr; int usock; int instate; int inmsg_control; scalar_t__ inmsg_total_size; scalar_t__ inmsg_current_chunk_len; scalar_t__ inmsg_chunks; int * inmsg_current_chunk_buf; int inmsg_array; int continuing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_4 (struct nn_sws *VAR_4)
{
    if (!VAR_4->continuing) {
        FUNC_1 (FUNC_2 (&VAR_4->inmsg_array));

        VAR_4->inmsg_current_chunk_buf = ((void*)0);
        VAR_4->inmsg_chunks = 0;
        VAR_4->inmsg_current_chunk_len = 0;
        VAR_4->inmsg_total_size = 0;
    }

    FUNC_0 (VAR_4->inmsg_control, 0, VAR_3);
    FUNC_0 (VAR_4->inhdr, 0, VAR_0);
    VAR_4->instate = VAR_2;
    FUNC_3 (VAR_4->usock, VAR_4->inhdr, VAR_1, ((void*)0));

    return 0;
}
