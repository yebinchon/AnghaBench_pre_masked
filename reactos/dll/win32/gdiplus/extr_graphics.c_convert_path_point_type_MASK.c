
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;


__attribute__((used)) static BYTE FUNC_1(BYTE VAR_6)
{
    BYTE VAR_7;

    switch(VAR_6 & VAR_5){
        case 130:
            VAR_7 = VAR_0;
            break;
        case 129:
            VAR_7 = VAR_2;
            break;
        case 128:
            VAR_7 = VAR_3;
            break;
        default:
            FUNC_0("Bad point type\n");
            return 0;
    }

    if(VAR_6 & VAR_4)
        VAR_7 |= VAR_1;

    return VAR_7;
}
