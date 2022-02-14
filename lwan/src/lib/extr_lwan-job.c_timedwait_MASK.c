
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int member_1; int member_0; } ;


 int FUNC_0 (struct timeval*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,struct timespec*) ;

__attribute__((used)) static void
FUNC_2(bool VAR_2)
{
    static int VAR_3 = 1;
    struct timeval VAR_4;

    if (VAR_2)
        VAR_3 = 1;
    else if (VAR_3 <= 15)
        VAR_3++;

    FUNC_0(&VAR_4, ((void*)0));

    struct timespec VAR_5 = { VAR_4.tv_sec + VAR_3, VAR_4.tv_usec * 1000 };
    FUNC_1(&VAR_0, &VAR_1, &VAR_5);
}
