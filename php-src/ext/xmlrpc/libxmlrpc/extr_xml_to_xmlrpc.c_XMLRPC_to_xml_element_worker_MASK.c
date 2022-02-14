
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int children; void* name; int text; } ;
typedef TYPE_1__ xml_element ;
struct buffer_st {int offset; int data; } ;
typedef scalar_t__ XMLRPC_VECTOR_TYPE ;
typedef int XMLRPC_VALUE_TYPE ;
typedef int * XMLRPC_VALUE ;
typedef scalar_t__ XMLRPC_REQUEST_TYPE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
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
 int VAR_16 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int ) ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (char*,int,char*,int,int ) ;
 int FUNC_16 (struct buffer_st*,int ,int ) ;
 int FUNC_17 (struct buffer_st*) ;
 void* FUNC_18 (int ) ;
 int VAR_17 ;
 int FUNC_19 (int *,char*) ;
 int FUNC_20 (int *,int ,int ) ;
 int FUNC_21 (char*,int,char*,int) ;
 TYPE_1__* FUNC_22 () ;






 scalar_t__ VAR_18 ;




 scalar_t__ VAR_19 ;


xml_element* FUNC_23(XMLRPC_VALUE VAR_20, XMLRPC_VALUE VAR_21,
                                          XMLRPC_REQUEST_TYPE VAR_22, int VAR_23) {

   xml_element* VAR_24 = ((void*)0);
   if (VAR_21) {
      char VAR_25[512];
      XMLRPC_VALUE_TYPE VAR_26 = FUNC_10(VAR_21);
      XMLRPC_VECTOR_TYPE VAR_27 = FUNC_11(VAR_21);
      xml_element* VAR_28 = FUNC_22();


      if (VAR_23 == 0 &&
          !(VAR_26 == 131 &&
            VAR_27 == 130 &&
            VAR_22 == VAR_18) ) {
         int VAR_29 = (VAR_27 == 128 && FUNC_12(VAR_21, VAR_8));

         xml_element* VAR_30 = FUNC_23(((void*)0), VAR_21, VAR_22, VAR_23 + 1);
         if (VAR_30) {
            FUNC_1(&VAR_28->children, VAR_30);
         }
         VAR_28->name = FUNC_18(VAR_29 ? VAR_7 : VAR_13);
  }
  else {
         switch (VAR_26) {
   case 134:
         case 132:
            VAR_28->name = FUNC_18(VAR_14);
            FUNC_20(&VAR_28->text, FUNC_8(VAR_21), FUNC_9(VAR_21));
            break;
         case 133:
            VAR_28->name = FUNC_18(VAR_9);
            FUNC_21(VAR_25, 512, "%i", FUNC_7(VAR_21));
            FUNC_19(&VAR_28->text, VAR_25);
            break;
         case 137:
            VAR_28->name = FUNC_18(VAR_3);
            FUNC_21(VAR_25, 512, "%i", FUNC_3(VAR_21));
            FUNC_19(&VAR_28->text, VAR_25);
            break;
         case 135:
            {
                                VAR_28->name = FUNC_18(VAR_6);
                FUNC_15(VAR_25, 512, "%.*G", (int) FUNC_0(VAR_17), FUNC_5(VAR_21));
                FUNC_19(&VAR_28->text, VAR_25);
            }
            break;
         case 136:
            VAR_28->name = FUNC_18(VAR_5);
            FUNC_19(&VAR_28->text, FUNC_4(VAR_21));
            break;
         case 138:
            {
               struct buffer_st VAR_31;
               VAR_28->name = FUNC_18(VAR_2);
               FUNC_16(&VAR_31, FUNC_2(VAR_21), FUNC_9(VAR_21));
               FUNC_20(&VAR_28->text, VAR_31.data, VAR_31.offset );
               FUNC_17(&VAR_31);
            }
            break;
         case 131:
            {
               XMLRPC_VECTOR_TYPE VAR_32 = FUNC_11(VAR_21);
               XMLRPC_VALUE VAR_33 = FUNC_14(VAR_21);
               xml_element* VAR_34 = VAR_28;

               switch (VAR_32) {
               case 130:
                  {
                      if(VAR_23 == 0) {
                         VAR_28->name = FUNC_18(VAR_13);
                      }
                      else {
                         xml_element* VAR_35 = FUNC_22();
                         VAR_35->name = FUNC_18(VAR_4);

                         VAR_28->name = FUNC_18(VAR_1);
                         FUNC_1(&VAR_28->children, VAR_35);
                         VAR_34 = VAR_35;
                      }
                  }
                  break;
               case 129:
               case 128:
                  VAR_28->name = FUNC_18(VAR_15);
                  break;
               default:
                  break;
               }


               while ( VAR_33 ) {
                  xml_element* VAR_36 = FUNC_23(VAR_21, VAR_33, VAR_22, VAR_23 + 1);
                  if (VAR_36) {
                     FUNC_1(&VAR_34->children, VAR_36);
                  }
                  VAR_33 = FUNC_13(VAR_21);
               }
            }
            break;
         default:
            break;
         }
      }

      {
         XMLRPC_VECTOR_TYPE VAR_37 = FUNC_11(VAR_20);

         if (VAR_23 == 1) {
            xml_element* VAR_38 = FUNC_22();
            VAR_38->name = FUNC_18(VAR_16);


            if (FUNC_12(VAR_21, VAR_8)) {
               VAR_24 = VAR_38;
    }
    else {
               xml_element* VAR_39 = FUNC_22();
               VAR_39->name = FUNC_18(VAR_12);

               FUNC_1(&VAR_39->children, VAR_38);

               VAR_24 = VAR_39;
            }
            FUNC_1(&VAR_38->children, VAR_28);
   }
   else if (VAR_37 == 128 || VAR_37 == 129) {
            xml_element* VAR_40 = FUNC_22();
            xml_element* VAR_41 = FUNC_22();
            xml_element* VAR_42 = FUNC_22();

            VAR_40->name = FUNC_18(VAR_10);
            VAR_41->name = FUNC_18(VAR_11);
            VAR_42->name = FUNC_18(VAR_16);

            FUNC_19(&VAR_41->text, FUNC_6(VAR_21));

            FUNC_1(&VAR_40->children, VAR_41);
            FUNC_1(&VAR_40->children, VAR_42);
            FUNC_1(&VAR_42->children, VAR_28);

            VAR_24 = VAR_40;
   }
   else if (VAR_37 == 130) {
            xml_element* VAR_43 = FUNC_22();

            VAR_43->name = FUNC_18(VAR_16);

            FUNC_1(&VAR_43->children, VAR_28);

            VAR_24 = VAR_43;
   }
   else if (VAR_37 == VAR_19) {

            VAR_24 = VAR_28;
   }
   else {
            xml_element* VAR_44 = FUNC_22();

            VAR_44->name = FUNC_18(VAR_16);

            FUNC_1(&VAR_44->children, VAR_28);

            VAR_24 = VAR_44;
         }
      }
   }
   return VAR_24;
}
