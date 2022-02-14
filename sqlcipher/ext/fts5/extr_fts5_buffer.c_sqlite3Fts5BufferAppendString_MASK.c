
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int n; } ;
typedef TYPE_1__ Fts5Buffer ;


 int FUNC_0 (int*,TYPE_1__*,int,int const*) ;
 scalar_t__ FUNC_1 (char const*) ;

void FUNC_2(
  int *VAR_0,
  Fts5Buffer *VAR_1,
  const char *VAR_2
){
  int VAR_3 = (int)FUNC_1(VAR_2);
  FUNC_0(VAR_0, VAR_1, VAR_3+1, (const u8*)VAR_2);
  VAR_1->n--;
}
