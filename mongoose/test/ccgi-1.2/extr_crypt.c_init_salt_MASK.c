
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
struct timeval {int dummy; } ;
typedef struct timeval pid_t ;
typedef int pid ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,unsigned int*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct timeval*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned char*,int ) ;
 int VAR_1 ;
 struct timeval FUNC_5 () ;
 int FUNC_6 (struct timeval*,int ) ;
 int FUNC_7 (unsigned char*,unsigned char*,int ) ;

__attribute__((used)) static void
FUNC_8(unsigned char *VAR_2) {
    EVP_MD_CTX VAR_3;
    unsigned char VAR_4[VAR_0];
    struct timeval VAR_5;
    pid_t VAR_6;
    unsigned int VAR_7;

    if (FUNC_4(VAR_2, VAR_1) == 1) {
        return;
    }
    FUNC_6(&VAR_5, 0);
    VAR_6 = FUNC_5();
    FUNC_1(&VAR_3, FUNC_3());
    FUNC_2(&VAR_3, &VAR_5, sizeof(VAR_5));
    FUNC_2(&VAR_3, &VAR_6, sizeof(VAR_6));
    FUNC_0(&VAR_3, VAR_4, &VAR_7);
    FUNC_7(VAR_2, VAR_4, VAR_1);
}
