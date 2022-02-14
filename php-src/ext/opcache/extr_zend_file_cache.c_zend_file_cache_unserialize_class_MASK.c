
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ class_name; scalar_t__ method_name; } ;
struct TYPE_14__ {scalar_t__ doc_comment; scalar_t__ filename; } ;
struct TYPE_15__ {TYPE_1__ user; } ;
struct TYPE_17__ {int ce_flags; int default_properties_count; int default_static_members_count; size_t num_interfaces; size_t num_traits; size_t num_excludes; struct TYPE_17__* default_static_members_table; int static_members_table; struct TYPE_17__* zf_next; struct TYPE_17__* iterator_funcs_ptr; struct TYPE_17__* zf_current; struct TYPE_17__* zf_key; struct TYPE_17__* zf_valid; struct TYPE_17__* zf_rewind; struct TYPE_17__* zf_new_iterator; int unserialize; int serialize; struct TYPE_17__* __debugInfo; struct TYPE_17__* __callstatic; struct TYPE_17__* __tostring; struct TYPE_17__* __unset; struct TYPE_17__* __isset; struct TYPE_17__* unserialize_func; struct TYPE_17__* serialize_func; struct TYPE_17__* __call; struct TYPE_17__* __set; struct TYPE_17__* __get; struct TYPE_17__* clone; struct TYPE_17__* destructor; struct TYPE_17__* constructor; scalar_t__* exclude_class_names; TYPE_3__ trait_method; struct TYPE_17__** trait_precedences; scalar_t__ alias; struct TYPE_17__** trait_aliases; scalar_t__ lc_name; struct TYPE_17__* trait_names; scalar_t__ name; struct TYPE_17__* interface_names; struct TYPE_17__** properties_info_table; int properties_info; TYPE_2__ info; int constants_table; struct TYPE_17__* default_properties_table; int function_table; struct TYPE_17__* parent; scalar_t__ parent_name; } ;
typedef TYPE_4__ zval ;
typedef TYPE_4__ zend_trait_precedence ;
typedef TYPE_4__ zend_trait_alias ;
typedef int zend_persistent_script ;
typedef TYPE_4__ zend_class_entry ;
typedef size_t uint32_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int * VAR_3 ;
 int FUNC_4 (int ,TYPE_4__**) ;
 int FUNC_5 (int ) ;
 TYPE_4__* FUNC_6 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *,int *,void*,int ,int *) ;
 int VAR_8 ;
 int FUNC_8 (TYPE_4__*,int *,void*) ;

