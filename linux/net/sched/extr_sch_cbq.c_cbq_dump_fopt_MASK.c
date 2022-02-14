
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tc_cbq_fopt {int defchange; scalar_t__ defmap; int split; } ;
struct sk_buff {int len; } ;
struct cbq_class {scalar_t__ defmap; TYPE_2__* split; } ;
typedef int opt ;
struct TYPE_3__ {int classid; } ;
struct TYPE_4__ {TYPE_1__ common; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int,struct tc_cbq_fopt*) ;
 int FUNC_1 (struct sk_buff*,unsigned char*) ;
 unsigned char* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, struct cbq_class *VAR_2)
{
 unsigned char *VAR_3 = FUNC_2(VAR_1);
 struct tc_cbq_fopt VAR_4;

 if (VAR_2->split || VAR_2->defmap) {
  VAR_4.split = VAR_2->split ? VAR_2->split->common.classid : 0;
  VAR_4.defmap = VAR_2->defmap;
  VAR_4.defchange = ~0;
  if (FUNC_0(VAR_1, VAR_0, sizeof(VAR_4), &VAR_4))
   goto nla_put_failure;
 }
 return VAR_1->len;

nla_put_failure:
 FUNC_1(VAR_1, VAR_3);
 return -1;
}
