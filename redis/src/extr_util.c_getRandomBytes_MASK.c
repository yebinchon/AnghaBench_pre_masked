
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timeval {long tv_sec; long tv_usec; } ;
typedef int seed ;
typedef long pid_t ;
typedef int counter ;
typedef int SHA1_CTX ;
typedef int FILE ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (unsigned char*,int,int,int *) ;
 long FUNC_6 () ;
 int FUNC_7 (struct timeval*,int *) ;
 int FUNC_8 (unsigned char*,unsigned char*,unsigned int) ;

void FUNC_9(unsigned char *VAR_0, size_t VAR_1) {

    static int VAR_2 = 0;
    static unsigned char VAR_3[20];
    static uint64_t VAR_4 = 0;

    if (!VAR_2) {




        FILE *VAR_5 = FUNC_4("/dev/urandom","r");
        if (VAR_5 == ((void*)0) || FUNC_5(VAR_3,sizeof(VAR_3),1,VAR_5) != 1) {


            for (unsigned int VAR_6 = 0; VAR_6 < sizeof(VAR_3); VAR_6++) {
                struct timeval VAR_7;
                FUNC_7(&VAR_7,((void*)0));
                pid_t VAR_8 = FUNC_6();
                VAR_3[VAR_6] = VAR_7.tv_sec ^ VAR_7.tv_usec ^ VAR_8 ^ (long)VAR_5;
            }
        } else {
            VAR_2 = 1;
        }
        if (VAR_5) FUNC_3(VAR_5);
    }

    while(VAR_1) {
        unsigned char VAR_9[20];
        SHA1_CTX VAR_10;
        unsigned int VAR_11 = VAR_1 > 20 ? 20 : VAR_1;

        FUNC_1(&VAR_10);
        FUNC_2(&VAR_10, VAR_3, sizeof(VAR_3));
        FUNC_2(&VAR_10, (unsigned char*)&VAR_4,sizeof(VAR_4));
        FUNC_0(VAR_9, &VAR_10);
        VAR_4++;

        FUNC_8(VAR_0,VAR_9,VAR_11);
        VAR_1 -= VAR_11;
        VAR_0 += VAR_11;
    }
}
