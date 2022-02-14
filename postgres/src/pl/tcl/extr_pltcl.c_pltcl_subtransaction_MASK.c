
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
typedef int ResourceOwner ;
typedef int MemoryContext ;
typedef int ClientData ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int *,int * const,int ) ;
 int FUNC_5 (int *,int,int * const*,char*) ;

__attribute__((used)) static int
FUNC_6(ClientData VAR_3, Tcl_Interp *VAR_4,
      int VAR_5, Tcl_Obj *const VAR_6[])
{
 MemoryContext VAR_7 = VAR_0;
 ResourceOwner VAR_8 = VAR_1;
 int VAR_9;

 if (VAR_5 != 2)
 {
  FUNC_5(VAR_4, 1, VAR_6, "command");
  return VAR_2;
 }






 FUNC_0(((void*)0));
 FUNC_1(VAR_7);

 VAR_9 = FUNC_4(VAR_4, VAR_6[1], 0);

 if (VAR_9 == VAR_2)
 {

  FUNC_3();
 }
 else
 {

  FUNC_2();
 }


 FUNC_1(VAR_7);
 VAR_1 = VAR_8;

 return VAR_9;
}
