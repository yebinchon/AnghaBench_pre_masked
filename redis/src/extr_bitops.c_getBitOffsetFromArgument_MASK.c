
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; } ;
typedef TYPE_1__ robj ;
typedef int client ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 size_t FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,size_t,long long*) ;

int FUNC_3(client *VAR_2, robj *VAR_3, size_t *VAR_4, int VAR_5, int VAR_6) {
    long long VAR_7;
    char *VAR_8 = "bit offset is not an integer or out of range";
    char *VAR_9 = VAR_3->ptr;
    size_t VAR_10 = FUNC_1(VAR_9);
    int VAR_11 = 0;


    if (VAR_9[0] == '#' && VAR_5 && VAR_6 > 0) VAR_11 = 1;

    if (FUNC_2(VAR_9+VAR_11,VAR_10-VAR_11,&VAR_7) == 0) {
        FUNC_0(VAR_2,VAR_8);
        return VAR_0;
    }


    if (VAR_11) VAR_7 *= VAR_6;


    if ((VAR_7 < 0) || ((unsigned long long)VAR_7 >> 3) >= (512*1024*1024))
    {
        FUNC_0(VAR_2,VAR_8);
        return VAR_0;
    }

    *VAR_4 = (size_t)VAR_7;
    return VAR_1;
}
