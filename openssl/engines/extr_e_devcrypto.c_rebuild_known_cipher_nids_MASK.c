
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nid; } ;
typedef int ENGINE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_3 (size_t) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_4(ENGINE *VAR_3)
{
    size_t VAR_4;

    for (VAR_4 = 0, VAR_2 = 0; VAR_4 < FUNC_2(VAR_0); VAR_4++) {
        if (FUNC_3(VAR_4))
            VAR_1[VAR_2++] = VAR_0[VAR_4].nid;
    }
    FUNC_1(VAR_3);
    FUNC_0(VAR_3);
}
