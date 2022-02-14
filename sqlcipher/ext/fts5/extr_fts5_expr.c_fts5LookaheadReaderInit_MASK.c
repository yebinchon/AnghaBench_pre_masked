
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int n; int const* a; } ;
typedef TYPE_1__ Fts5LookaheadReader ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_2(
  const u8 *VAR_0, int VAR_1,
  Fts5LookaheadReader *VAR_2
){
  FUNC_1(VAR_2, 0, sizeof(Fts5LookaheadReader));
  VAR_2->a = VAR_0;
  VAR_2->n = VAR_1;
  FUNC_0(VAR_2);
  return FUNC_0(VAR_2);
}
