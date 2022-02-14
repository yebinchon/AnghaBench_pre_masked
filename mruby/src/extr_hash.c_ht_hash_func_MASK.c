
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t capa; } ;
typedef TYPE_1__ segindex ;
typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_5__ {TYPE_1__* index; } ;
typedef TYPE_2__ htable ;
typedef enum mrb_vtype { ____Placeholder_mrb_vtype } mrb_vtype ;


 int VAR_0 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,char*) ;
 size_t FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static size_t
FUNC_6(mrb_state *VAR_1, htable *VAR_2, mrb_value VAR_3)
{
  enum mrb_vtype VAR_4 = FUNC_5(VAR_3);
  mrb_value VAR_5;
  size_t VAR_6;
  segindex *VAR_7 = VAR_2->index;
  size_t VAR_8 = VAR_7 ? VAR_7->capa : 0;

  switch (VAR_4) {
  case 130:
    VAR_6 = FUNC_4(VAR_1, VAR_3);
    break;

  case 128:
  case 133:
  case 129:
  case 132:

  case 131:

    VAR_6 = (size_t)FUNC_2(VAR_3);
    break;

  default:
    VAR_5 = FUNC_1(VAR_1, VAR_3, "hash", 0);
    VAR_6 = (size_t)VAR_2 ^ (size_t)FUNC_0(VAR_5);
    break;
  }
  if (VAR_7 && (VAR_7 != VAR_2->index || VAR_8 != VAR_7->capa)) {
    FUNC_3(VAR_1, VAR_0, "hash modified");
  }
  return ((VAR_6)^((VAR_6)<<2)^((VAR_6)>>2));
}
