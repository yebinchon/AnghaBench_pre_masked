
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int name; } ;
typedef TYPE_1__ Keyword ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1){
  const Keyword *VAR_2 = VAR_0, *VAR_3 = VAR_1;
  int VAR_4, VAR_5 = FUNC_1( VAR_2->len, VAR_3->len );

  if ((VAR_4 = FUNC_0( VAR_2->name, VAR_3->name, VAR_5 ))) return VAR_4;
  if (VAR_2->len < VAR_3->len) return -1;
  else if (VAR_2->len > VAR_3->len) return 1;
  return 0;
}
