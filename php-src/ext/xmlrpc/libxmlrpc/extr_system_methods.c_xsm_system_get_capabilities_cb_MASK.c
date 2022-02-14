
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XMLRPC_VALUE ;
typedef int XMLRPC_SERVER ;
typedef int XMLRPC_REQUEST ;


 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,char*,int ) ;
 int VAR_0 ;

XMLRPC_VALUE FUNC_4(XMLRPC_SERVER VAR_1, XMLRPC_REQUEST VAR_2, void* VAR_3) {
   XMLRPC_VALUE VAR_4 = FUNC_1(0, VAR_0);
   XMLRPC_VALUE VAR_5 = FUNC_1("faults_interop", VAR_0);
   XMLRPC_VALUE VAR_6 = FUNC_1("introspection", VAR_0);


   FUNC_3(VAR_5, "specURL", "http://xmlrpc-epi.sourceforge.net/specs/rfc.fault_codes.php", 0);
   FUNC_2(VAR_5, "specVersion", 20010516);


   FUNC_3(VAR_6, "specURL", "http://xmlrpc-epi.sourceforge.net/specs/rfc.introspection.php", 0);
   FUNC_2(VAR_6, "specVersion", 20010516);

   FUNC_0(VAR_4,
                            VAR_5,
                            VAR_6,
                            ((void*)0));

   return VAR_4;

}
