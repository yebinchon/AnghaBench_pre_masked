
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 int * VAR_6 ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static void FUNC_6()
{
 FUNC_5(VAR_2, "Blocking some signals before reexec");
 if (0 > FUNC_3()) {
  FUNC_5(VAR_5, "concurrent reloads may be unstable");
 }

 FUNC_5(VAR_3, "reloading: execvp(\"%s\", {\"%s\""
   "%s%s%s" "%s%s%s" "%s%s%s" "%s%s%s" "%s%s%s"
   "%s%s%s" "%s%s%s" "%s%s%s" "%s%s%s" "%s%s%s"
  "})",
  VAR_6[0], VAR_6[0],
  FUNC_4(1),
  FUNC_4(2),
  FUNC_4(3),
  FUNC_4(4),
  FUNC_4(5),
  FUNC_4(6),
  FUNC_4(7),
  FUNC_4(8),
  FUNC_4(9),
  FUNC_4(10)
 );

 FUNC_2(VAR_0);
 FUNC_0(VAR_6[0], VAR_6);
 FUNC_5(VAR_4, "failed to reload: execvp() failed");
 FUNC_1(VAR_1);
}
