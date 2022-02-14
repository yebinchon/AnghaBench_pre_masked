
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int) ;
 unsigned long FUNC_3 (int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static unsigned int FUNC_4 (unsigned int VAR_3, unsigned int VAR_4) {
    unsigned long VAR_5;


    FUNC_2(VAR_0,0xFFFFFFFF);


    FUNC_1(VAR_0,VAR_3,VAR_4);


    do {
        VAR_5 = FUNC_3(VAR_0);
        VAR_5 = (VAR_5 & (VAR_1 | VAR_2));
    } while (!VAR_5);


    if (VAR_5 & VAR_2) {

        FUNC_0(VAR_0);
        return 1;
    }
    else {
        return 0;
    }
}
