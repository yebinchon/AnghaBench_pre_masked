
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_2__ {void* mode; void* cipher; void* seq_len; void* seq; void* key_len; void* key; } ;
struct key_parse {int def; int defmgmt; int def_uni; int def_multi; TYPE_1__ p; void* type; void* idx; } ;
struct genl_info {int extack; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_0 (struct nlattr*) ;
 void* FUNC_1 (struct nlattr*) ;
 void* FUNC_2 (struct nlattr*) ;
 void* FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr**,int,struct nlattr*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct genl_info *VAR_15, struct nlattr *VAR_16,
     struct key_parse *VAR_17)
{
 struct nlattr *VAR_18[VAR_8 + 1];
 int VAR_19 = FUNC_4(VAR_18, VAR_8, VAR_16,
           VAR_14,
           VAR_15->extack);
 if (VAR_19)
  return VAR_19;

 VAR_17->def = !!VAR_18[VAR_2];
 VAR_17->defmgmt = !!VAR_18[VAR_3];

 if (VAR_17->def) {
  VAR_17->def_uni = 1;
  VAR_17->def_multi = 1;
 }
 if (VAR_17->defmgmt)
  VAR_17->def_multi = 1;

 if (VAR_18[VAR_7])
  VAR_17->idx = FUNC_2(VAR_18[VAR_7]);

 if (VAR_18[VAR_1]) {
  VAR_17->p.key = FUNC_0(VAR_18[VAR_1]);
  VAR_17->p.key_len = FUNC_3(VAR_18[VAR_1]);
 }

 if (VAR_18[VAR_10]) {
  VAR_17->p.seq = FUNC_0(VAR_18[VAR_10]);
  VAR_17->p.seq_len = FUNC_3(VAR_18[VAR_10]);
 }

 if (VAR_18[VAR_0])
  VAR_17->p.cipher = FUNC_1(VAR_18[VAR_0]);

 if (VAR_18[VAR_11])
  VAR_17->type = FUNC_1(VAR_18[VAR_11]);

 if (VAR_18[VAR_4]) {
  struct nlattr *VAR_20[VAR_12];

  VAR_19 = FUNC_4(VAR_20,
        VAR_12 - 1,
        VAR_18[VAR_4],
        VAR_13,
        VAR_15->extack);
  if (VAR_19)
   return VAR_19;

  VAR_17->def_uni = VAR_20[VAR_6];
  VAR_17->def_multi = VAR_20[VAR_5];
 }

 if (VAR_18[VAR_9])
  VAR_17->p.mode = FUNC_2(VAR_18[VAR_9]);

 return 0;
}
