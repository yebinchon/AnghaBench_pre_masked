
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pickraw; } ;
typedef int FILE ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 size_t const FUNC_2 (char const*,int,size_t const,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(const char *VAR_2, const size_t VAR_3)
{
 if (VAR_0.pickraw || !VAR_1)
  return;

 FILE *VAR_4 = FUNC_1(VAR_1, "w");

 if (VAR_4) {
  if (FUNC_2(VAR_2, 1, VAR_3, VAR_4) != VAR_3)
   FUNC_3(((void*)0));
  FUNC_0(VAR_4);
 } else
  FUNC_3(((void*)0));
}
