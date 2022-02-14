
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sw842_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sw842_param*,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct sw842_param *VAR_7, u8 VAR_8)
{
 int VAR_9;


 if (!VAR_8 || --VAR_8 > VAR_4)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_7, VAR_2, VAR_1);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_8, VAR_3);
 if (VAR_9)
  return VAR_9;

 if (VAR_5)
  FUNC_1(&VAR_6);

 return 0;
}
