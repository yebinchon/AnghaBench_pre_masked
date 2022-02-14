
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_5__ {unsigned long long ms; unsigned long long seq; } ;
typedef TYPE_1__ streamID ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_2__ robj ;
typedef int client ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,unsigned long long*) ;

int FUNC_5(client *VAR_3, robj *VAR_4, streamID *VAR_5, uint64_t VAR_6, int VAR_7) {
    char VAR_8[128];
    if (FUNC_2(VAR_4->ptr) > sizeof(VAR_8)-1) goto invalid;
    FUNC_1(VAR_8,VAR_4->ptr,FUNC_2(VAR_4->ptr)+1);

    if (VAR_7 && (VAR_8[0] == '-' || VAR_8[0] == '+') && VAR_8[1] == '\0')
        goto invalid;


    if (VAR_8[0] == '-' && VAR_8[1] == '\0') {
        VAR_5->ms = 0;
        VAR_5->seq = 0;
        return VAR_1;
    } else if (VAR_8[0] == '+' && VAR_8[1] == '\0') {
        VAR_5->ms = VAR_2;
        VAR_5->seq = VAR_2;
        return VAR_1;
    }


    char *VAR_9 = FUNC_3(VAR_8,'-');
    if (VAR_9) *VAR_9 = '\0';
    unsigned long long VAR_10, VAR_11;
    if (FUNC_4(VAR_8,&VAR_10) == 0) goto invalid;
    if (VAR_9 && FUNC_4(VAR_9+1,&VAR_11) == 0) goto invalid;
    if (!VAR_9) VAR_11 = VAR_6;
    VAR_5->ms = VAR_10;
    VAR_5->seq = VAR_11;
    return VAR_1;

invalid:
    if (VAR_3) FUNC_0(VAR_3,"Invalid stream ID specified as stream "
                           "command argument");
    return VAR_0;
}
