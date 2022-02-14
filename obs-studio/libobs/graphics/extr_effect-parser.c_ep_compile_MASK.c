
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t num; } ;
struct TYPE_4__ {size_t num; } ;
struct effect_parser {TYPE_2__ techniques; TYPE_1__ params; TYPE_3__* effect; } ;
struct TYPE_6__ {int techniques; int params; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (struct effect_parser*,size_t) ;
 int FUNC_4 (struct effect_parser*,size_t) ;

__attribute__((used)) static bool FUNC_5(struct effect_parser *VAR_1)
{
 bool VAR_2 = 1;
 size_t VAR_3;

 FUNC_0(VAR_1->effect);

 FUNC_2(VAR_1->effect->params, VAR_1->params.num);
 FUNC_2(VAR_1->effect->techniques, VAR_1->techniques.num);





 for (VAR_3 = 0; VAR_3 < VAR_1->params.num; VAR_3++)
  FUNC_3(VAR_1, VAR_3);





 for (VAR_3 = 0; VAR_3 < VAR_1->techniques.num; VAR_3++) {
  if (!FUNC_4(VAR_1, VAR_3))
   VAR_2 = 0;
 }

 return VAR_2;
}
