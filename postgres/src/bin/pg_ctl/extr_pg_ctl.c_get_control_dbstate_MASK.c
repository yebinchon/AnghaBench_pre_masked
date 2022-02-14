
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
typedef int DBState ;
typedef TYPE_1__ ControlFileData ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int ,int*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static DBState
FUNC_5(void)
{
 DBState VAR_2;
 bool VAR_3;
 ControlFileData *VAR_4 = FUNC_2(VAR_0, &VAR_3);

 if (!VAR_3)
 {
  FUNC_4(FUNC_0("%s: control file appears to be corrupt\n"), VAR_1);
  FUNC_1(1);
 }

 VAR_2 = VAR_4->state;
 FUNC_3(VAR_4);
 return VAR_2;
}
