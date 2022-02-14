
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * sizes; int acxt; TYPE_1__* aio; int astate; int mcxt; } ;
struct TYPE_4__ {int element_type; int element_typmod; int element_info; } ;
typedef TYPE_2__ PopulateArrayContext ;
typedef int JsValue ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int *,int ,int ,int *,int*) ;

__attribute__((used)) static void
FUNC_4(PopulateArrayContext *VAR_0, int VAR_1, JsValue *VAR_2)
{
 Datum VAR_3;
 bool VAR_4;


 VAR_3 = FUNC_3(VAR_0->aio->element_info,
         VAR_0->aio->element_type,
         VAR_0->aio->element_typmod,
         ((void*)0), VAR_0->mcxt, FUNC_1(((void*)0)),
         VAR_2, &VAR_4);

 FUNC_2(VAR_0->astate, VAR_3, VAR_4,
      VAR_0->aio->element_type, VAR_0->acxt);

 FUNC_0(VAR_1 > 0);
 VAR_0->sizes[VAR_1 - 1]++;
}
