
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_mgr {scalar_t__ is_hr_stereo; } ;
typedef enum pcxhr_clock_type { ____Placeholder_pcxhr_clock_type } pcxhr_clock_type ;


 int FUNC_0 (struct pcxhr_mgr*,int,int*) ;
 int FUNC_1 (struct pcxhr_mgr*,int,int*) ;

int FUNC_2(struct pcxhr_mgr *VAR_0,
        enum pcxhr_clock_type VAR_1,
        int *VAR_2)
{
 if (VAR_0->is_hr_stereo)
  return FUNC_0(VAR_0, VAR_1,
      VAR_2);
 else
  return FUNC_1(VAR_0, VAR_1,
          VAR_2);
}
