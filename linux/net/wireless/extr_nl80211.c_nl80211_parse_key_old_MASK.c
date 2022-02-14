
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_2__ {void* cipher; void* seq_len; void* seq; void* key_len; void* key; } ;
struct key_parse {int def; int defmgmt; int def_uni; int def_multi; void* type; TYPE_1__ p; int idx; } ;
struct genl_info {int extack; scalar_t__* attrs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct nlattr**,int,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct genl_info *VAR_12, struct key_parse *VAR_13)
{
 if (VAR_12->attrs[VAR_1]) {
  VAR_13->p.key = FUNC_0(VAR_12->attrs[VAR_1]);
  VAR_13->p.key_len = FUNC_3(VAR_12->attrs[VAR_1]);
 }

 if (VAR_12->attrs[VAR_6]) {
  VAR_13->p.seq = FUNC_0(VAR_12->attrs[VAR_6]);
  VAR_13->p.seq_len = FUNC_3(VAR_12->attrs[VAR_6]);
 }

 if (VAR_12->attrs[VAR_5])
  VAR_13->idx = FUNC_2(VAR_12->attrs[VAR_5]);

 if (VAR_12->attrs[VAR_0])
  VAR_13->p.cipher = FUNC_1(VAR_12->attrs[VAR_0]);

 VAR_13->def = !!VAR_12->attrs[VAR_2];
 VAR_13->defmgmt = !!VAR_12->attrs[VAR_3];

 if (VAR_13->def) {
  VAR_13->def_uni = 1;
  VAR_13->def_multi = 1;
 }
 if (VAR_13->defmgmt)
  VAR_13->def_multi = 1;

 if (VAR_12->attrs[VAR_7])
  VAR_13->type = FUNC_1(VAR_12->attrs[VAR_7]);

 if (VAR_12->attrs[VAR_4]) {
  struct nlattr *VAR_14[VAR_10];
  int VAR_15 = FUNC_4(VAR_14,
            VAR_10 - 1,
            VAR_12->attrs[VAR_4],
            VAR_11,
            VAR_12->extack);
  if (VAR_15)
   return VAR_15;

  VAR_13->def_uni = VAR_14[VAR_9];
  VAR_13->def_multi = VAR_14[VAR_8];
 }

 return 0;
}
