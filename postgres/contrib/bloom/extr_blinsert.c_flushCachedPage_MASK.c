
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef int Relation ;
typedef int Page ;
typedef int GenericXLogState ;
typedef int Buffer ;
typedef TYPE_2__ BloomBuildState ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(Relation VAR_2, BloomBuildState *VAR_3)
{
 Page VAR_4;
 Buffer VAR_5 = FUNC_0(VAR_2);
 GenericXLogState *VAR_6;

 VAR_6 = FUNC_3(VAR_2);
 VAR_4 = FUNC_2(VAR_6, VAR_5, VAR_1);
 FUNC_5(VAR_4, VAR_3->data.data, VAR_0);
 FUNC_1(VAR_6);
 FUNC_4(VAR_5);
}
