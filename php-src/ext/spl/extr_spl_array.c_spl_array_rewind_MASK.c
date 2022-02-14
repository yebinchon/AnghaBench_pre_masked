
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ ht_iter; } ;
typedef TYPE_1__ spl_array_object ;
typedef int HashTable ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(spl_array_object *VAR_0)
{
 HashTable *VAR_1 = FUNC_0(VAR_0);

 if (VAR_0->ht_iter == (uint32_t)-1) {
  FUNC_1(VAR_1, VAR_0);
 } else {
  FUNC_3(VAR_1, FUNC_1(VAR_1, VAR_0));
  FUNC_2(VAR_0, VAR_1);
 }
}
