
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_7__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_6__ {TYPE_1__* d1; } ;
struct TYPE_5__ {TYPE_3__ next_timeout; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (struct timeval*,TYPE_3__*,int) ;
 int FUNC_2 (struct timeval*,int ,int) ;

struct timeval *FUNC_3(SSL *VAR_0, struct timeval *VAR_1)
{
    struct timeval VAR_2;


    if (VAR_0->d1->next_timeout.tv_sec == 0 && VAR_0->d1->next_timeout.tv_usec == 0) {
        return ((void*)0);
    }


    FUNC_0(&VAR_2);


    if (VAR_0->d1->next_timeout.tv_sec < VAR_2.tv_sec ||
        (VAR_0->d1->next_timeout.tv_sec == VAR_2.tv_sec &&
         VAR_0->d1->next_timeout.tv_usec <= VAR_2.tv_usec)) {
        FUNC_2(VAR_1, 0, sizeof(*VAR_1));
        return VAR_1;
    }


    FUNC_1(VAR_1, &(VAR_0->d1->next_timeout), sizeof(struct timeval));
    VAR_1->tv_sec -= VAR_2.tv_sec;
    VAR_1->tv_usec -= VAR_2.tv_usec;
    if (VAR_1->tv_usec < 0) {
        VAR_1->tv_sec--;
        VAR_1->tv_usec += 1000000;
    }





    if (VAR_1->tv_sec == 0 && VAR_1->tv_usec < 15000) {
        FUNC_2(VAR_1, 0, sizeof(*VAR_1));
    }

    return VAR_1;
}
