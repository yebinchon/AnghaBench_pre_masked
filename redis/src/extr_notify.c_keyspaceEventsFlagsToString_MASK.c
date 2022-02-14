
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 () ;

sds FUNC_2(int VAR_13) {
    sds VAR_14;

    VAR_14 = FUNC_1();
    if ((VAR_13 & VAR_0) == VAR_0) {
        VAR_14 = FUNC_0(VAR_14,"A",1);
    } else {
        if (VAR_13 & VAR_3) VAR_14 = FUNC_0(VAR_14,"g",1);
        if (VAR_13 & VAR_11) VAR_14 = FUNC_0(VAR_14,"$",1);
        if (VAR_13 & VAR_8) VAR_14 = FUNC_0(VAR_14,"l",1);
        if (VAR_13 & VAR_9) VAR_14 = FUNC_0(VAR_14,"s",1);
        if (VAR_13 & VAR_4) VAR_14 = FUNC_0(VAR_14,"h",1);
        if (VAR_13 & VAR_12) VAR_14 = FUNC_0(VAR_14,"z",1);
        if (VAR_13 & VAR_2) VAR_14 = FUNC_0(VAR_14,"x",1);
        if (VAR_13 & VAR_1) VAR_14 = FUNC_0(VAR_14,"e",1);
        if (VAR_13 & VAR_10) VAR_14 = FUNC_0(VAR_14,"t",1);
        if (VAR_13 & VAR_7) VAR_14 = FUNC_0(VAR_14,"m",1);
    }
    if (VAR_13 & VAR_6) VAR_14 = FUNC_0(VAR_14,"K",1);
    if (VAR_13 & VAR_5) VAR_14 = FUNC_0(VAR_14,"E",1);
    return VAR_14;
}
