
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xml_element ;
typedef TYPE_2__* XMLRPC_REQUEST ;
struct TYPE_7__ {scalar_t__ version; int xml_elem_opts; } ;
struct TYPE_8__ {TYPE_1__ output; } ;


 int * FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,int *,int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

char* FUNC_5(XMLRPC_REQUEST VAR_4, int* VAR_5) {
      char* VAR_6 = ((void*)0);
 if (VAR_4) {
  xml_element *VAR_7 = ((void*)0);
  if (VAR_4->output.version == VAR_2) {
   VAR_7 = FUNC_0 (VAR_4);
  }
  else if (VAR_4->output.version == VAR_0 ||
     VAR_4->output.version == VAR_1) {
   VAR_7 = FUNC_2 (VAR_4);
  }
  else if (VAR_4->output.version == VAR_3) {
   VAR_7 = FUNC_1 (VAR_4);
  }

      if(VAR_7) {
   VAR_6 =
   FUNC_4 (VAR_7,
             &VAR_4->output.xml_elem_opts,
             VAR_5);
         FUNC_3(VAR_7);
      }
   }
 return VAR_6;
}
