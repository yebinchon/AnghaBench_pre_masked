
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
union jr_entry {TYPE_1__ prefix; } ;
struct jit_buf_desc {int dummy; } ;






 union jr_entry* FUNC_0 (struct jit_buf_desc*) ;
 int FUNC_1 (struct jit_buf_desc*,union jr_entry*) ;
 int FUNC_2 (struct jit_buf_desc*,union jr_entry*) ;
 int FUNC_3 (struct jit_buf_desc*,union jr_entry*) ;
 int FUNC_4 (struct jit_buf_desc*,union jr_entry*) ;

__attribute__((used)) static int
FUNC_5(struct jit_buf_desc *VAR_0)
{
 union jr_entry *VAR_1;
 int VAR_2 = 0;

 while ((VAR_1 = FUNC_0(VAR_0))) {
  switch(VAR_1->prefix.id) {
  case 130:
   VAR_2 = FUNC_1(VAR_0, VAR_1);
   break;
  case 129:
   VAR_2 = FUNC_2(VAR_0, VAR_1);
   break;
  case 131:
   VAR_2 = FUNC_3(VAR_0, VAR_1);
   break;
  case 128:
   VAR_2 = FUNC_4(VAR_0, VAR_1);
   break;
  default:
   VAR_2 = 0;
   continue;
  }
 }
 return VAR_2;
}
