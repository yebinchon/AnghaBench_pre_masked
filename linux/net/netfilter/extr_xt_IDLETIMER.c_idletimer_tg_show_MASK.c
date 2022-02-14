
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long expires; } ;
struct idletimer_tg {TYPE_2__ timer; } ;
struct TYPE_3__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct idletimer_tg* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,...) ;
 scalar_t__ FUNC_5 (unsigned long,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 struct idletimer_tg *VAR_5;
 unsigned long VAR_6 = 0;

 FUNC_2(&VAR_1);

 VAR_5 = FUNC_0(VAR_3->attr.name);
 if (VAR_5)
  VAR_6 = VAR_5->timer.expires;

 FUNC_3(&VAR_1);

 if (FUNC_5(VAR_6, VAR_0))
  return FUNC_4(VAR_4, "%u\n",
          FUNC_1(VAR_6 - VAR_0) / 1000);

 return FUNC_4(VAR_4, "0\n");
}
