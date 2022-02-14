
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsstr_t ;
typedef char WCHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,double,int) ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int,char**) ;
 int FUNC_2 (double) ;
 int FUNC_3 (double,char*,int,int*) ;

__attribute__((used)) static inline jsstr_t *FUNC_4(double VAR_3, int VAR_4)
{
    WCHAR VAR_5[VAR_1];
    int VAR_6, VAR_7, VAR_8, VAR_9;
    BOOL VAR_10 = VAR_0;
    jsstr_t *VAR_11;
    WCHAR *VAR_12;

    FUNC_0("%lf %d\n", VAR_3, VAR_4);

    if(VAR_3 < 0) {
        VAR_10 = VAR_2;
        VAR_3 = -VAR_3;
    }

    if(VAR_3 >= 1)
        VAR_8 = FUNC_2(VAR_3)+VAR_4+2;
    else
        VAR_8 = VAR_4 ? VAR_4+1 : 2;
    if(VAR_8 > VAR_1)
        VAR_8 = VAR_1;

    FUNC_3(VAR_3, VAR_5, VAR_8, &VAR_6);
    VAR_6++;
    VAR_7 = 0;
    if(VAR_10)
        VAR_7++;
    if(VAR_6 > 0)
        VAR_7 += VAR_6;
    else
        VAR_7++;
    if(VAR_4)
        VAR_7 += VAR_4+1;

    VAR_11 = FUNC_1(VAR_7, &VAR_12);
    if(!VAR_11)
        return ((void*)0);

    VAR_7 = VAR_9 = 0;
    if(VAR_10)
        VAR_12[VAR_7++] = '-';
    if(VAR_6 > 0) {
        for(;VAR_9<VAR_8-1 && VAR_6; VAR_6--)
            VAR_12[VAR_7++] = VAR_5[VAR_9++];
    }else {
        VAR_12[VAR_7++] = '0';
    }
    for(; VAR_6>0; VAR_6--)
        VAR_12[VAR_7++] = '0';
    if(VAR_4) {
        VAR_12[VAR_7++] = '.';

        for(; VAR_6<0 && VAR_4; VAR_6++, VAR_4--)
            VAR_12[VAR_7++] = '0';
        for(; VAR_9<VAR_8-1 && VAR_4; VAR_4--)
            VAR_12[VAR_7++] = VAR_5[VAR_9++];
        for(; VAR_4; VAR_4--) {
            VAR_12[VAR_7++] = '0';
        }
    }
    VAR_12[VAR_7++] = 0;
    return VAR_11;
}
