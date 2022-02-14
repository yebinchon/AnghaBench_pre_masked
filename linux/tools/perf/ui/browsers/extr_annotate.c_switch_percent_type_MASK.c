
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct annotation_options {int percent_type; } ;






 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct annotation_options *VAR_0, bool VAR_1)
{
 switch (VAR_0->percent_type) {
 case 130:
  if (VAR_1)
   VAR_0->percent_type = 128;
  else
   VAR_0->percent_type = 131;
  break;
 case 131:
  if (VAR_1)
   VAR_0->percent_type = 129;
  else
   VAR_0->percent_type = 130;
  break;
 case 128:
  if (VAR_1)
   VAR_0->percent_type = 130;
  else
   VAR_0->percent_type = 129;
  break;
 case 129:
  if (VAR_1)
   VAR_0->percent_type = 131;
  else
   VAR_0->percent_type = 128;
  break;
 default:
  FUNC_0(1);
 }
}
