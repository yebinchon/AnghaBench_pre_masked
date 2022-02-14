
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char const* key; char* val; } ;
typedef TYPE_2__ xml_element_attr ;
struct TYPE_7__ {int len; int str; } ;
struct TYPE_9__ {char* name; int children; TYPE_1__ text; int attrs; } ;
typedef TYPE_3__ xml_element ;
struct buffer_st {int offset; int data; } ;
struct array_info {char* kids_type; } ;
typedef void* XMLRPC_VALUE ;
typedef scalar_t__ XMLRPC_REQUEST_TYPE ;
typedef int XMLRPC_REQUEST ;


 TYPE_2__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 int FUNC_3 (void*,void*) ;
 void* FUNC_4 () ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char const*) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (void*,scalar_t__) ;
 int FUNC_11 (void*,int ,int ) ;
 int FUNC_12 (void*,int ) ;
 int FUNC_13 (void*,int ) ;
 int FUNC_14 (void*,int ) ;
 int FUNC_15 (void*,char const*,int ,int ) ;
 int FUNC_16 (void*,int ) ;
 int FUNC_17 (void*,int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct buffer_st*,int ,int ) ;
 int FUNC_21 (struct buffer_st*) ;
 int FUNC_22 (struct array_info*) ;
 int FUNC_23 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_24 (char*) ;
 struct array_info* FUNC_25 (char const*) ;
 scalar_t__ FUNC_26 (char*,char*) ;
 char* FUNC_27 (char*,char) ;
 int FUNC_28 (char const*,char*) ;
 scalar_t__ FUNC_29 (char*,char*) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;

XMLRPC_VALUE FUNC_30(XMLRPC_REQUEST VAR_22,
                XMLRPC_VALUE VAR_23,
                struct array_info* VAR_24,
                XMLRPC_VALUE VAR_25,
                xml_element* VAR_26,
                int VAR_27) {
 XMLRPC_REQUEST_TYPE VAR_28 = VAR_17;


 if (!VAR_25) {
  VAR_25 = FUNC_4();
 }


 VAR_27 ++;


 if (VAR_26 && VAR_26->name) {
  const char* VAR_29 = ((void*)0);
  const char* VAR_30 = ((void*)0), *VAR_31=((void*)0), *VAR_32 = ((void*)0);
  xml_element_attr* VAR_33 = FUNC_0(&VAR_26->attrs);
  int VAR_34 = 0;


  if (FUNC_24(VAR_26->name)) {
   VAR_30 = VAR_26->name;
  }


  else if (FUNC_5(VAR_23) != VAR_19) {
   VAR_29 = VAR_26->name;
   if(!FUNC_28(VAR_29, "item")) {
   }
  }


  while (VAR_33) {

   if (!FUNC_28(VAR_33->key, VAR_14)) {
    VAR_30 = VAR_33->val;
   }

   else if (!FUNC_28(VAR_33->key, VAR_3)) {
    VAR_31 = VAR_33->val;
   }

   else if (!FUNC_28(VAR_33->key, VAR_10)) {
    VAR_34 = FUNC_27(VAR_33->val, '1') ? 1 : 0;
   }

   else if (!FUNC_28(VAR_33->key, VAR_0)) {
    VAR_32 = VAR_33->val;
   }
   VAR_33 = FUNC_1(&VAR_26->attrs);
  }


  if (VAR_34) {



   if (!VAR_32 || !FUNC_28(VAR_32, VAR_1)) {



    FUNC_7(VAR_22,
             FUNC_23("SOAP-ENV:MustUnderstand",
                  "SOAP Must Understand Error",
                  "", ""));
    return VAR_25;
   }
  }


  if (VAR_29) {
   FUNC_15(VAR_25, VAR_29, 0, VAR_15);
  }



  if (VAR_27 == 3) {
   const char* VAR_35 = VAR_26->name;
   char* VAR_36 = ((void*)0);





   VAR_28 =



   FUNC_29(VAR_26->name, "esponse") ? VAR_18 : VAR_16;

   FUNC_9(VAR_22, VAR_28);


   VAR_36 = FUNC_27(VAR_26->name, ':');
   if (VAR_36) {
    VAR_35 = VAR_36 + 1;
   }
   if (VAR_28 == VAR_16) {
    FUNC_8(VAR_22, VAR_35);
   }
  }



  if (!FUNC_2(&VAR_26->children)) {
   if (!VAR_30 && VAR_24 && VAR_24->kids_type[0]) {
    VAR_30 = VAR_24->kids_type;
   }
   if (!VAR_30 || !FUNC_28(VAR_30, VAR_12)) {
    FUNC_17(VAR_25, VAR_26->text.str, VAR_26->text.len);
   }
   else if (!FUNC_28(VAR_30, VAR_9)) {
    FUNC_16(VAR_25, FUNC_19(VAR_26->text.str));
   }
   else if (!FUNC_28(VAR_30, VAR_5)) {
    FUNC_12(VAR_25, FUNC_19(VAR_26->text.str));
   }
   else if (!FUNC_28(VAR_30, VAR_7) ||
      !FUNC_28(VAR_30, VAR_8)) {
    FUNC_14(VAR_25, FUNC_18(VAR_26->text.str));
   }
   else if (!FUNC_28(VAR_30, VAR_11)) {

   }
   else if (!FUNC_28(VAR_30, VAR_6)) {
    FUNC_13(VAR_25, VAR_26->text.str);
   }
   else if (!FUNC_28(VAR_30, VAR_4)) {
    struct buffer_st VAR_37;
    FUNC_20(&VAR_37, VAR_26->text.str, VAR_26->text.len);
    FUNC_11(VAR_25, VAR_37.data, VAR_37.offset);
    FUNC_21(&VAR_37);
   }
  }

  else {
   struct array_info* VAR_38 = ((void*)0);
   xml_element* VAR_39 = (xml_element*)FUNC_0(&VAR_26->children);

   if (!VAR_30 || !FUNC_28(VAR_30, VAR_13)) {
    FUNC_10(VAR_25, VAR_21);
   }
   else if (!FUNC_28(VAR_30, VAR_2) || VAR_31 != ((void*)0)) {


    VAR_38 = FUNC_25(VAR_31);
    FUNC_10(VAR_25, VAR_19);
   }
   else {

    FUNC_10(VAR_25, VAR_20);
   }


   while ( VAR_39 && !FUNC_6(VAR_22) ) {
    XMLRPC_VALUE VAR_40 = ((void*)0);


    if ( VAR_27 <= 2 ||
       (VAR_28 == VAR_18 && VAR_27 <= 3) ) {
     FUNC_30(VAR_22, ((void*)0), VAR_38, VAR_25, VAR_39, VAR_27);
    }


    else {
     VAR_40 = FUNC_4();
     FUNC_30(VAR_22, VAR_25, VAR_38, VAR_40, VAR_39, VAR_27);
     FUNC_3(VAR_25, VAR_40);
    }
    VAR_39 = (xml_element*)FUNC_1(&VAR_26->children);
   }

   if (VAR_38) {
    FUNC_22(VAR_38);
   }
  }
 }
 return VAR_25;
}
