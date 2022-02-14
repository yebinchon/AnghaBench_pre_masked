
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flag; long long int64; double double_; } ;
struct mpv_node {TYPE_1__ u; void* format; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (char**) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (double) ;
 int FUNC_2 (void*,struct mpv_node*,char**) ;
 int FUNC_3 (void*,struct mpv_node*,char**,int) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 double FUNC_5 (char*,char**) ;
 long long FUNC_6 (char*,char**,int ) ;

int FUNC_7(void *VAR_5, struct mpv_node *VAR_6, char **VAR_7, int VAR_8)
{
    VAR_8 -= 1;
    if (VAR_8 < 0)
        return -1;

    FUNC_0(VAR_7);

    char VAR_9 = **VAR_7;
    if (!VAR_9)
        return -1;
    if (VAR_9 == 'n' && FUNC_4(*VAR_7, "null", 4) == 0) {
        *VAR_7 += 4;
        VAR_6->format = VAR_3;
        return 0;
    } else if (VAR_9 == 't' && FUNC_4(*VAR_7, "true", 4) == 0) {
        *VAR_7 += 4;
        VAR_6->format = VAR_1;
        VAR_6->u.flag = 1;
        return 0;
    } else if (VAR_9 == 'f' && FUNC_4(*VAR_7, "false", 5) == 0) {
        *VAR_7 += 5;
        VAR_6->format = VAR_1;
        VAR_6->u.flag = 0;
        return 0;
    } else if (VAR_9 == '"') {
        return FUNC_2(VAR_5, VAR_6, VAR_7);
    } else if (VAR_9 == '[' || VAR_9 == '{') {
        return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8);
    } else if (VAR_9 == '-' || (VAR_9 >= '0' && VAR_9 <= '9')) {


        char *VAR_10 = *VAR_7, *VAR_11 = *VAR_7;
        VAR_4 = 0;
        long long int VAR_12 = FUNC_6(*VAR_7, &VAR_10, 0);
        if (VAR_4)
            VAR_10 = *VAR_7;
        VAR_4 = 0;
        double VAR_13 = FUNC_5(*VAR_7, &VAR_11);
        if (VAR_4)
            VAR_11 = *VAR_7;
        if (VAR_10 >= VAR_11) {
            *VAR_7 = VAR_10;
            VAR_6->format = VAR_2;
            VAR_6->u.int64 = VAR_12;
            return 0;
        }
        if (VAR_11 > *VAR_7 && FUNC_1(VAR_13)) {
            *VAR_7 = VAR_11;
            VAR_6->format = VAR_0;
            VAR_6->u.double_ = VAR_13;
            return 0;
        }
        return -1;
    }
    return -1;
}
