
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int numOfValues; int * Value; } ;
typedef TYPE_1__ Var ;
typedef int Sdb ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (char*,int,char*,unsigned int) ;

__attribute__((used)) static Sdb* FUNC_3(Var* VAR_0) {
 unsigned int VAR_1 = 0;
 char VAR_2[20];
 Sdb* VAR_3 = ((void*)0);
 if (VAR_0) {
  VAR_3 = FUNC_0 ();
  if (VAR_3) {
   for (; VAR_1 < VAR_0->numOfValues; VAR_1++) {
    FUNC_2 (VAR_2, 20, "%d", VAR_1);
    FUNC_1 (VAR_3, VAR_2, VAR_0->Value[VAR_1], 0);
   }
  }
 }
 return VAR_3;
}
