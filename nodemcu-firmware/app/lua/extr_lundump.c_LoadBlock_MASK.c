
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t total; int Z; } ;
typedef TYPE_1__ LoadState ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (int ,void*,size_t) ;

__attribute__((used)) static void FUNC_2(LoadState* VAR_0, void* VAR_1, size_t VAR_2)
{
 size_t VAR_3=FUNC_1(VAR_0->Z,VAR_1,VAR_2);
 FUNC_0 (VAR_3!=0, "unexpected end");
 VAR_0->total+=VAR_2;
}
