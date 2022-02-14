
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gs_sample_filter { ____Placeholder_gs_sample_filter } gs_sample_filter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

enum gs_sample_filter FUNC_2(const char *VAR_9)
{
 if (FUNC_0(VAR_9, "Anisotropy") == 0)
  return VAR_0;

 else if (FUNC_0(VAR_9, "Point") == 0 ||
   FUNC_1(VAR_9, "MIN_MAG_MIP_POINT") == 0)
  return VAR_8;

 else if (FUNC_0(VAR_9, "Linear") == 0 ||
   FUNC_1(VAR_9, "MIN_MAG_MIP_LINEAR") == 0)
  return VAR_1;

 else if (FUNC_1(VAR_9, "MIN_MAG_POINT_MIP_LINEAR") == 0)
  return VAR_5;

 else if (FUNC_1(VAR_9, "MIN_POINT_MAG_LINEAR_MIP_POINT") == 0)
  return VAR_6;

 else if (FUNC_1(VAR_9, "MIN_POINT_MAG_MIP_LINEAR") == 0)
  return VAR_7;

 else if (FUNC_1(VAR_9, "MIN_LINEAR_MAG_MIP_POINT") == 0)
  return VAR_2;

 else if (FUNC_1(VAR_9, "MIN_LINEAR_MAG_POINT_MIP_LINEAR") == 0)
  return VAR_3;

 else if (FUNC_1(VAR_9, "MIN_MAG_LINEAR_MIP_POINT") == 0)
  return VAR_4;

 return VAR_1;
}
