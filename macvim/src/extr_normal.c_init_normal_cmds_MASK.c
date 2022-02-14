
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd_char; } ;


 scalar_t__ VAR_0 ;
 size_t* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*,size_t,int,int ) ;

void
FUNC_1()
{
    int VAR_5;


    for (VAR_5 = 0; VAR_5 < (int)VAR_0; ++VAR_5)
 VAR_1[VAR_5] = VAR_5;


    FUNC_0((void *)&VAR_1, (size_t)VAR_0, sizeof(short), VAR_3);


    for (VAR_5 = 0; VAR_5 < (int)VAR_0; ++VAR_5)
 if (VAR_5 != VAR_2[VAR_1[VAR_5]].cmd_char)
     break;
    VAR_4 = VAR_5 - 1;
}
