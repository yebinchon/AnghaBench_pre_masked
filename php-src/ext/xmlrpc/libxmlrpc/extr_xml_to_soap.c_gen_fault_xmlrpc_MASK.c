
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_element ;
typedef int XMLRPC_VALUE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static XMLRPC_VALUE FUNC_5(XMLRPC_VALUE VAR_4, xml_element* VAR_5) {
 XMLRPC_VALUE VAR_6 = FUNC_0(VAR_4);
 XMLRPC_VALUE VAR_7 = FUNC_4(VAR_6, VAR_2);
 XMLRPC_VALUE VAR_8 = FUNC_4(VAR_6, VAR_3);

 FUNC_2(VAR_7, VAR_0, 0);
 FUNC_2(VAR_8, VAR_1, 0);


 switch (FUNC_1(VAR_7)) {
 case -32700:
 case -32701:
 case -32702:
 case -32600:
 case -32601:
 case -32602:
  FUNC_3(VAR_7, "SOAP-ENV:Client", 0);
  break;
 case -32603:
 case -32500:
 case -32400:
 case -32300:
  FUNC_3(VAR_7, "SOAP-ENV:Server", 0);
  break;
 }
 return VAR_6;
}
