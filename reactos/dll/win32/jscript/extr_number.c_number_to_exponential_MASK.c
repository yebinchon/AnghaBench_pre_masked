
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsstr_t ;
typedef char WCHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int,char**) ;
 int FUNC_1 (double,char*,int,int*) ;

__attribute__((used)) static inline jsstr_t *FUNC_2(double VAR_3, int VAR_4)
{
    WCHAR VAR_5[VAR_1], *VAR_6;
    int VAR_7, VAR_8, VAR_9, VAR_10 = 1;
    BOOL VAR_11 = VAR_0;
    jsstr_t *VAR_12;
    WCHAR *VAR_13;

    if(VAR_3 < 0) {
        VAR_11 = VAR_2;
        VAR_3 = -VAR_3;
    }

    VAR_9 = VAR_4+2;
    if(VAR_9<2 || VAR_9>VAR_1)
        VAR_9 = VAR_1;
    FUNC_1(VAR_3, VAR_5, VAR_9, &VAR_7);
    VAR_9--;
    if(VAR_4 == -1)
        for(; VAR_9>1 && VAR_5[VAR_9-1]=='0'; VAR_9--)
            VAR_5[VAR_9-1] = 0;

    VAR_8 = 10;
    while(VAR_7>=VAR_8 || VAR_7<=-VAR_8) {
        VAR_8 *= 10;
        VAR_10++;
    }

    if(VAR_9 == 1)
        VAR_8 = VAR_9+2+VAR_10;
    else if(VAR_4 == -1)
        VAR_8 = VAR_9+3+VAR_10;
    else
        VAR_8 = VAR_4+4+VAR_10;
    if(VAR_11)
        VAR_8++;

    VAR_12 = FUNC_0(VAR_8, &VAR_13);
    if(!VAR_12)
        return ((void*)0);

    VAR_8 = 0;
    VAR_6 = VAR_5;
    if(VAR_11)
        VAR_13[VAR_8++] = '-';
    VAR_13[VAR_8++] = *VAR_6++;
    if(VAR_9 != 1) {
        VAR_13[VAR_8++] = '.';
        while(*VAR_6)
            VAR_13[VAR_8++] = *VAR_6++;
        for(; VAR_4>VAR_9-1; VAR_4--)
            VAR_13[VAR_8++] = '0';
    }
    VAR_13[VAR_8++] = 'e';
    if(VAR_7 >= 0) {
        VAR_13[VAR_8++] = '+';
    }else {
        VAR_13[VAR_8++] = '-';
        VAR_7 = -VAR_7;
    }
    VAR_8 += VAR_10;
    do {
        VAR_13[--VAR_8] = '0'+VAR_7%10;
        VAR_7 /= 10;
    }while(VAR_7>0);
    VAR_8 += VAR_10;
    VAR_13[VAR_8] = 0;

    return VAR_12;
}
