
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {void* val; int children; int text; int attrs; void* key; void* name; } ;
typedef TYPE_2__ xml_element_attr ;
typedef TYPE_2__ xml_element ;
struct buffer_st {int offset; int data; } ;
typedef int XMLRPC_VECTOR_TYPE ;
typedef int XMLRPC_VALUE_TYPE ;
typedef scalar_t__ XMLRPC_VALUE ;
typedef TYPE_4__* XMLRPC_REQUEST_OUTPUT_OPTIONS ;
typedef scalar_t__ XMLRPC_REQUEST ;
struct TYPE_10__ {scalar_t__ verbosity; } ;
struct TYPE_12__ {TYPE_1__ xml_elem_opts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char const* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char const* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char const* VAR_11 ;
 char const* VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__) ;
 double FUNC_4 (scalar_t__) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 TYPE_4__* FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct buffer_st*,int ,int ) ;
 int FUNC_15 (struct buffer_st*) ;
 TYPE_2__* FUNC_16 (int) ;
 void* FUNC_17 (char const*) ;
 int FUNC_18 (int *,char*) ;
 int FUNC_19 (int *,int ,int ) ;
 int FUNC_20 (char*,int,char*,double) ;
 TYPE_2__* FUNC_21 () ;
 scalar_t__ VAR_14 ;
xml_element* FUNC_22(XMLRPC_REQUEST VAR_15, XMLRPC_VALUE VAR_16) {

   xml_element* VAR_17 = ((void*)0);
   if(VAR_16) {
      char VAR_18[512];
      const char* VAR_19 = FUNC_5(VAR_16);
      XMLRPC_VALUE_TYPE VAR_20 = FUNC_9(VAR_16);
      XMLRPC_REQUEST_OUTPUT_OPTIONS VAR_21 = FUNC_11(VAR_15);
      int VAR_22 = (VAR_20 == 132 && VAR_15 && VAR_21 && VAR_21->xml_elem_opts.verbosity == VAR_14);
      xml_element* VAR_23 = FUNC_21();
      const char* VAR_24 = ((void*)0);

      xml_element_attr* VAR_25 = VAR_22 ? ((void*)0) : FUNC_16(sizeof(xml_element_attr));

      if(VAR_25) {
         VAR_25->key = FUNC_17(VAR_11);
         VAR_25->val = 0;
         FUNC_0(&VAR_23->attrs, VAR_25);
      }

      VAR_23->name = (VAR_20 == 131) ? FUNC_17(VAR_12) : FUNC_17(VAR_8);

      if(VAR_19 && *VAR_19) {
         xml_element_attr* VAR_26 = FUNC_16(sizeof(xml_element_attr));
         if(VAR_26) {
            VAR_26->key = FUNC_17(VAR_5);
            VAR_26->val = FUNC_17(VAR_19);
            FUNC_0(&VAR_23->attrs, VAR_26);
         }
      }

      switch(VAR_20) {
         case 132:
            VAR_24 = VAR_9;
            FUNC_19(&VAR_23->text, FUNC_7(VAR_16), FUNC_8(VAR_16));
            break;
         case 133:
            VAR_24 = VAR_6;
            FUNC_20(VAR_18, 512, "%i", FUNC_6(VAR_16));
            FUNC_18(&VAR_23->text, VAR_18);
            break;
         case 136:
            VAR_24 = VAR_2;
            FUNC_20(VAR_18, 512, "%i", FUNC_2(VAR_16));
            FUNC_18(&VAR_23->text, VAR_18);
            break;
         case 134:
            VAR_24 = VAR_4;
            FUNC_20(VAR_18, 512, "%f", FUNC_4(VAR_16));
            FUNC_18(&VAR_23->text, VAR_18);
            break;
         case 135:
            VAR_24 = VAR_3;
            FUNC_18(&VAR_23->text, FUNC_3(VAR_16));
            break;
         case 137:
            {
               struct buffer_st VAR_27;
               VAR_24 = VAR_1;
               FUNC_14(&VAR_27, FUNC_1(VAR_16), FUNC_8(VAR_16));
               FUNC_19(&VAR_23->text, VAR_27.data, VAR_27.offset );
               FUNC_15(&VAR_27);
            }
            break;
         case 131:
            {
               XMLRPC_VECTOR_TYPE VAR_28 = FUNC_10(VAR_16);
               XMLRPC_VALUE VAR_29 = FUNC_13(VAR_16);

               switch(VAR_28) {
                  case 130:
                     VAR_24 = VAR_0;
                     break;
                  case 129:
                     VAR_24 = VAR_7;
                     break;
                  case 128:
                     VAR_24 = VAR_10;
                     break;
                  default:
                     break;
               }


               while( VAR_29 ) {
                  xml_element* VAR_30 = FUNC_22(VAR_15, VAR_29);
                  if(VAR_30) {
                     FUNC_0(&VAR_23->children, VAR_30);
                  }
                  VAR_29 = FUNC_12(VAR_16);
               }
            }
            break;
         default:
            break;
      }
      if(VAR_24 && VAR_25 && !VAR_22) {
         VAR_25->val = FUNC_17(VAR_24);
      }
      VAR_17 = VAR_23;
   }
   return VAR_17;
}
