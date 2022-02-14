
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct data__file {int dummy; } ;
struct TYPE_2__ {scalar_t__ time_str; } ;


 int FUNC_0 (struct data__file*,char**) ;
 int FUNC_1 (struct data__file*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct data__file *VAR_1, char *VAR_2,
      char **VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2)
  VAR_4 = FUNC_0(VAR_1, VAR_3);
 else if (VAR_0.time_str)
  VAR_4 = FUNC_1(VAR_1);

 return VAR_4;
}
