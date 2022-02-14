
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {scalar_t__ rlim_cur; scalar_t__ rlim_max; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct rlimit*) ;
 int FUNC_2 (int ,struct rlimit*) ;

__attribute__((used)) static int FUNC_3(void)
{
 struct rlimit VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, &VAR_5);
 FUNC_0(VAR_6);

 if (VAR_5.rlim_cur != VAR_3 && VAR_5.rlim_cur < VAR_0) {
  VAR_5.rlim_cur = VAR_0;

  if (VAR_5.rlim_max != VAR_3 &&
      VAR_5.rlim_max < VAR_0)
   VAR_5.rlim_max = VAR_0;

  VAR_6 = FUNC_2(VAR_1, &VAR_5);
  FUNC_0(VAR_6);
 }

 VAR_6 = FUNC_1(VAR_2, &VAR_5);
 FUNC_0(VAR_6);

 if (VAR_5.rlim_cur != VAR_3 && VAR_5.rlim_cur < VAR_0) {
  VAR_5.rlim_cur = VAR_0;

  if (VAR_5.rlim_max != VAR_3 &&
      VAR_5.rlim_max < VAR_0)
   VAR_5.rlim_max = VAR_0;

  VAR_6 = FUNC_2(VAR_2, &VAR_5);
  FUNC_0(VAR_6);
 }

 return VAR_4;
}
