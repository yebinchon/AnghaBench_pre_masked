
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int * method_name; int * class_name; } ;
struct TYPE_13__ {size_t num_excludes; TYPE_3__ trait_method; int ** exclude_class_names; } ;
typedef TYPE_2__ zend_trait_precedence ;
typedef TYPE_3__ zend_trait_method_reference ;
typedef int zend_string ;
struct TYPE_15__ {size_t num_traits; int * name; int function_table; TYPE_1__** trait_aliases; TYPE_2__** trait_precedences; } ;
typedef TYPE_4__ zend_class_entry ;
typedef size_t uint32_t ;
struct TYPE_12__ {TYPE_3__ trait_method; } ;
typedef int HashTable ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (size_t,int) ;
 size_t FUNC_3 (TYPE_4__*,TYPE_4__*,TYPE_4__**) ;
 int FUNC_4 (int ,char*,int ,...) ;
 TYPE_4__* FUNC_5 (int *,int) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ,int *,int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int * FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(zend_class_entry *VAR_3, zend_class_entry **VAR_4, HashTable ***VAR_5, zend_class_entry ***VAR_6)
{
 size_t VAR_7, VAR_8 = 0;
 zend_trait_precedence **VAR_9;
 zend_trait_precedence *VAR_10;
 zend_trait_method_reference *VAR_11;
 zend_string *VAR_12;
 HashTable **VAR_13 = ((void*)0);
 zend_class_entry **VAR_14 = ((void*)0);
 zend_class_entry *VAR_15;


 if (VAR_3->trait_precedences) {
  VAR_13 = FUNC_2(VAR_3->num_traits, sizeof(HashTable*));
  VAR_7 = 0;
  VAR_9 = VAR_3->trait_precedences;
  VAR_3->trait_precedences = ((void*)0);
  while ((VAR_10 = VAR_9[VAR_7])) {

   VAR_11 = &VAR_10->trait_method;
   VAR_15 = FUNC_5(VAR_11->class_name,
       VAR_2|VAR_1);
   if (!VAR_15) {
    FUNC_4(VAR_0, "Could not find trait %s", FUNC_1(VAR_11->class_name));
   }
   FUNC_3(VAR_3, VAR_15, VAR_4);


   VAR_12 = FUNC_10(VAR_11->method_name);
   if (!FUNC_7(&VAR_15->function_table, VAR_12)) {
    FUNC_4(VAR_0,
         "A precedence rule was defined for %s::%s but this method does not exist",
         FUNC_1(VAR_15->name),
         FUNC_1(VAR_11->method_name));
   }
   for (VAR_8 = 0; VAR_8 < VAR_10->num_excludes; VAR_8++) {
    zend_string* VAR_16 = VAR_10->exclude_class_names[VAR_8];
    zend_class_entry *VAR_17 = FUNC_5(VAR_16, VAR_2 |VAR_1);
    uint32_t VAR_18;

    if (!VAR_17) {
     FUNC_4(VAR_0, "Could not find trait %s", FUNC_1(VAR_16));
    }
    VAR_18 = FUNC_3(VAR_3, VAR_17, VAR_4);
    if (!VAR_13[VAR_18]) {
     FUNC_0(VAR_13[VAR_18]);
     FUNC_8(VAR_13[VAR_18], 0, ((void*)0), ((void*)0), 0);
    }
    if (FUNC_6(VAR_13[VAR_18], VAR_12) == ((void*)0)) {
     FUNC_4(VAR_0, "Failed to evaluate a trait precedence (%s). Method of trait %s was defined to be excluded multiple times", FUNC_1(VAR_9[VAR_7]->trait_method.method_name), FUNC_1(VAR_17->name));
    }



    if (VAR_15 == VAR_17) {
     FUNC_4(VAR_0,
          "Inconsistent insteadof definition. "
          "The method %s is to be used from %s, but %s is also on the exclude list",
          FUNC_1(VAR_11->method_name),
          FUNC_1(VAR_15->name),
          FUNC_1(VAR_15->name));
    }
   }
   FUNC_9(VAR_12, 0);
   VAR_7++;
  }
  VAR_3->trait_precedences = VAR_9;
 }

 if (VAR_3->trait_aliases) {
  VAR_7 = 0;
  while (VAR_3->trait_aliases[VAR_7]) {
   VAR_7++;
  }
  VAR_14 = FUNC_2(VAR_7, sizeof(zend_class_entry*));
  VAR_7 = 0;
  while (VAR_3->trait_aliases[VAR_7]) {

   if (VAR_3->trait_aliases[VAR_7]->trait_method.class_name) {
    VAR_11 = &VAR_3->trait_aliases[VAR_7]->trait_method;
    VAR_15 = FUNC_5(VAR_11->class_name, VAR_2|VAR_1);
    if (!VAR_15) {
     FUNC_4(VAR_0, "Could not find trait %s", FUNC_1(VAR_11->class_name));
    }
    FUNC_3(VAR_3, VAR_15, VAR_4);
    VAR_14[VAR_7] = VAR_15;


    VAR_12 = FUNC_10(VAR_11->method_name);
    if (!FUNC_7(&VAR_15->function_table, VAR_12)) {
     FUNC_4(VAR_0, "An alias was defined for %s::%s but this method does not exist", FUNC_1(VAR_15->name), FUNC_1(VAR_11->method_name));
    }
    FUNC_9(VAR_12, 0);
   }
   VAR_7++;
  }
 }

 *VAR_5 = VAR_13;
 *VAR_6 = VAR_14;
}
