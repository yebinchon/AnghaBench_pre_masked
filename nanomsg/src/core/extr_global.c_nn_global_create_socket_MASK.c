
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_socktype {int domain; int protocol; } ;
struct nn_sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ nsocks; int* unused; struct nn_sock** socks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct nn_sock* FUNC_0 (int,char*) ;
 int FUNC_1 (struct nn_sock*) ;
 int FUNC_2 (struct nn_sock*,struct nn_socktype const*,int) ;
 struct nn_socktype** VAR_7 ;
 TYPE_1__ VAR_8 ;

int FUNC_3 (int VAR_9, int VAR_10)
{
    int VAR_11;
    int VAR_12;
    int VAR_13;
    const struct nn_socktype *VAR_14;
    struct nn_sock *VAR_15;




    if (VAR_9 != VAR_0 && VAR_9 != VAR_1) {
        return -VAR_2;
    }


    if (VAR_8.nsocks >= VAR_6) {
        return -VAR_4;
    }


    VAR_12 = VAR_8.unused [VAR_6 - VAR_8.nsocks - 1];


    for (VAR_13 = 0; (VAR_14 = VAR_7[VAR_13]) != ((void*)0); VAR_13++) {
        if (VAR_14->domain == VAR_9 && VAR_14->protocol == VAR_10) {


            if ((VAR_15 = FUNC_0 (sizeof (struct nn_sock), "sock")) == ((void*)0))
                return -VAR_5;
            VAR_11 = FUNC_2 (VAR_15, VAR_14, VAR_12);
            if (VAR_11 < 0) {
                FUNC_1 (VAR_15);
                return VAR_11;
            }


            VAR_8.socks [VAR_12] = VAR_15;
            ++VAR_8.nsocks;
            return VAR_12;
        }
    }

    return -VAR_3;
}
