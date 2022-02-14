
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
typedef enum try_read_result { ____Placeholder_try_read_result } try_read_result ;
struct TYPE_8__ {int request_addr_size; unsigned char request_id; int rbytes; scalar_t__ rbuf; scalar_t__ rcurr; TYPE_2__* thread; int request_addr; int rsize; int sfd; } ;
typedef TYPE_3__ conn ;
struct TYPE_6__ {int bytes_read; int mutex; } ;
struct TYPE_7__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__,int ,int ,struct sockaddr*,int*) ;

__attribute__((used)) static enum try_read_result FUNC_6(conn *VAR_2) {
    int VAR_3;

    FUNC_0(VAR_2 != ((void*)0));

    VAR_2->request_addr_size = sizeof(VAR_2->request_addr);
    VAR_3 = FUNC_5(VAR_2->sfd, VAR_2->rbuf, VAR_2->rsize,
                   0, (struct sockaddr *)&VAR_2->request_addr,
                   &VAR_2->request_addr_size);
    if (VAR_3 > 8) {
        unsigned char *VAR_4 = (unsigned char *)VAR_2->rbuf;
        FUNC_3(&VAR_2->thread->stats.mutex);
        VAR_2->thread->stats.bytes_read += VAR_3;
        FUNC_4(&VAR_2->thread->stats.mutex);


        VAR_2->request_id = VAR_4[0] * 256 + VAR_4[1];


        if (VAR_4[4] != 0 || VAR_4[5] != 1) {
            FUNC_2(VAR_2, "SERVER_ERROR multi-packet request not supported");
            return VAR_1;
        }


        VAR_3 -= 8;
        FUNC_1(VAR_2->rbuf, VAR_2->rbuf + 8, VAR_3);

        VAR_2->rbytes = VAR_3;
        VAR_2->rcurr = VAR_2->rbuf;
        return VAR_0;
    }
    return VAR_1;
}
