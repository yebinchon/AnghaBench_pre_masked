
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dim_stats {scalar_t__ bpms; scalar_t__ ppms; scalar_t__ epms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct dim_stats *VAR_3,
     struct dim_stats *VAR_4)
{
 if (!VAR_4->bpms)
  return VAR_3->bpms ? VAR_0 : VAR_1;

 if (FUNC_0(VAR_3->bpms, VAR_4->bpms))
  return (VAR_3->bpms > VAR_4->bpms) ? VAR_0 :
         VAR_2;

 if (!VAR_4->ppms)
  return VAR_3->ppms ? VAR_0 :
        VAR_1;

 if (FUNC_0(VAR_3->ppms, VAR_4->ppms))
  return (VAR_3->ppms > VAR_4->ppms) ? VAR_0 :
         VAR_2;

 if (!VAR_4->epms)
  return VAR_1;

 if (FUNC_0(VAR_3->epms, VAR_4->epms))
  return (VAR_3->epms < VAR_4->epms) ? VAR_0 :
         VAR_2;

 return VAR_1;
}
