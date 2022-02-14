
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {char const* zJContent; } ;
struct TYPE_8__ {TYPE_1__ u; scalar_t__ n; scalar_t__ jnFlags; scalar_t__ eType; } ;
struct TYPE_7__ {size_t nNode; size_t nAlloc; TYPE_3__* aNode; } ;
typedef TYPE_2__ JsonParse ;
typedef TYPE_3__ JsonNode ;


 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__,char const*) ;

__attribute__((used)) static int FUNC_1(
  JsonParse *VAR_0,
  u32 VAR_1,
  u32 VAR_2,
  const char *VAR_3
){
  JsonNode *VAR_4;
  if( VAR_0->nNode>=VAR_0->nAlloc ){
    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  }
  VAR_4 = &VAR_0->aNode[VAR_0->nNode];
  VAR_4->eType = (u8)VAR_1;
  VAR_4->jnFlags = 0;
  VAR_4->n = VAR_2;
  VAR_4->u.zJContent = VAR_3;
  return VAR_0->nNode++;
}
