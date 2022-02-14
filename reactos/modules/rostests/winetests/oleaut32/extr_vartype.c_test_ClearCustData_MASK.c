
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int varValue; } ;
struct TYPE_4__ {int cCustData; TYPE_2__* prgCustData; } ;
typedef int CUSTDATAITEM ;
typedef TYPE_1__ CUSTDATA ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
  CUSTDATA VAR_1;
  unsigned VAR_2;

  VAR_1.cCustData = VAR_0;
  VAR_1.prgCustData = FUNC_1( sizeof(CUSTDATAITEM) * VAR_0 );
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    FUNC_2(&VAR_1.prgCustData[VAR_2].varValue);
  FUNC_0(&VAR_1);
  FUNC_3(!VAR_1.cCustData && !VAR_1.prgCustData, "ClearCustData didn't clear fields!\n");
}
