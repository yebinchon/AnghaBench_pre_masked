
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ in_use; } ;
struct TYPE_3__ {int * code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int * VAR_9 ;
 int * FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1()
{
    int VAR_10;
    int VAR_11 = 0;
    VAR_9[VAR_11] = VAR_3;

    for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10)
 if (FUNC_0(VAR_9, VAR_8[VAR_10].code[0]) == ((void*)0))
 {
     VAR_9[VAR_11++] = VAR_8[VAR_10].code[0];
     VAR_9[VAR_11] = VAR_3;
 }

    VAR_6 = VAR_2;
}
