
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int ULONGLONG ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (double) ;
 int FUNC_3 (char*,char*,int) ;
 double FUNC_4 (int,int) ;

__attribute__((used)) static inline void FUNC_5(double VAR_1, WCHAR *VAR_2, int VAR_3, int *VAR_4)
{
    ULONGLONG VAR_5;
    int VAR_6;


    FUNC_0(VAR_3>=2 && VAR_3<=VAR_0 && VAR_1>=0);

    if(VAR_1 == 0)
        *VAR_4 = 0;
    else
        *VAR_4 = FUNC_1(FUNC_2(VAR_1));
    VAR_5 = VAR_1*FUNC_4(10, VAR_3-*VAR_4-1);

    if(VAR_5%10 >= 5)
        VAR_5 = VAR_5/10+1;
    else
        VAR_5 /= 10;

    VAR_2[VAR_3-1] = 0;
    for(VAR_6=VAR_3-2; VAR_6>=0; VAR_6--) {
        VAR_2[VAR_6] = '0'+VAR_5%10;
        VAR_5 /= 10;
    }


    if(VAR_5) {
        (*VAR_4)++;
        FUNC_3(VAR_2+1, VAR_2, VAR_3-2);
        VAR_2[0] = '0'+VAR_5;
    }else if(VAR_2[0]=='0' && VAR_2[1]>='1' && VAR_2[1]<='9') {
        (*VAR_4)--;
        FUNC_3(VAR_2, VAR_2+1, VAR_3-2);
        VAR_2[VAR_3-2] = '0';
    }
}
