
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
struct TYPE_4__ {TYPE_1__* fcinfo; } ;
struct TYPE_3__ {int isnull; } ;
typedef TYPE_1__* FunctionCallInfo ;
typedef int ClientData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int * const*,char*) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int
FUNC_3(ClientData VAR_3, Tcl_Interp *VAR_4,
     int VAR_5, Tcl_Obj *const VAR_6[])
{
 FunctionCallInfo VAR_7 = VAR_2->fcinfo;




 if (VAR_5 != 1)
 {
  FUNC_2(VAR_4, 1, VAR_6, "");
  return VAR_0;
 }




 if (VAR_7 == ((void*)0))
 {
  FUNC_1(VAR_4,
       FUNC_0("return_null cannot be used in triggers", -1));
  return VAR_0;
 }





 VAR_7->isnull = 1;

 return VAR_1;
}
