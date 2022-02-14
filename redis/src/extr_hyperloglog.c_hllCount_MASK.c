
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct hllhdr {scalar_t__ encoding; int registers; } ;
typedef int sds ;


 double VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 double VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int*) ;
 double FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__,int*,int*) ;
 double FUNC_4 (double) ;
 double FUNC_5 (double) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*) ;

uint64_t FUNC_8(struct hllhdr *VAR_7, int *VAR_8) {
    double VAR_9 = VAR_5;
    double VAR_10;
    int VAR_11;





    int VAR_12[64] = {0};


    if (VAR_7->encoding == VAR_1) {
        FUNC_0(VAR_7->registers,VAR_12);
    } else if (VAR_7->encoding == VAR_6) {
        FUNC_3(VAR_7->registers,
                         FUNC_6((sds)VAR_7)-VAR_2,VAR_8,VAR_12);
    } else if (VAR_7->encoding == VAR_4) {
        FUNC_1(VAR_7->registers,VAR_12);
    } else {
        FUNC_7("Unknown HyperLogLog encoding in hllCount()");
    }




    double VAR_13 = VAR_9 * FUNC_4((VAR_9-VAR_12[VAR_3+1])/(double)VAR_9);
    for (VAR_11 = VAR_3; VAR_11 >= 1; --VAR_11) {
        VAR_13 += VAR_12[VAR_11];
        VAR_13 *= 0.5;
    }
    VAR_13 += VAR_9 * FUNC_2(VAR_12[0]/(double)VAR_9);
    VAR_10 = FUNC_5(VAR_0*VAR_9*VAR_9/VAR_13);

    return (uint64_t) VAR_10;
}
