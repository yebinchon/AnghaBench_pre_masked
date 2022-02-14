
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int name; int attrs; int text; int children; } ;
typedef TYPE_1__ xml_element_attr ;
typedef TYPE_1__ xml_element ;
typedef int time_t ;
struct tm {int dummy; } ;
struct buffer_st {int offset; int data; } ;
typedef int buf ;
typedef int XMLRPC_VALUE_TYPE_EASY ;
typedef scalar_t__ XMLRPC_VALUE ;
typedef int XMLRPC_REQUEST ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 double FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct buffer_st*,int ,int ) ;
 int FUNC_15 (struct buffer_st*) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (scalar_t__,TYPE_1__*) ;
 char* FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 struct tm* FUNC_20 (int *) ;
 TYPE_1__* FUNC_21 (int ,char*) ;
 int FUNC_22 (int *,char*) ;
 int FUNC_23 (int *,int ,int ) ;
 int FUNC_24 (char*,int,char*,...) ;
 int FUNC_25 (char*,int,char*,struct tm*) ;
 TYPE_1__* FUNC_26 () ;
xml_element* FUNC_27(XMLRPC_REQUEST VAR_12, XMLRPC_VALUE VAR_13) {

 xml_element* VAR_14 = ((void*)0);
 if (VAR_13) {
  int VAR_15 = 0;
  char VAR_16[128];
  XMLRPC_VALUE_TYPE_EASY VAR_17 = FUNC_10(VAR_13);
  char* VAR_18 = ((void*)0), *VAR_19 = ((void*)0);


  VAR_14 = FUNC_26();

  switch (VAR_17) {
  case 128:
  case 130:
  case 137:
   if (VAR_17 == 137) {




    const char* VAR_20 = FUNC_18(VAR_13);
    xml_element_attr* VAR_21 = ((void*)0);


    FUNC_24(VAR_16, sizeof(VAR_16), "%s[%i]", VAR_20, FUNC_13(VAR_13));
    VAR_21 = FUNC_21(VAR_2, VAR_16);

    FUNC_0(&VAR_14->attrs, VAR_21);

    VAR_19 = VAR_1;
   }


   else if (VAR_17 == 128) {
    int VAR_22 = FUNC_19(VAR_13);
    if (VAR_22) {
     if (VAR_22 == 1) {


      VAR_13 = FUNC_17(VAR_13, VAR_14);
      VAR_15 = 1;
     }
     VAR_18 = VAR_7;
    }
   }

   {

    XMLRPC_VALUE VAR_23 = FUNC_12(VAR_13);
    while ( VAR_23 ) {
     xml_element* VAR_24 = FUNC_27(VAR_12, VAR_23);
     if (VAR_24) {
      FUNC_0(&VAR_14->children, VAR_24);
     }
     VAR_23 = FUNC_11(VAR_13);
    }
   }

   break;


  case 132:
   VAR_19 = VAR_9;
   break;
  case 129:
   VAR_19 = VAR_10;
   FUNC_23(&VAR_14->text, FUNC_8(VAR_13), FUNC_9(VAR_13));
   break;
  case 131:
   VAR_19 = VAR_8;
   FUNC_24(VAR_16, 128, "%i", FUNC_7(VAR_13));
   FUNC_22(&VAR_14->text, VAR_16);
   break;
  case 135:
   VAR_19 = VAR_4;
   FUNC_24(VAR_16, 128, "%i", FUNC_3(VAR_13));
   FUNC_22(&VAR_14->text, VAR_16);
   break;
  case 133:
   VAR_19 = VAR_6;
   FUNC_24(VAR_16, 128, "%f", FUNC_5(VAR_13));
   FUNC_22(&VAR_14->text, VAR_16);
   break;
  case 134:
   {
    time_t VAR_25 = FUNC_4(VAR_13);
    struct tm *VAR_26 = FUNC_20 (&VAR_25);
    VAR_19 = VAR_5;
    if(FUNC_25 (VAR_16, 128, "%Y-%m-%dT%H:%M:%SZ", VAR_26)) {
     FUNC_22(&VAR_14->text, VAR_16);
    }
   }
   break;
  case 136:
   {
    struct buffer_st VAR_27;
    VAR_19 = VAR_3;
    FUNC_14(&VAR_27, FUNC_2(VAR_13), FUNC_9(VAR_13));
    FUNC_23(&VAR_14->text, VAR_27.data, VAR_27.offset );
    FUNC_15(&VAR_27);
   }
   break;
   break;
  default:
   break;
  }


  if (!VAR_18) {

   if (VAR_19) {

    VAR_18 = (char*)FUNC_6(VAR_13);
    if (VAR_18) {
     FUNC_0(&VAR_14->attrs, FUNC_21(VAR_11, VAR_19));
    }


    else {
     VAR_18 = VAR_19;
    }
   }

   else {

    VAR_18 = (char*)FUNC_6(VAR_13);
    if (!VAR_18) {
     VAR_18 = "item";
    }
   }
  }
  VAR_14->name = FUNC_16(VAR_18);


  if (VAR_15) {
   FUNC_1(VAR_13);
  }
 }
 return VAR_14;
}
