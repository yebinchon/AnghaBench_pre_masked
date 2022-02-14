
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2tp_tunnel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct l2tp_tunnel const*) ;

__attribute__((used)) static int FUNC_1(const struct l2tp_tunnel *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 <= VAR_0)
  return 1500 - VAR_0;

 return VAR_2 - VAR_0;
}
