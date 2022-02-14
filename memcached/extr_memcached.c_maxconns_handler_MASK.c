
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,struct timeval*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void (*) (int const,short const,void*),int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(const int VAR_3, const short VAR_4, void *VAR_5) {
    struct timeval VAR_6 = {.tv_sec = 0, .tv_usec = 10000};

    if (VAR_3 == -42 || VAR_0 == 0) {

        FUNC_4(&VAR_2, FUNC_5, 0);
        FUNC_1(VAR_1, &VAR_2);
        FUNC_2(&VAR_2, &VAR_6);
    } else {
        FUNC_3(&VAR_2);
        FUNC_0(1);
    }
}
