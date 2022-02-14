
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_3__ {struct device* dev; } ;


 int FUNC_0 (struct device*,char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(struct device *VAR_1)
{
 int VAR_2;

 VAR_0.dev = VAR_1;
 VAR_2 = FUNC_1(&VAR_0);
 if (VAR_2)
  FUNC_0(VAR_1, "Unable to register DSP with platform driver\n");

 return VAR_2;
}
