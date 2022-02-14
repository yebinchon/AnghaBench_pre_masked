
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_max ;
typedef int u64 ;
typedef int u32 ;
struct type_descriptor {int dummy; } ;
typedef int s64 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct type_descriptor*,void*) ;
 int FUNC_2 (struct type_descriptor*,void*) ;
 int FUNC_3 (char*,size_t,char*,int ,...) ;
 int FUNC_4 (struct type_descriptor*) ;
 scalar_t__ FUNC_5 (struct type_descriptor*) ;
 scalar_t__ FUNC_6 (struct type_descriptor*) ;

__attribute__((used)) static void FUNC_7(char *VAR_0, size_t VAR_1, struct type_descriptor *VAR_2,
   void *VAR_3)
{
 if (FUNC_5(VAR_2)) {
  if (FUNC_4(VAR_2) == 128) {
   FUNC_0(1);

  } else if (FUNC_6(VAR_2)) {
   FUNC_3(VAR_0, VAR_1, "%lld",
    (s64)FUNC_1(VAR_2, VAR_3));
  } else {
   FUNC_3(VAR_0, VAR_1, "%llu",
    (u64)FUNC_2(VAR_2, VAR_3));
  }
 }
}
