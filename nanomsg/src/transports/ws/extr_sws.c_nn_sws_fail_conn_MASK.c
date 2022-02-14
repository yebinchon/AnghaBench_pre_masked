
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint16_t ;
struct nn_sws {char* fail_msg; size_t fail_msg_len; int mode; scalar_t__ outstate; int done; int fsm; int state; int usock; int inmsg_array; int pipebase; int instate; } ;
struct nn_iovec {char* iov_base; size_t iov_len; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

 int VAR_14 ;

 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nn_sws*,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,size_t,char*,int,int *) ;
 int FUNC_9 (int ,struct nn_iovec*,int) ;
 size_t FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11 (struct nn_sws *VAR_15, int VAR_16, char *VAR_17)
{
    size_t VAR_18;
    size_t VAR_19;
    uint8_t VAR_20 [VAR_5];
    uint8_t *VAR_21;
    struct nn_iovec VAR_22;

    FUNC_2 (VAR_15, VAR_11);


    VAR_15->instate = VAR_6;
    FUNC_5 (&VAR_15->pipebase);


    FUNC_4 (&VAR_15->inmsg_array);

    VAR_18 = FUNC_10 (VAR_17);

    VAR_19 = VAR_18 + VAR_0;


    FUNC_1 (VAR_19 <= VAR_9);


    VAR_15->fail_msg [0] = (char)(VAR_1 | VAR_14);


    VAR_15->fail_msg [1] = (char)VAR_19;

    VAR_15->fail_msg_len = VAR_4;

    switch (VAR_15->mode) {
    case 128:
        VAR_15->fail_msg [1] |= VAR_3;
        break;
    case 129:
        VAR_15->fail_msg [1] |= VAR_2;


        FUNC_7 (VAR_20, VAR_5);

        FUNC_0 (&VAR_15->fail_msg [VAR_4],
            VAR_20, VAR_5);

        VAR_15->fail_msg_len += VAR_5;
        break;
    default:

        FUNC_1 (0);
    }

    VAR_21 = (uint8_t*) (&VAR_15->fail_msg [VAR_15->fail_msg_len]);


    FUNC_6 (VAR_21, (uint16_t) VAR_16);
    VAR_15->fail_msg_len += VAR_0;


    FUNC_0 (VAR_21 + VAR_0, VAR_17, VAR_18);
    VAR_15->fail_msg_len += VAR_18;


    if (VAR_15->mode == 129) {
        FUNC_8 (VAR_21, VAR_19,
            VAR_20, VAR_5, ((void*)0));
    }


    if (VAR_15->outstate == VAR_7) {
        VAR_22.iov_base = VAR_15->fail_msg;
        VAR_22.iov_len = VAR_15->fail_msg_len;
        FUNC_9 (VAR_15->usock, &VAR_22, 1);
        VAR_15->outstate = VAR_8;
        VAR_15->state = VAR_12;
    } else {
        VAR_15->state = VAR_13;
        FUNC_3 (&VAR_15->fsm, &VAR_15->done, VAR_10);
    }

    return;
}