__attribute__((used)) static void FUNC_9(zval *VAR_9,
                                              zend_persistent_script *VAR_10,
                                              void *VAR_11)
{
 zend_class_entry *VAR_12;
 zend_class_entry *VAR_13 = ((void*)0);

 FUNC_1(FUNC_6(VAR_9));
 VAR_12 = FUNC_6(VAR_9);

 FUNC_2(VAR_12->name);
 if (VAR_12->parent) {
  if (!(VAR_12->ce_flags & VAR_2)) {
   FUNC_2(VAR_12->parent_name);
  } else {
   FUNC_1(VAR_12->parent);
   VAR_13 = VAR_12->parent;
  }
 }
 FUNC_7(&VAR_12->function_table,
   VAR_10, VAR_11, VAR_7, VAR_3);
 if (VAR_12->default_properties_table) {
  zval *VAR_14, *VAR_15;

  FUNC_1(VAR_12->default_properties_table);
  VAR_14 = VAR_12->default_properties_table;
  VAR_15 = VAR_14 + VAR_12->default_properties_count;
  while (VAR_14 < VAR_15) {
   FUNC_8(VAR_14, VAR_10, VAR_11);
   VAR_14++;
  }
 }
 if (VAR_12->default_static_members_table) {
  zval *VAR_16, *VAR_17, *VAR_18;



  FUNC_1(VAR_12->default_static_members_table);
  VAR_16 = VAR_12->default_static_members_table;
  VAR_17 = VAR_16 + (VAR_13 ? VAR_13->default_static_members_count : 0);
  VAR_18 = VAR_16 + VAR_12->default_static_members_count;
  while (VAR_17 < VAR_18) {
   FUNC_8(VAR_17, VAR_10, VAR_11);
   VAR_17++;
  }
 }
 FUNC_7(&VAR_12->constants_table,
   VAR_10, VAR_11, VAR_6, ((void*)0));
 FUNC_2(VAR_12->info.user.filename);
 FUNC_2(VAR_12->info.user.doc_comment);
 FUNC_7(&VAR_12->properties_info,
   VAR_10, VAR_11, VAR_8, ((void*)0));

 if (VAR_12->properties_info_table) {
  uint32_t VAR_19;
  FUNC_1(*VAR_12->properties_info_table);

  for (VAR_19 = 0; VAR_19 < VAR_12->default_properties_count; VAR_19++) {
   FUNC_1(VAR_12->properties_info_table[VAR_19]);
  }
 }

 if (VAR_12->num_interfaces) {
  uint32_t VAR_20;

  FUNC_3(!(VAR_12->ce_flags & VAR_2));
  FUNC_1(VAR_12->interface_names);

  for (VAR_20 = 0; VAR_20 < VAR_12->num_interfaces; VAR_20++) {
   FUNC_2(VAR_12->interface_names[VAR_20].name);
   FUNC_2(VAR_12->interface_names[VAR_20].lc_name);
  }
 }

 if (VAR_12->num_traits) {
  uint32_t VAR_21;

  FUNC_1(VAR_12->trait_names);

  for (VAR_21 = 0; VAR_21 < VAR_12->num_traits; VAR_21++) {
   FUNC_2(VAR_12->trait_names[VAR_21].name);
   FUNC_2(VAR_12->trait_names[VAR_21].lc_name);
  }

  if (VAR_12->trait_aliases) {
   zend_trait_alias **VAR_22, *VAR_23;

   FUNC_1(*VAR_12->trait_aliases);
   VAR_22 = VAR_12->trait_aliases;

   while (*VAR_22) {
    FUNC_1(*VAR_22);
    VAR_23 = *VAR_22;

    if (VAR_23->trait_method.method_name) {
     FUNC_2(VAR_23->trait_method.method_name);
    }
    if (VAR_23->trait_method.class_name) {
     FUNC_2(VAR_23->trait_method.class_name);
    }

    if (VAR_23->alias) {
     FUNC_2(VAR_23->alias);
    }
    VAR_22++;
   }
  }

  if (VAR_12->trait_precedences) {
   zend_trait_precedence **VAR_24, *VAR_25;
   uint32_t VAR_26;

   FUNC_1(*VAR_12->trait_precedences);
   VAR_24 = VAR_12->trait_precedences;

   while (*VAR_24) {
    FUNC_1(*VAR_24);
    VAR_25 = *VAR_24;

    if (VAR_25->trait_method.method_name) {
     FUNC_2(VAR_25->trait_method.method_name);
    }
    if (VAR_25->trait_method.class_name) {
     FUNC_2(VAR_25->trait_method.class_name);
    }

    for (VAR_26 = 0; VAR_26 < VAR_25->num_excludes; VAR_26++) {
     FUNC_2(VAR_25->exclude_class_names[VAR_26]);
    }
    VAR_24++;
   }
  }
 }

 FUNC_1(VAR_12->constructor);
 FUNC_1(VAR_12->destructor);
 FUNC_1(VAR_12->clone);
 FUNC_1(VAR_12->__get);
 FUNC_1(VAR_12->__set);
 FUNC_1(VAR_12->__call);
 FUNC_1(VAR_12->serialize_func);
 FUNC_1(VAR_12->unserialize_func);
 FUNC_1(VAR_12->__isset);
 FUNC_1(VAR_12->__unset);
 FUNC_1(VAR_12->__tostring);
 FUNC_1(VAR_12->__callstatic);
 FUNC_1(VAR_12->__debugInfo);

 if (FUNC_0((VAR_12->ce_flags & VAR_0))) {
  VAR_12->serialize = VAR_4;
  VAR_12->unserialize = VAR_5;
 }

 if (VAR_12->iterator_funcs_ptr) {
  FUNC_1(VAR_12->iterator_funcs_ptr);
  FUNC_1(VAR_12->iterator_funcs_ptr->zf_new_iterator);
  FUNC_1(VAR_12->iterator_funcs_ptr->zf_rewind);
  FUNC_1(VAR_12->iterator_funcs_ptr->zf_valid);
  FUNC_1(VAR_12->iterator_funcs_ptr->zf_key);
  FUNC_1(VAR_12->iterator_funcs_ptr->zf_current);
  FUNC_1(VAR_12->iterator_funcs_ptr->zf_next);
 }

 if (VAR_12->ce_flags & VAR_1 && VAR_12->default_static_members_table) {
  FUNC_5(VAR_12->static_members_table);
 } else {
  FUNC_4(VAR_12->static_members_table, &VAR_12->default_static_members_table);
 }
}
