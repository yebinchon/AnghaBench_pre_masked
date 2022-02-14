
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_property {scalar_t__ type; struct obs_property* long_desc; struct obs_property* desc; struct obs_property* name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct obs_property*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct obs_property*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct obs_property *VAR_7)
{
 if (VAR_7->type == VAR_5)
  FUNC_7(FUNC_4(VAR_7));
 else if (VAR_7->type == VAR_6)
  FUNC_8(FUNC_4(VAR_7));
 else if (VAR_7->type == VAR_0)
  FUNC_1(FUNC_4(VAR_7));
 else if (VAR_7->type == VAR_2)
  FUNC_3(FUNC_4(VAR_7));
 else if (VAR_7->type == VAR_3)
  FUNC_5(FUNC_4(VAR_7));
 else if (VAR_7->type == VAR_4)
  FUNC_6(FUNC_4(VAR_7));
 else if (VAR_7->type == VAR_1)
  FUNC_2(FUNC_4(VAR_7));

 FUNC_0(VAR_7->name);
 FUNC_0(VAR_7->desc);
 FUNC_0(VAR_7->long_desc);
 FUNC_0(VAR_7);
}
