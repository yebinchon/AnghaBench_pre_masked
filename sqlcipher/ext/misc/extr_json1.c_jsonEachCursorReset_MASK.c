
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zRoot; scalar_t__ zJson; scalar_t__ eType; scalar_t__ iEnd; scalar_t__ i; scalar_t__ iRowid; int sParse; } ;
typedef TYPE_1__ JsonEachCursor ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(JsonEachCursor *VAR_0){
  FUNC_1(VAR_0->zJson);
  FUNC_1(VAR_0->zRoot);
  FUNC_0(&VAR_0->sParse);
  VAR_0->iRowid = 0;
  VAR_0->i = 0;
  VAR_0->iEnd = 0;
  VAR_0->eType = 0;
  VAR_0->zJson = 0;
  VAR_0->zRoot = 0;
}
