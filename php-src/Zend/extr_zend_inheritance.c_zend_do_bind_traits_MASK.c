
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ num_traits; int ce_flags; int name; TYPE_1__* trait_names; } ;
typedef TYPE_2__ zend_class_entry ;
typedef size_t uint32_t ;
struct TYPE_20__ {int lc_name; int name; } ;
typedef TYPE_2__ HashTable ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__**) ;
 TYPE_2__** FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__**) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__**,TYPE_2__**,TYPE_2__**) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__**) ;
 int FUNC_8 (int ,char*,int ,int ) ;
 TYPE_2__* FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (TYPE_2__*,TYPE_2__**,TYPE_2__***,TYPE_2__***) ;

__attribute__((used)) static void FUNC_11(zend_class_entry *VAR_3)
{
 HashTable **VAR_4;
 zend_class_entry **VAR_5;
 zend_class_entry **VAR_6, *VAR_7;
 uint32_t VAR_8, VAR_9;

 FUNC_1(VAR_3->num_traits > 0);

 VAR_6 = FUNC_4(sizeof(zend_class_entry*) * VAR_3->num_traits);

 for (VAR_8 = 0; VAR_8 < VAR_3->num_traits; VAR_8++) {
  VAR_7 = FUNC_9(VAR_3->trait_names[VAR_8].name,
   VAR_3->trait_names[VAR_8].lc_name, VAR_2);
  if (FUNC_0(VAR_7 == ((void*)0))) {
   return;
  }
  if (FUNC_0(!(VAR_7->ce_flags & VAR_1))) {
   FUNC_8(VAR_0, "%s cannot use %s - it is not a trait", FUNC_2(VAR_3->name), FUNC_2(VAR_7->name));
   return;
  }
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
   if (VAR_6[VAR_9] == VAR_7) {

    VAR_7 = ((void*)0);
    break;
   }
  }
  VAR_6[VAR_8] = VAR_7;
 }


 FUNC_10(VAR_3, VAR_6, &VAR_4, &VAR_5);


 FUNC_6(VAR_3, VAR_6, VAR_4, VAR_5);


 FUNC_5(VAR_3, VAR_5);

 if (VAR_5) {
  FUNC_3(VAR_5);
 }

 if (VAR_4) {
  FUNC_3(VAR_4);
 }


 FUNC_7(VAR_3, VAR_6);

 FUNC_3(VAR_6);
}
