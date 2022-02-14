
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct msghdr {scalar_t__ msg_iovlen; TYPE_3__* msg_iov; } ;
typedef int ssize_t ;
typedef enum transmit_result { ____Placeholder_transmit_result } transmit_result ;
struct TYPE_13__ {size_t msgcurr; size_t msgused; int (* sendmsg ) (TYPE_4__*,struct msghdr*,int ) ;int transport; TYPE_2__* thread; struct msghdr* msglist; } ;
typedef TYPE_4__ conn ;
typedef scalar_t__ caddr_t ;
struct TYPE_14__ {scalar_t__ verbose; } ;
struct TYPE_12__ {int iov_len; scalar_t__ iov_base; } ;
struct TYPE_10__ {int bytes_written; int mutex; } ;
struct TYPE_11__ {TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_8__ VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (TYPE_4__*,struct msghdr*,int ) ;
 int FUNC_8 (TYPE_4__*,int) ;

__attribute__((used)) static enum transmit_result FUNC_9(conn *VAR_13) {
    FUNC_1(VAR_13 != ((void*)0));

    if (VAR_13->msgcurr < VAR_13->msgused &&
            VAR_13->msglist[VAR_13->msgcurr].msg_iovlen == 0) {

        VAR_13->msgcurr++;
    }
    if (VAR_13->msgcurr < VAR_13->msgused) {
        ssize_t VAR_14;
        struct msghdr *VAR_15 = &VAR_13->msglist[VAR_13->msgcurr];

        VAR_14 = VAR_13->sendmsg(VAR_13, VAR_15, 0);
        if (VAR_14 >= 0) {
            FUNC_5(&VAR_13->thread->stats.mutex);
            VAR_13->thread->stats.bytes_written += VAR_14;
            FUNC_6(&VAR_13->thread->stats.mutex);



            while (VAR_15->msg_iovlen > 0 && VAR_14 >= VAR_15->msg_iov->iov_len) {
                VAR_14 -= VAR_15->msg_iov->iov_len;
                VAR_15->msg_iovlen--;
                VAR_15->msg_iov++;
            }



            if (VAR_14 > 0) {
                VAR_15->msg_iov->iov_base = (caddr_t)VAR_15->msg_iov->iov_base + VAR_14;
                VAR_15->msg_iov->iov_len -= VAR_14;
            }
            return VAR_6;
        }
        if (VAR_14 == -1 && (VAR_10 == VAR_0 || VAR_10 == VAR_3)) {
            if (!FUNC_8(VAR_13, VAR_2 | VAR_1)) {
                if (VAR_11.verbose > 0)
                    FUNC_3(VAR_12, "Couldn't update event\n");
                FUNC_2(VAR_13, VAR_8);
                return VAR_5;
            }
            return VAR_7;
        }


        if (VAR_11.verbose > 0)
            FUNC_4("Failed to write, and not due to blocking");

        if (FUNC_0(VAR_13->transport))
            FUNC_2(VAR_13, VAR_9);
        else
            FUNC_2(VAR_13, VAR_8);
        return VAR_5;
    } else {
        return VAR_4;
    }
}
