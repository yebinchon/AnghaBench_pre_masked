
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double FUNC_0(const double VAR_0)
{
 const double VAR_1 = VAR_0 < 0.0 ? -VAR_0 : VAR_0;

 if (VAR_1 <= 0.5) return (- 2.0 * VAR_1 * VAR_1 + 1);
 if (VAR_1 <= 1.5) return (VAR_1 * VAR_1 - 2.5* VAR_1 + 1.5);
 return 0.0;
}
