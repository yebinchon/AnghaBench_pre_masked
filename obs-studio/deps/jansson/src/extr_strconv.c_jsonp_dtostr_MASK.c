
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*,size_t,char*,int,double) ;
 char* FUNC_3 (char*,char) ;

int FUNC_4(char *VAR_0, size_t VAR_1, double VAR_2, int VAR_3)
{
    int VAR_4;
    char *VAR_5, *VAR_6;
    size_t VAR_7;

    if (VAR_3 == 0)
        VAR_3 = 17;

    VAR_4 = FUNC_2(VAR_0, VAR_1, "%.*g", VAR_3, VAR_2);
    if(VAR_4 < 0)
        return -1;

    VAR_7 = (size_t)VAR_4;
    if(VAR_7 >= VAR_1)
        return -1;







    if(FUNC_3(VAR_0, '.') == ((void*)0) &&
       FUNC_3(VAR_0, 'e') == ((void*)0))
    {
        if(VAR_7 + 3 >= VAR_1) {

            return -1;
        }
        VAR_0[VAR_7] = '.';
        VAR_0[VAR_7 + 1] = '0';
        VAR_0[VAR_7 + 2] = '\0';
        VAR_7 += 2;
    }



    VAR_5 = FUNC_3(VAR_0, 'e');
    if(VAR_5) {
        VAR_5++;
        VAR_6 = VAR_5 + 1;

        if(*VAR_5 == '-')
            VAR_5++;

        while(*VAR_6 == '0')
            VAR_6++;

        if(VAR_6 != VAR_5) {
            FUNC_1(VAR_5, VAR_6, VAR_7 - (size_t)(VAR_6 - VAR_0));
            VAR_7 -= (size_t)(VAR_6 - VAR_5);
        }
    }

    return (int)VAR_7;
}
