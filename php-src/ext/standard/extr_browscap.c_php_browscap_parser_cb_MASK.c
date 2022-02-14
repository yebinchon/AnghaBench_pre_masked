
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_9__ {int kv_used; int htab; } ;
typedef TYPE_1__ browser_data ;
struct TYPE_10__ {int * current_section_name; TYPE_3__* current_entry; TYPE_1__* bdata; } ;
typedef TYPE_2__ browscap_parser_ctx ;
struct TYPE_11__ {size_t prefix_len; int * contains_len; int * contains_start; int * parent; int kv_start; int kv_end; void* pattern; } ;
typedef TYPE_3__ browscap_entry ;
typedef int Z_TYPE_FLAGS_P ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;


 int * FUNC_2 (char) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,int *,int *,int) ;
 size_t FUNC_11 (int *,size_t,int *,int *) ;
 size_t FUNC_12 (int *) ;
 int * FUNC_13 (TYPE_2__*,int *,int) ;
 int * FUNC_14 (TYPE_2__*,int *,int) ;
 TYPE_3__* FUNC_15 (int,int) ;
 int FUNC_16 (int *,int ,char*,int ) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*,char*,int) ;
 int FUNC_19 (int ,char*,char*,int ) ;
 int FUNC_20 (int ,int *,TYPE_3__*) ;
 int * FUNC_21 (void*) ;
 void* FUNC_22 (int *) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static void FUNC_24(zval *VAR_5, zval *VAR_6, zval *VAR_7, int VAR_8, void *VAR_9)
{
 browscap_parser_ctx *VAR_10 = VAR_9;
 browser_data *VAR_11 = VAR_10->bdata;
 int VAR_12 = FUNC_0(VAR_11->htab) & VAR_3;

 if (!VAR_5) {
  return;
 }

 switch (VAR_8) {
  case 129:
   if (VAR_10->current_entry != ((void*)0) && VAR_6) {
    zend_string *VAR_13, *VAR_14;


    if ((FUNC_7(VAR_6) == 2 && !FUNC_18(FUNC_8(VAR_6), "on", sizeof("on") - 1)) ||
     (FUNC_7(VAR_6) == 3 && !FUNC_18(FUNC_8(VAR_6), "yes", sizeof("yes") - 1)) ||
     (FUNC_7(VAR_6) == 4 && !FUNC_18(FUNC_8(VAR_6), "true", sizeof("true") - 1))
    ) {
     VAR_14 = FUNC_2('1');
    } else if (
     (FUNC_7(VAR_6) == 2 && !FUNC_18(FUNC_8(VAR_6), "no", sizeof("no") - 1)) ||
     (FUNC_7(VAR_6) == 3 && !FUNC_18(FUNC_8(VAR_6), "off", sizeof("off") - 1)) ||
     (FUNC_7(VAR_6) == 4 && !FUNC_18(FUNC_8(VAR_6), "none", sizeof("none") - 1)) ||
     (FUNC_7(VAR_6) == 5 && !FUNC_18(FUNC_8(VAR_6), "false", sizeof("false") - 1))
    ) {
     VAR_14 = FUNC_3();
    } else {
     VAR_14 = FUNC_13(VAR_10, FUNC_9(VAR_6), VAR_12);
    }

    if (!FUNC_17(FUNC_8(VAR_5), "parent")) {

     if (VAR_10->current_section_name != ((void*)0) &&
      !FUNC_17(FUNC_6(VAR_10->current_section_name), FUNC_8(VAR_6))
     ) {
      FUNC_19(VAR_1, "Invalid browscap ini file: "
       "'Parent' value cannot be same as the section name: %s "
       "(in file %s)", FUNC_6(VAR_10->current_section_name), FUNC_1("browscap"));
      return;
     }

     if (VAR_10->current_entry->parent) {
      FUNC_23(VAR_10->current_entry->parent);
     }

     VAR_10->current_entry->parent = VAR_14;
    } else {
     VAR_13 = FUNC_14(VAR_10, FUNC_9(VAR_5), VAR_12);
     FUNC_10(VAR_11, VAR_13, VAR_14, VAR_12);
     VAR_10->current_entry->kv_end = VAR_11->kv_used;
    }
   }
   break;
  case 128:
  {
   browscap_entry *VAR_15;
   zend_string *VAR_16 = FUNC_9(VAR_5);
   size_t VAR_17;
   int VAR_18;

   if (FUNC_5(VAR_16) > VAR_4) {
    FUNC_16(((void*)0), VAR_2,
     "Skipping excessively long pattern of length %zd", FUNC_5(VAR_16));
    break;
   }

   if (VAR_12) {
    VAR_16 = FUNC_21(FUNC_22(VAR_16));
    if (FUNC_4(VAR_16)) {
     Z_TYPE_FLAGS_P(VAR_19) = 0;
    } else {
     FUNC_23(VAR_16);
    }
   }

   VAR_15 = VAR_10->current_entry
    = FUNC_15(sizeof(browscap_entry), VAR_12);
   FUNC_20(VAR_11->htab, VAR_16, VAR_15);

   if (VAR_10->current_section_name) {
    FUNC_23(VAR_10->current_section_name);
   }
   VAR_10->current_section_name = FUNC_22(VAR_16);

   VAR_15->pattern = FUNC_22(VAR_16);
   VAR_15->kv_end = VAR_15->kv_start = VAR_11->kv_used;
   VAR_15->parent = ((void*)0);

   VAR_17 = VAR_15->prefix_len = FUNC_12(VAR_16);
   for (VAR_18 = 0; VAR_18 < VAR_0; VAR_18++) {
    VAR_17 = FUNC_11(VAR_16, VAR_17,
     &VAR_15->contains_start[VAR_18], &VAR_15->contains_len[VAR_18]);
   }
   break;
  }
 }
}
