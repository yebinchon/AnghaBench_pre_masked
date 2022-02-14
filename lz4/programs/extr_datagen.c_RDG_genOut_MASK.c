
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int litDistribTable ;
typedef unsigned long long U64 ;
typedef int BYTE ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,double) ;
 int FUNC_1 (int *,int,int,double,int ,unsigned int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,size_t,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int VAR_2 ;

void FUNC_5(unsigned long long VAR_3, double VAR_4, double VAR_5, unsigned VAR_6)
{
    BYTE VAR_7[VAR_1 + VAR_0];
    U64 VAR_8 = 0;
    size_t VAR_9 = VAR_0;
    litDistribTable VAR_10;


    if (VAR_5==0.0) VAR_5 = VAR_4 / 4.5;
    FUNC_0(VAR_10, VAR_5);
    FUNC_2(VAR_2);


    FUNC_1(VAR_7, VAR_1, 0, VAR_4, VAR_10, &VAR_6);


    while (VAR_8 < VAR_3) {
        FUNC_1(VAR_7, VAR_1+VAR_0, VAR_1, VAR_4, VAR_10, &VAR_6);
        if (VAR_3-VAR_8 < VAR_0) VAR_9 = (size_t)(VAR_3-VAR_8);
        VAR_8 += VAR_9;
        FUNC_3(VAR_7, 1, VAR_9, VAR_2);

        FUNC_4(VAR_7, VAR_7 + VAR_0, VAR_1);
    }
}
