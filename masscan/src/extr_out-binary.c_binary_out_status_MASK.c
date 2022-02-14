
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_2__ {size_t bytes_written; } ;
struct Output {TYPE_1__ rotate; } ;
typedef int FILE ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;



 int FUNC_0 (struct Output*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (unsigned char**,int,int,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct Output *VAR_3, FILE *VAR_4, time_t VAR_5,
    int VAR_6, unsigned VAR_7, unsigned VAR_8, unsigned VAR_9, unsigned VAR_10, unsigned VAR_11)
{
    unsigned char VAR_12[256];
    size_t VAR_13;

    FUNC_0(VAR_3);


    switch (VAR_6) {
    case 128:
        VAR_12[0] = VAR_2;
        break;
    case 129:
        VAR_12[0] = VAR_1;
        break;
    case 130:
        VAR_12[0] = VAR_0;
        break;
    default:
        return;
    }


    VAR_12[1] = 13;


    VAR_12[2] = (unsigned char)(VAR_5>>24);
    VAR_12[3] = (unsigned char)(VAR_5>>16);
    VAR_12[4] = (unsigned char)(VAR_5>> 8);
    VAR_12[5] = (unsigned char)(VAR_5>> 0);

    VAR_12[6] = (unsigned char)(VAR_7>>24);
    VAR_12[7] = (unsigned char)(VAR_7>>16);
    VAR_12[8] = (unsigned char)(VAR_7>> 8);
    VAR_12[9] = (unsigned char)(VAR_7>> 0);

    VAR_12[10] = (unsigned char)(VAR_8);

    VAR_12[11] = (unsigned char)(VAR_9>>8);
    VAR_12[12] = (unsigned char)(VAR_9>>0);

    VAR_12[13] = (unsigned char)VAR_10;
    VAR_12[14] = (unsigned char)VAR_11;



    VAR_13 = FUNC_2(&VAR_12, 1, 15, VAR_4);
    if (VAR_13 != 15) {
        FUNC_3("output");
        FUNC_1(1);
    }
    VAR_3->rotate.bytes_written += VAR_13;
}
