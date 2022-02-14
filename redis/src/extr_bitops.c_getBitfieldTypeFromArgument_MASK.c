
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
 scalar_t__ FUNC_1 (char*,int ,long long*) ;
 int FUNC_2 (char*) ;

int FUNC_3(client *VAR_2, robj *VAR_3, int *VAR_4, int *VAR_5) {
    char *VAR_6 = VAR_3->ptr;
    char *VAR_7 = "Invalid bitfield type. Use something like i16 u8. Note that u64 is not supported but i64 is.";
    long long VAR_8;

    if (VAR_6[0] == 'i') {
        *VAR_4 = 1;
    } else if (VAR_6[0] == 'u') {
        *VAR_4 = 0;
    } else {
        FUNC_0(VAR_2,VAR_7);
        return VAR_0;
    }

    if ((FUNC_1(VAR_6+1,FUNC_2(VAR_6+1),&VAR_8)) == 0 ||
        VAR_8 < 1 ||
        (*VAR_4 == 1 && VAR_8 > 64) ||
        (*VAR_4 == 0 && VAR_8 > 63))
    {
        FUNC_0(VAR_2,VAR_7);
        return VAR_0;
    }
    *VAR_5 = VAR_8;
    return VAR_1;
}
