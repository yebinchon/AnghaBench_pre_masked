
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int str; int len; } ;
struct TYPE_5__ {int children; TYPE_1__ text; scalar_t__ name; } ;
typedef TYPE_2__ xml_element ;
struct buffer_st {int offset; int data; } ;
typedef void* XMLRPC_VALUE ;
typedef scalar_t__ XMLRPC_REQUEST ;


 int VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (void*,void*) ;
 void* FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (void*,int ) ;
 int FUNC_9 (void*,int ,int ) ;
 int FUNC_10 (void*,int ) ;
 int FUNC_11 (void*,int ) ;
 int FUNC_12 (void*,int ) ;
 int FUNC_13 (void*,int ,int ,int ) ;
 int FUNC_14 (void*,int ) ;
 int FUNC_15 (void*,int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct buffer_st*,int ,int ) ;
 int FUNC_19 (struct buffer_st*) ;
 int FUNC_20 (scalar_t__,int ) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

XMLRPC_VALUE FUNC_21(XMLRPC_REQUEST VAR_21, XMLRPC_VALUE VAR_22, XMLRPC_VALUE VAR_23, xml_element* VAR_24) {
   if (!VAR_23) {

      VAR_23 = FUNC_4();
   }

 if (VAR_24->name) {


      if (!FUNC_20(VAR_24->name, VAR_5)) {
   xml_element* VAR_25 = (xml_element*)FUNC_0(&VAR_24->children);
   FUNC_8(VAR_23, VAR_20);

         if(VAR_25) {
            xml_element* VAR_26 = (xml_element*)FUNC_0(&VAR_25->children);
            if(VAR_26) {
               xml_element* VAR_27 = (xml_element*)FUNC_0(&VAR_26->children);

               while (VAR_27) {
                  XMLRPC_VALUE VAR_28 = FUNC_4();
                  FUNC_21(VAR_21, VAR_23, VAR_28, VAR_27);
                  FUNC_3(VAR_23, VAR_28);
                  VAR_27 = (xml_element*)FUNC_1(&VAR_26->children);
               }
            }
         }
      }
  else if (!FUNC_20(VAR_24->name, VAR_2)
    || (!FUNC_20(VAR_24->name, VAR_12) &&
      (FUNC_5(VAR_21) == VAR_17)) ) {
         xml_element* VAR_29 = (xml_element*)FUNC_0(&VAR_24->children);
         FUNC_8(VAR_23, VAR_19);

         while (VAR_29) {
            XMLRPC_VALUE VAR_30 = FUNC_4();
            FUNC_21(VAR_21, VAR_23, VAR_30, VAR_29);
            FUNC_3(VAR_23, VAR_30);
            VAR_29 = (xml_element*)FUNC_1(&VAR_24->children);
         }
  }
  else if (!FUNC_20(VAR_24->name, VAR_14)) {
         xml_element* VAR_31 = (xml_element*)FUNC_0(&VAR_24->children);
         FUNC_8(VAR_23, VAR_20);

         while ( VAR_31 ) {
            XMLRPC_VALUE VAR_32 = FUNC_4();
            FUNC_21(VAR_21, VAR_23, VAR_32, VAR_31);
            FUNC_3(VAR_23, VAR_32);
            VAR_31 = (xml_element*)FUNC_1(&VAR_24->children);
         }
  }
  else if (!FUNC_20(VAR_24->name, VAR_13) ||
                 (!FUNC_20(VAR_24->name, VAR_15) && FUNC_2(&VAR_24->children) == 0)) {
         FUNC_15(VAR_23, VAR_24->text.str, VAR_24->text.len);
  }
  else if (!FUNC_20(VAR_24->name, VAR_11)) {
         FUNC_13(VAR_23, VAR_24->text.str, 0, VAR_16);
  }
  else if (!FUNC_20(VAR_24->name, VAR_7) || !FUNC_20(VAR_24->name, VAR_6)) {
         FUNC_14(VAR_23, FUNC_17(VAR_24->text.str));
  }
  else if (!FUNC_20(VAR_24->name, VAR_1)) {
         FUNC_10(VAR_23, FUNC_17(VAR_24->text.str));
  }
  else if (!FUNC_20(VAR_24->name, VAR_4)) {
         FUNC_12(VAR_23, FUNC_16(VAR_24->text.str));
  }
  else if (!FUNC_20(VAR_24->name, VAR_3)) {
         FUNC_11(VAR_23, VAR_24->text.str);
  }
  else if (!FUNC_20(VAR_24->name, VAR_0)) {
         struct buffer_st VAR_33;
         FUNC_18(&VAR_33, VAR_24->text.str, VAR_24->text.len);
         FUNC_9(VAR_23, VAR_33.data, VAR_33.offset);
         FUNC_19(&VAR_33);
  }
  else {
         xml_element* VAR_34;

         if (!FUNC_20(VAR_24->name, VAR_8)) {
            if (VAR_21) {
               FUNC_7(VAR_21, VAR_17);
            }
   }
   else if (!FUNC_20(VAR_24->name, VAR_10)) {
            if (VAR_21) {
               FUNC_7(VAR_21, VAR_18);
            }
   }
   else if (!FUNC_20(VAR_24->name, VAR_9)) {
            if (VAR_21) {
               FUNC_6(VAR_21, VAR_24->text.str);
            }
         }

         VAR_34 = (xml_element*)FUNC_0(&VAR_24->children);
         while ( VAR_34 ) {
            FUNC_21(VAR_21, VAR_22,
                                                 VAR_23, VAR_34);
            VAR_34 = (xml_element*)FUNC_1(&VAR_24->children);
         }
      }
   }
   return VAR_23;
}
