
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* name; void* catId; int objType; } ;
typedef TYPE_1__ DumpableObject ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (char*) ;

__attribute__((used)) static DumpableObject *
FUNC_3(void)
{
 DumpableObject *VAR_3;

 VAR_3 = (DumpableObject *) FUNC_1(2 * sizeof(DumpableObject));

 VAR_3[0].objType = VAR_1;
 VAR_3[0].catId = VAR_2;
 FUNC_0(VAR_3 + 0);
 VAR_3[0].name = FUNC_2("PRE-DATA BOUNDARY");

 VAR_3[1].objType = VAR_0;
 VAR_3[1].catId = VAR_2;
 FUNC_0(VAR_3 + 1);
 VAR_3[1].name = FUNC_2("POST-DATA BOUNDARY");

 return VAR_3;
}
