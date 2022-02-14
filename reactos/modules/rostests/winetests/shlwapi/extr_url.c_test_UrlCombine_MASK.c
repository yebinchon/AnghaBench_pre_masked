
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int todo; int expecturl; int expectret; int flags; int url2; int url1; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
    unsigned int VAR_1;
    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
        FUNC_1(VAR_0[VAR_1].url1, VAR_0[VAR_1].url2, VAR_0[VAR_1].flags,
                         VAR_0[VAR_1].expectret, VAR_0[VAR_1].expecturl, VAR_0[VAR_1].todo);
    }
}
