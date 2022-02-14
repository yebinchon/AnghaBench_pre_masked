
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_2, size_t VAR_3)
{
  if (VAR_3 >= VAR_1) {
    FUNC_0(VAR_2, VAR_0, "symbol length too long");
  }
}
