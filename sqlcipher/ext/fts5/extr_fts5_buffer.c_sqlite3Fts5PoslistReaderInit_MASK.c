
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int n; int bEof; int const* a; } ;
typedef TYPE_1__ Fts5PoslistReader ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(
  const u8 *VAR_0, int VAR_1,
  Fts5PoslistReader *VAR_2
){
  FUNC_0(VAR_2, 0, sizeof(*VAR_2));
  VAR_2->a = VAR_0;
  VAR_2->n = VAR_1;
  FUNC_1(VAR_2);
  return VAR_2->bEof;
}
