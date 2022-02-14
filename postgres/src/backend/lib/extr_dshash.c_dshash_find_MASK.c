
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int dshash_table_item ;
struct TYPE_10__ {int find_locked; int find_exclusively_locked; TYPE_1__* control; } ;
typedef TYPE_2__ dshash_table ;
typedef int dshash_hash ;
struct TYPE_9__ {scalar_t__ magic; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,size_t) ;
 int FUNC_7 (TYPE_2__*) ;
 int * FUNC_8 (TYPE_2__*,void const*,int ) ;
 int FUNC_9 (TYPE_2__*,void const*) ;

void *
FUNC_10(dshash_table *VAR_3, const void *VAR_4, bool VAR_5)
{
 dshash_hash VAR_6;
 size_t VAR_7;
 dshash_table_item *VAR_8;

 VAR_6 = FUNC_9(VAR_3, VAR_4);
 VAR_7 = FUNC_5(VAR_6);

 FUNC_0(VAR_3->control->magic == VAR_0);
 FUNC_0(!VAR_3->find_locked);

 FUNC_3(FUNC_6(VAR_3, VAR_7),
      VAR_5 ? VAR_1 : VAR_2);
 FUNC_7(VAR_3);


 VAR_8 = FUNC_8(VAR_3, VAR_4, FUNC_1(VAR_3, VAR_6));

 if (!VAR_8)
 {

  FUNC_4(FUNC_6(VAR_3, VAR_7));
  return ((void*)0);
 }
 else
 {

  VAR_3->find_locked = 1;
  VAR_3->find_exclusively_locked = VAR_5;
  return FUNC_2(VAR_8);
 }
}
