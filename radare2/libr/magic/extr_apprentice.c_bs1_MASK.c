
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* ut32 ;
struct TYPE_2__ {void* q; } ;
struct r_magic {void* num_mask; TYPE_1__ value; void* str_flags; void* str_range; int type; void* lineno; void* in_offset; void* offset; int cont_level; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(struct r_magic *VAR_0) {
 VAR_0->cont_level = FUNC_1(VAR_0->cont_level);
 VAR_0->offset = FUNC_2((ut32)VAR_0->offset);
 VAR_0->in_offset = FUNC_2((ut32)VAR_0->in_offset);
 VAR_0->lineno = FUNC_2((ut32)VAR_0->lineno);
 if (FUNC_0 (VAR_0->type)) {
  VAR_0->str_range = FUNC_2(VAR_0->str_range);
  VAR_0->str_flags = FUNC_2(VAR_0->str_flags);
 } else {
  VAR_0->value.q = FUNC_3(VAR_0->value.q);
  VAR_0->num_mask = FUNC_3(VAR_0->num_mask);
 }
}
