
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct gs_effect_pass* array; } ;
struct gs_effect_technique {TYPE_1__ passes; } ;
struct gs_effect_pass {char* name; int section; } ;
struct TYPE_4__ {struct ep_pass* array; } ;
struct ep_technique {TYPE_2__ passes; } ;
struct ep_pass {int name; } ;
struct effect_parser {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,size_t,char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct effect_parser*,struct gs_effect_technique*,struct gs_effect_pass*,struct ep_pass*,size_t,int ) ;

__attribute__((used)) static bool FUNC_3(struct effect_parser *VAR_5,
       struct gs_effect_technique *VAR_6,
       struct ep_technique *VAR_7, size_t VAR_8)
{
 struct gs_effect_pass *VAR_9;
 struct ep_pass *VAR_10;
 bool VAR_11 = 1;

 VAR_9 = VAR_6->passes.array + VAR_8;
 VAR_10 = VAR_7->passes.array + VAR_8;

 VAR_9->name = FUNC_1(VAR_10->name);
 VAR_9->section = VAR_0;





 if (!FUNC_2(VAR_5, VAR_6, VAR_9, VAR_10, VAR_8,
        VAR_2)) {
  VAR_11 = 0;
  FUNC_0(VAR_4, "Pass (%zu) <%s> missing vertex shader!", VAR_8,
       VAR_9->name ? VAR_9->name : "");
 }
 if (!FUNC_2(VAR_5, VAR_6, VAR_9, VAR_10, VAR_8,
        VAR_1)) {
  VAR_11 = 0;
  FUNC_0(VAR_4, "Pass (%zu) <%s> missing pixel shader!", VAR_8,
       VAR_9->name ? VAR_9->name : "");
 }
 return VAR_11;
}
