
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef size_t UINT ;
struct TYPE_3__ {scalar_t__ Status; scalar_t__ Events; } ;
typedef TYPE_1__* PAFD_HANDLE ;



__attribute__((used)) static VOID FUNC_0( PAFD_HANDLE VAR_0,
                            UINT VAR_1 ) {
    UINT VAR_2;

    for( VAR_2 = 0; VAR_2 < VAR_1; VAR_2++ ) {
        VAR_0[VAR_2].Events = VAR_0[VAR_2].Status;
        VAR_0[VAR_2].Status = 0;
    }
}
