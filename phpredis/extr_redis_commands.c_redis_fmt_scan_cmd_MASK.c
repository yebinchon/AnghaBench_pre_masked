
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* c; int len; int member_0; } ;
typedef TYPE_1__ smart_string ;
typedef size_t REDIS_SCAN_TYPE ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,long) ;
 int FUNC_2 (TYPE_1__*,int,char*,int ) ;
 int FUNC_3 (char*) ;

int FUNC_4(char **VAR_1, REDIS_SCAN_TYPE VAR_2, char *VAR_3, int VAR_4,
                       long VAR_5, char *VAR_6, int VAR_7, long VAR_8)
{
    static char *VAR_9[] = {"SCAN","SSCAN","HSCAN","ZSCAN"};
    int VAR_10;
    smart_string VAR_11 = {0};


    VAR_10 = 1 + (VAR_2!=VAR_0) + (VAR_7>0?2:0) + (VAR_8>0?2:0);

    FUNC_2(&VAR_11, VAR_10, VAR_9[VAR_2], FUNC_3(VAR_9[VAR_2]));


    if (VAR_2 != VAR_0) {
        FUNC_0(&VAR_11, VAR_3, VAR_4);
    }


    FUNC_1(&VAR_11, VAR_5);


    if (VAR_8) {
        FUNC_0(&VAR_11,"COUNT",sizeof("COUNT")-1);
        FUNC_1(&VAR_11, VAR_8);
    }


    if (VAR_7) {
        FUNC_0(&VAR_11,"MATCH",sizeof("MATCH")-1);
        FUNC_0(&VAR_11,VAR_6,VAR_7);
    }


    *VAR_1 = VAR_11.c;
    return VAR_11.len;
}
