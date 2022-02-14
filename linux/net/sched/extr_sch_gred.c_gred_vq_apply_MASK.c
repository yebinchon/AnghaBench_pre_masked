
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct nlattr {int dummy; } ;
struct gred_sched {TYPE_1__** tab; } ;
struct TYPE_2__ {void* red_flags; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct gred_sched *VAR_4, const struct nlattr *VAR_5)
{
 struct nlattr *VAR_6[VAR_2 + 1];
 u32 VAR_7;

 FUNC_1(VAR_6, VAR_2, VAR_5,
        VAR_3, ((void*)0));

 VAR_7 = FUNC_0(VAR_6[VAR_0]);

 if (VAR_6[VAR_1])
  VAR_4->tab[VAR_7]->red_flags = FUNC_0(VAR_6[VAR_1]);
}
