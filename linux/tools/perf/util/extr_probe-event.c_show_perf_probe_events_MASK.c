
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strfilter {int dummy; } ;
struct TYPE_2__ {scalar_t__ cache; } ;


 int FUNC_0 (int,int,struct strfilter*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct strfilter*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_5 (int*,int*,int ) ;
 int FUNC_6 () ;

int FUNC_7(struct strfilter *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 FUNC_6();

 if (VAR_0.cache)
  return FUNC_4(VAR_1);

 VAR_4 = FUNC_3(0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_5(&VAR_2, &VAR_3, 0);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_2 >= 0)
  VAR_4 = FUNC_0(VAR_2, 1, VAR_1);
 if (VAR_3 >= 0 && VAR_4 >= 0)
  VAR_4 = FUNC_0(VAR_3, 0, VAR_1);
 if (VAR_2 > 0)
  FUNC_1(VAR_2);
 if (VAR_3 > 0)
  FUNC_1(VAR_3);
 FUNC_2();

 return VAR_4;
}
