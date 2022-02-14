
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {scalar_t__ model; } ;
struct adc_conf {int mic20db; int input; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hw*,int ,int ) ;
 int FUNC_1 (struct hw*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hw *VAR_1, const struct adc_conf *VAR_2)
{
 if (VAR_1->model == VAR_0)
  return FUNC_0(VAR_1, VAR_2->input, VAR_2->mic20db);
 else
  return FUNC_1(VAR_1, VAR_2->input, VAR_2->mic20db);
}
