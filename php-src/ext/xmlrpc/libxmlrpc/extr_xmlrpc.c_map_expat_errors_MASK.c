
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
typedef TYPE_1__* XML_ELEM_ERROR ;
typedef int * XMLRPC_VALUE ;
typedef int XMLRPC_ERROR_CODE ;
struct TYPE_3__ {int parser_code; int byte_index; int column; int line; } ;


 int * FUNC_0 (int ,char*) ;


 int FUNC_1 (char*,int,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static XMLRPC_VALUE FUNC_2(XML_ELEM_ERROR VAR_3) {
   XMLRPC_VALUE VAR_4 = ((void*)0);
   if(VAR_3) {
      XMLRPC_ERROR_CODE VAR_5;
      char VAR_6[1024];
      FUNC_1(VAR_6, sizeof(VAR_6),
               "error occurred at line %ld, column %ld, byte index %ld",
      VAR_3->line, VAR_3->column, VAR_3->byte_index);


      switch(VAR_3->parser_code) {
      case 128:
         VAR_5 = VAR_1;
         break;
      case 129:
         VAR_5 = VAR_0;
         break;
      default:
         VAR_5 = VAR_2;
         break;
      }
      VAR_4 = FUNC_0(VAR_5, VAR_6);
   }
   return VAR_4;
}
