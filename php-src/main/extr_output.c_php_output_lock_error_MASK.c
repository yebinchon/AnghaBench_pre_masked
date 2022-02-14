
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 () ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_3(int VAR_3)
{

 if (VAR_3 && FUNC_0(VAR_1) && FUNC_0(VAR_2)) {

  FUNC_2();
  FUNC_1("ref.outcontrol", VAR_0, "Cannot use output buffering in output buffering display handlers");
  return 1;
 }
 return 0;
}
