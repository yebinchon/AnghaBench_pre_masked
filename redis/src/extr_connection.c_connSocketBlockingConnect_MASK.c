
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; void* state; int last_errno; } ;
typedef TYPE_1__ connection ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,long long) ;
 int FUNC_1 (int *,char const*,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(connection *VAR_7, const char *VAR_8, int VAR_9, long long VAR_10) {
    int VAR_11 = FUNC_1(((void*)0),VAR_8,VAR_9);
    if (VAR_11 == -1) {
        VAR_7->state = VAR_2;
        VAR_7->last_errno = VAR_6;
        return VAR_3;
    }

    if ((FUNC_0(VAR_11, VAR_0, VAR_10) & VAR_0) == 0) {
        VAR_7->state = VAR_2;
        VAR_7->last_errno = VAR_5;
    }

    VAR_7->fd = VAR_11;
    VAR_7->state = VAR_1;
    return VAR_4;
}
