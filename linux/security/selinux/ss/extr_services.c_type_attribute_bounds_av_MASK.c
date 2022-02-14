
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct type_datum {int bounds; } ;
struct policydb {struct type_datum** type_val_to_struct; } ;
struct context {int type; } ;
struct av_decision {int allowed; } ;
typedef int lo_tcontext ;
typedef int lo_scontext ;
typedef int lo_avd ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct policydb*,struct context*,struct context*,int ,struct av_decision*,int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct context*,struct context*,int) ;
 int FUNC_4 (struct av_decision*,int ,int) ;
 int FUNC_5 (struct policydb*,struct context*,struct context*,int ,int,char*) ;

__attribute__((used)) static void FUNC_6(struct policydb *VAR_0,
         struct context *VAR_1,
         struct context *VAR_2,
         u16 VAR_3,
         struct av_decision *VAR_4)
{
 struct context VAR_5;
 struct context VAR_6, *VAR_7 = VAR_2;
 struct av_decision VAR_8;
 struct type_datum *VAR_9;
 struct type_datum *VAR_10;
 u32 VAR_11 = 0;

 VAR_9 = VAR_0->type_val_to_struct[VAR_1->type - 1];
 FUNC_0(!VAR_9);

 if (!VAR_9->bounds)
  return;

 VAR_10 = VAR_0->type_val_to_struct[VAR_2->type - 1];
 FUNC_0(!VAR_10);

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));

 FUNC_3(&VAR_5, VAR_1, sizeof(VAR_5));
 VAR_5.type = VAR_9->bounds;

 if (VAR_10->bounds) {
  FUNC_3(&VAR_6, VAR_2, sizeof(VAR_6));
  VAR_6.type = VAR_10->bounds;
  VAR_7 = &VAR_6;
 }

 FUNC_1(VAR_0, &VAR_5,
      VAR_7,
      VAR_3,
      &VAR_8,
      ((void*)0));

 VAR_11 = ~VAR_8.allowed & VAR_4->allowed;

 if (FUNC_2(!VAR_11))
  return;


 VAR_4->allowed &= ~VAR_11;


 FUNC_5(VAR_0, VAR_1, VAR_2,
    VAR_3, VAR_11, "bounds");
}
