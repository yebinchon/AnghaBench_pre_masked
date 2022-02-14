
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int storage_number ;
typedef double calculated_number ;


 int VAR_0 ;
 int FUNC_0 (double,int ) ;
 double FUNC_1 (int ) ;

calculated_number FUNC_2(calculated_number VAR_1) {
    calculated_number VAR_2 = 1, VAR_3;

    do {
        VAR_3 = VAR_1;
        VAR_1 /= 2.0;
        storage_number VAR_4 = FUNC_0(VAR_1, VAR_0);
        VAR_2 = FUNC_1(VAR_4);
    } while(VAR_2 != 0.0 && VAR_2 != VAR_3);

    return VAR_3;
}
