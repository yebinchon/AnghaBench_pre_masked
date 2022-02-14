
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ URL_SCHEME ;
struct TYPE_3__ {scalar_t__ scheme; scalar_t__ port; } ;
typedef size_t DWORD ;
typedef int BOOL ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static BOOL FUNC_1(URL_SCHEME VAR_3, DWORD VAR_4) {
    DWORD VAR_5;

    for(VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); ++VAR_5) {
        if(VAR_2[VAR_5].scheme == VAR_3 && VAR_2[VAR_5].port)
            return VAR_1;
    }

    return VAR_0;
}
