
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
struct TYPE_4__ {TYPE_1__* fcinfo; } ;
struct TYPE_3__ {int nargs; } ;
typedef TYPE_1__* FunctionCallInfo ;
typedef int ClientData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int * const,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int,int * const*,char*) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int
FUNC_6(ClientData VAR_3, Tcl_Interp *VAR_4,
    int VAR_5, Tcl_Obj *const VAR_6[])
{
 int VAR_7;
 FunctionCallInfo VAR_8 = VAR_2->fcinfo;




 if (VAR_5 != 2)
 {
  FUNC_5(VAR_4, 1, VAR_6, "argno");
  return VAR_0;
 }




 if (VAR_8 == ((void*)0))
 {
  FUNC_4(VAR_4,
       FUNC_3("argisnull cannot be used in triggers", -1));
  return VAR_0;
 }




 if (FUNC_1(VAR_4, VAR_6[1], &VAR_7) != VAR_1)
  return VAR_0;




 VAR_7--;
 if (VAR_7 < 0 || VAR_7 >= VAR_8->nargs)
 {
  FUNC_4(VAR_4,
       FUNC_3("argno out of range", -1));
  return VAR_0;
 }




 FUNC_4(VAR_4, FUNC_2(FUNC_0(VAR_7)));
 return VAR_1;
}
