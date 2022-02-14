
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw20k2 {int mic_source; } ;
struct hw {int dummy; } ;


 int FUNC_0 (struct hw*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct hw *VAR_0, int VAR_1)
{
 struct hw20k2 *VAR_2 = (struct hw20k2 *)VAR_0;

 if (VAR_1 == VAR_2->mic_source)
  return 0;

 switch (VAR_1) {
 case 0:
  FUNC_0(VAR_0, 0, 0);
  break;
 case 1:
  FUNC_0(VAR_0, 1, 0);
  break;
 case 2:
  FUNC_0(VAR_0, 3, 0);
  break;
 default:
  return 0;
 }

 VAR_2->mic_source = VAR_1;

 return 1;
}
