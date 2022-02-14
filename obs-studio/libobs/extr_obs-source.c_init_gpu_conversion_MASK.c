
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_source_frame {int full_range; int format; } ;
struct obs_source {int dummy; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct obs_source*,struct obs_source_frame const*) ;
 int FUNC_3 (struct obs_source*,struct obs_source_frame const*) ;
 int FUNC_4 (struct obs_source*,struct obs_source_frame const*) ;
 int FUNC_5 (struct obs_source*,struct obs_source_frame const*) ;
 int FUNC_6 (struct obs_source*,struct obs_source_frame const*) ;
 int FUNC_7 (struct obs_source*,struct obs_source_frame const*) ;
 int FUNC_8 (struct obs_source*,struct obs_source_frame const*) ;
 int FUNC_9 (struct obs_source*,struct obs_source_frame const*) ;
 int FUNC_10 (struct obs_source*,struct obs_source_frame const*) ;
 int FUNC_11 (struct obs_source*,struct obs_source_frame const*) ;
 int FUNC_12 (struct obs_source*,struct obs_source_frame const*) ;
 int FUNC_13 (struct obs_source*,struct obs_source_frame const*) ;

__attribute__((used)) static inline bool FUNC_14(struct obs_source *VAR_0,
           const struct obs_source_frame *VAR_1)
{
 switch (FUNC_1(VAR_1->format, VAR_1->full_range)) {
 case 136:
  return FUNC_4(VAR_0, VAR_1);

 case 140:
  return FUNC_7(VAR_0, VAR_1);

 case 138:
  return FUNC_9(VAR_0, VAR_1);

 case 129:
  return FUNC_3(VAR_0, VAR_1);

 case 135:
  return FUNC_11(VAR_0, VAR_1);

 case 132:
  return FUNC_13(VAR_0, VAR_1);

 case 128:
  return FUNC_12(VAR_0, VAR_1);

 case 131:
  return FUNC_2(VAR_0, VAR_1);

 case 139:
  return FUNC_6(VAR_0, VAR_1);

 case 137:
  return FUNC_8(VAR_0, VAR_1);

 case 134:
  return FUNC_10(VAR_0, VAR_1);

 case 133:
  return FUNC_5(VAR_0, VAR_1);

 case 130:
  FUNC_0(0 && "No conversion requested");
  break;
 }
 return 0;
}
