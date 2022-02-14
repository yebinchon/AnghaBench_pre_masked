
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * desc; } ;
typedef TYPE_1__ server_method ;
typedef int * XMLRPC_VALUE ;
typedef int XMLRPC_SERVER ;
typedef int XMLRPC_REQUEST ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,char const*,int ) ;
 int * FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 char const* FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int ,void*) ;
 TYPE_1__* FUNC_10 (int ,char const*) ;
 char const* FUNC_11 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static XMLRPC_VALUE FUNC_12(XMLRPC_SERVER VAR_6, XMLRPC_REQUEST VAR_7, void* VAR_8) {
   const char* VAR_9 = FUNC_3(FUNC_8(FUNC_4(VAR_7)));
   XMLRPC_VALUE VAR_10 = ((void*)0);


   FUNC_9(VAR_6, VAR_8);

   if(VAR_9) {
      server_method* VAR_11 = FUNC_10(VAR_6, VAR_9);
      if(VAR_11 && VAR_11->desc) {
         XMLRPC_VALUE VAR_12 = FUNC_2(((void*)0), VAR_5);
         XMLRPC_VALUE VAR_13, VAR_14, VAR_15, VAR_16;
         const char* VAR_17;


         VAR_10 = FUNC_2(((void*)0), VAR_5);


         VAR_15 = FUNC_6(VAR_11->desc, VAR_2);
         VAR_16 = FUNC_8( VAR_15 );


         while(VAR_16) {

            VAR_17 = FUNC_5(FUNC_8(
                                                 FUNC_6(VAR_16, VAR_1)),
                                                VAR_3);
            FUNC_0(VAR_12,
                                    FUNC_1(((void*)0),
                                                             VAR_17 ? VAR_17 : FUNC_11(VAR_4, 0),
                                    0));


            VAR_14 = FUNC_6(VAR_16, VAR_0);
            VAR_13 = FUNC_8(VAR_14);


            while(VAR_13) {
               FUNC_0(VAR_12,
                                       FUNC_1(((void*)0),
                                                                FUNC_5(VAR_13, VAR_3),
                                                                0));
               VAR_13 = FUNC_7(VAR_14);
            }


            FUNC_0(VAR_10, VAR_12);

            VAR_16 = FUNC_7( VAR_15 );
         }
      }
   }

   return VAR_10;
}
