
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sst_algo_control {int * params; int max; } ;
struct device {int dummy; } ;
struct TYPE_3__ {scalar_t__ private_value; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (struct device*,int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3)
{
 int VAR_4 = 0;
 struct sst_algo_control *VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  VAR_5 = (struct sst_algo_control *)VAR_2[VAR_4].private_value;
  VAR_5->params = FUNC_1(VAR_3, VAR_5->max, VAR_1);
  if (VAR_5->params == ((void*)0))
   return -VAR_0;
 }
 return 0;
}
