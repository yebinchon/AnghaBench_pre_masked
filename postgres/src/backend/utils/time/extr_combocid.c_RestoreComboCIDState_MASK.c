
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmax; int cmin; } ;
typedef int CommandId ;
typedef TYPE_1__ ComboCidKeyData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;

void
FUNC_3(char *VAR_3)
{
 int VAR_4;
 ComboCidKeyData *VAR_5;
 int VAR_6;
 CommandId VAR_7;

 FUNC_0(!VAR_1 && !VAR_2);


 VAR_4 = *(int *) VAR_3;
 VAR_5 = (ComboCidKeyData *) (VAR_3 + sizeof(int));


 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 {
  VAR_7 = FUNC_1(VAR_5[VAR_6].cmin, VAR_5[VAR_6].cmax);


  if (VAR_7 != VAR_6)
   FUNC_2(VAR_0, "unexpected command ID while restoring combo CIDs");
 }
}
