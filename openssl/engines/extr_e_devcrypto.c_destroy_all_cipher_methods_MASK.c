
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nid; } ;
struct TYPE_4__ {int * driver_name; } ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void)
{
    size_t VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_0); VAR_2++) {
        FUNC_2(VAR_0[VAR_2].nid);
        FUNC_0(VAR_1[VAR_2].driver_name);
        VAR_1[VAR_2].driver_name = ((void*)0);
    }
}
