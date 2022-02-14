
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dim_stats {scalar_t__ cpms; scalar_t__ cpe_ratio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct dim_stats *VAR_3,
      struct dim_stats *VAR_4)
{

 if (!VAR_4->cpms)
  return VAR_1;

 if (FUNC_0(VAR_3->cpms, VAR_4->cpms))
  return (VAR_3->cpms > VAR_4->cpms) ? VAR_0 :
      VAR_2;

 if (FUNC_0(VAR_3->cpe_ratio, VAR_4->cpe_ratio))
  return (VAR_3->cpe_ratio > VAR_4->cpe_ratio) ? VAR_0 :
      VAR_2;

 return VAR_1;
}
