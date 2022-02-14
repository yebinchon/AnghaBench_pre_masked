
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
struct timeval {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ,int ,struct timeval*,int) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct timeval*,int) ;

__attribute__((used)) static int FUNC_6(int VAR_8) {
        struct timeval VAR_9;
        int VAR_10;

        VAR_10 = FUNC_4(VAR_0, VAR_8|VAR_2, 0);
        if (VAR_10 < 0)
                return -VAR_7;

        VAR_10 = FUNC_1(VAR_10);
        (void) FUNC_0(VAR_10, VAR_1);



        if (FUNC_2() == 1)
                FUNC_5(&VAR_9, 10 * VAR_5);
        else
                FUNC_5(&VAR_9, 10 * VAR_6);
        (void) FUNC_3(VAR_10, VAR_3, VAR_4, &VAR_9, sizeof(VAR_9));

        return VAR_10;
}
