
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; scalar_t__ array; } ;
struct decl_info {int name; TYPE_1__ params; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct decl_info*,int ,int) ;

__attribute__((used)) static inline void FUNC_4(struct decl_info *VAR_0)
{
 if (VAR_0) {
  for (size_t VAR_1 = 0; VAR_1 < VAR_0->params.num; VAR_1++)
   FUNC_2(VAR_0->params.array + VAR_1);
  FUNC_1(VAR_0->params);

  FUNC_0(VAR_0->name);
  FUNC_3(VAR_0, 0, sizeof(struct decl_info));
 }
}
