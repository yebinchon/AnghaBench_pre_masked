
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int __int64 ;
struct TYPE_3__ {int QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int ,int *,int *,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int * VAR_6 ;

int FUNC_2(__int64 VAR_7) {
    if (VAR_6 == ((void*)0)) {
        VAR_5 = VAR_0;
        return -1;
    }
    if (VAR_7 < 0 || VAR_7 > VAR_3 / 10) {
        VAR_5 = VAR_1;
        return -1;
    }

    LARGE_INTEGER VAR_8;
    VAR_8.QuadPart = -10 * VAR_7;
    if (FUNC_0(VAR_6, &VAR_8, 0, ((void*)0), ((void*)0), 0) == 0) {
        VAR_5 = VAR_1;
        return -1;
    }
    if (FUNC_1(VAR_6, VAR_2) != VAR_4) {
        VAR_5 = VAR_0;
        return -1;
    }
    return 0;
}
