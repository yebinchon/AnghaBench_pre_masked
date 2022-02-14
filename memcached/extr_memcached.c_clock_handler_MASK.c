
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct timespec {scalar_t__ tv_sec; } ;
typedef scalar_t__ rel_time_t ;
struct TYPE_4__ {int sig_hup; int auth_file; } ;
struct TYPE_3__ {int curr_items; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct timespec*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,struct timeval*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,void (*) (int const,short const,void*),int ) ;
 int FUNC_7 (struct timeval*,int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static void FUNC_8(const int VAR_9, const short VAR_10, void *VAR_11) {
    struct timeval VAR_12 = {.tv_sec = 1, .tv_usec = 0};
    static bool VAR_13 = 0;

    if (VAR_13) {

        FUNC_5(&VAR_1);
    } else {
        VAR_13 = 1;
    }



    FUNC_0(VAR_8.curr_items);


    if (VAR_7.sig_hup) {
        VAR_7.sig_hup = 0;

        FUNC_1(VAR_7.auth_file);
    }

    FUNC_6(&VAR_1, FUNC_8, 0);
    FUNC_3(VAR_3, &VAR_1);
    FUNC_4(&VAR_1, &VAR_12);
    {
        struct timeval VAR_14;
        FUNC_7(&VAR_14, ((void*)0));
        VAR_2 = (rel_time_t) (VAR_14.tv_sec - VAR_6);
    }
}
