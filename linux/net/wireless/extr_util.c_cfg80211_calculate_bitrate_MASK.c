
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rate_info {int flags; int legacy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rate_info*) ;
 int FUNC_1 (struct rate_info*) ;
 int FUNC_2 (struct rate_info*) ;
 int FUNC_3 (struct rate_info*) ;
 int FUNC_4 (struct rate_info*) ;

u32 FUNC_5(struct rate_info *VAR_5)
{
 if (VAR_5->flags & VAR_3)
  return FUNC_3(VAR_5);
 if (VAR_5->flags & VAR_0)
  return FUNC_0(VAR_5);
 if (VAR_5->flags & VAR_1)
  return FUNC_1(VAR_5);
 if (VAR_5->flags & VAR_4)
  return FUNC_4(VAR_5);
 if (VAR_5->flags & VAR_2)
  return FUNC_2(VAR_5);

 return VAR_5->legacy;
}
