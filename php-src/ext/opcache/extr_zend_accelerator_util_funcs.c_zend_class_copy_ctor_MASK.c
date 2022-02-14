
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
struct TYPE_10__ {int num_excludes; } ;
typedef TYPE_1__ zend_trait_precedence ;
typedef TYPE_1__ zend_trait_alias ;
typedef int zend_string ;
typedef TYPE_1__ zend_class_name ;
struct TYPE_11__ {int refcount; int ce_flags; int default_properties_count; int default_static_members_count; int num_interfaces; int num_traits; TYPE_1__** trait_precedences; TYPE_1__** trait_aliases; TYPE_1__* trait_names; struct TYPE_11__** interfaces; TYPE_1__* interface_names; struct TYPE_11__** properties_info_table; int constants_table; int properties_info; int * default_static_members_table; int static_members_table; struct TYPE_11__* parent; int function_table; int * default_properties_table; } ;
typedef TYPE_4__ zend_class_entry ;
typedef size_t uint32_t ;


 void* FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int **) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(zend_class_entry **VAR_14)
{
 zend_class_entry *VAR_15 = *VAR_14;
 zval *VAR_16, *VAR_17, *VAR_18;

 *VAR_14 = VAR_15 = FUNC_0(VAR_15);
 VAR_15->refcount = 1;

 if ((VAR_15->ce_flags & VAR_0) && FUNC_1(VAR_15->parent)) {
  VAR_15->parent = FUNC_0(VAR_15->parent);
 }

 if (VAR_15->default_properties_table) {
  VAR_17 = FUNC_6(sizeof(zval) * VAR_15->default_properties_count);
  VAR_16 = VAR_15->default_properties_table;
  VAR_18 = VAR_16 + VAR_15->default_properties_count;
  VAR_15->default_properties_table = VAR_17;
  for (; VAR_16 != VAR_18; VAR_16++, VAR_17++) {
   FUNC_4(VAR_17, VAR_16);
  }
 }

 FUNC_9(&VAR_15->function_table);


 if (VAR_15->default_static_members_table) {
  int VAR_19, VAR_20;
  zend_class_entry *VAR_21 = !(VAR_15->ce_flags & VAR_0) ? ((void*)0) : VAR_15->parent;

  VAR_17 = FUNC_6(sizeof(zval) * VAR_15->default_static_members_count);
  VAR_16 = VAR_15->default_static_members_table;
  VAR_15->default_static_members_table = VAR_17;
  VAR_19 = VAR_15->default_static_members_count - 1;


  VAR_20 = VAR_21 ? VAR_21->default_static_members_count : 0;
  for (; VAR_19 >= VAR_20; VAR_19--) {
   zval *VAR_22 = &VAR_17[VAR_19];
   FUNC_3(VAR_22, &VAR_16[VAR_19]);
  }


  while (VAR_21 && VAR_21->default_static_members_table) {
   VAR_20 = VAR_21->parent ? VAR_21->parent->default_static_members_count : 0;
   for (; VAR_19 >= VAR_20; VAR_19--) {
    zval *VAR_23 = &VAR_17[VAR_19];
    FUNC_5(VAR_23, &VAR_21->default_static_members_table[VAR_19]);
   }

   VAR_21 = VAR_21->parent;
  }
 }
 FUNC_2(VAR_15->static_members_table, &VAR_15->default_static_members_table);


 FUNC_10(&VAR_15->properties_info);


 FUNC_8(&VAR_15->constants_table);

 if (VAR_15->properties_info_table) {
  int VAR_24;
  VAR_15->properties_info_table = FUNC_0(*VAR_15->properties_info_table);
  for (VAR_24 = 0; VAR_24 < VAR_15->default_properties_count; VAR_24++) {
   if (FUNC_1(VAR_15->properties_info_table[VAR_24])) {
    VAR_15->properties_info_table[VAR_24] = FUNC_0(VAR_15->properties_info_table[VAR_24]);
   }
  }
 }

 if (VAR_15->num_interfaces) {
  zend_class_name *VAR_25;

  if (!(VAR_15->ce_flags & VAR_0)) {
   VAR_25 = FUNC_6(sizeof(zend_class_name) * VAR_15->num_interfaces);
   FUNC_7(VAR_25, VAR_15->interface_names, sizeof(zend_class_name) * VAR_15->num_interfaces);
   VAR_15->interface_names = VAR_25;
  } else {
   zend_class_entry **VAR_26 = FUNC_6(sizeof(zend_class_entry*) * VAR_15->num_interfaces);
   uint32_t VAR_27;

   for (VAR_27 = 0; VAR_27 < VAR_15->num_interfaces; VAR_27++) {
    if (FUNC_1(VAR_15->interfaces[VAR_27])) {
     VAR_26[VAR_27] = FUNC_0(VAR_15->interfaces[VAR_27]);
    } else {
     VAR_26[VAR_27] = VAR_15->interfaces[VAR_27];
    }
   }
   VAR_15->interfaces = VAR_26;
  }
 }

 FUNC_11(VAR_10);
 FUNC_11(VAR_11);
 FUNC_11(VAR_9);
 FUNC_11(VAR_4);
 FUNC_11(VAR_6);
 FUNC_11(VAR_1);

 FUNC_11(VAR_12);
 FUNC_11(VAR_13);
 FUNC_11(VAR_5);
 FUNC_11(VAR_8);

 FUNC_11(VAR_7);


 FUNC_11(VAR_2);
 FUNC_11(VAR_3);


 if (VAR_15->num_traits) {
  zend_class_name *VAR_28 = FUNC_6(sizeof(zend_class_name) * VAR_15->num_traits);

  FUNC_7(VAR_28, VAR_15->trait_names, sizeof(zend_class_name) * VAR_15->num_traits);
  VAR_15->trait_names = VAR_28;

  if (VAR_15->trait_aliases) {
   zend_trait_alias **VAR_29;
   int VAR_30 = 0;

   while (VAR_15->trait_aliases[VAR_30]) {
    VAR_30++;
   }
   VAR_29 = FUNC_6(sizeof(zend_trait_alias*) * (VAR_30 + 1));
   VAR_30 = 0;
   while (VAR_15->trait_aliases[VAR_30]) {
    VAR_29[VAR_30] = FUNC_6(sizeof(zend_trait_alias));
    FUNC_7(VAR_29[VAR_30], VAR_15->trait_aliases[VAR_30], sizeof(zend_trait_alias));
    VAR_30++;
   }
   VAR_29[VAR_30] = ((void*)0);
   VAR_15->trait_aliases = VAR_29;
  }

  if (VAR_15->trait_precedences) {
   zend_trait_precedence **VAR_31;
   int VAR_32 = 0;

   while (VAR_15->trait_precedences[VAR_32]) {
    VAR_32++;
   }
   VAR_31 = FUNC_6(sizeof(zend_trait_precedence*) * (VAR_32 + 1));
   VAR_32 = 0;
   while (VAR_15->trait_precedences[VAR_32]) {
    VAR_31[VAR_32] = FUNC_6(sizeof(zend_trait_precedence) + (VAR_15->trait_precedences[VAR_32]->num_excludes - 1) * sizeof(zend_string*));
    FUNC_7(VAR_31[VAR_32], VAR_15->trait_precedences[VAR_32], sizeof(zend_trait_precedence) + (VAR_15->trait_precedences[VAR_32]->num_excludes - 1) * sizeof(zend_string*));
    VAR_32++;
   }
   VAR_31[VAR_32] = ((void*)0);
   VAR_15->trait_precedences = VAR_31;
  }
 }
}
