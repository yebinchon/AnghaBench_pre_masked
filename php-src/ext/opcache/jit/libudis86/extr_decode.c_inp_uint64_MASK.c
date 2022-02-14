
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ud {int dummy; } ;


 int FUNC_0 (struct ud*) ;

__attribute__((used)) static uint64_t
FUNC_1(struct ud* VAR_0)
{
  uint64_t VAR_1, VAR_2;

  VAR_2 = FUNC_0(VAR_0);
  VAR_1 = FUNC_0(VAR_0);
  VAR_2 = VAR_2 | (VAR_1 << 8);
  VAR_1 = FUNC_0(VAR_0);
  VAR_2 = VAR_2 | (VAR_1 << 16);
  VAR_1 = FUNC_0(VAR_0);
  VAR_2 = VAR_2 | (VAR_1 << 24);
  VAR_1 = FUNC_0(VAR_0);
  VAR_2 = VAR_2 | (VAR_1 << 32);
  VAR_1 = FUNC_0(VAR_0);
  VAR_2 = VAR_2 | (VAR_1 << 40);
  VAR_1 = FUNC_0(VAR_0);
  VAR_2 = VAR_2 | (VAR_1 << 48);
  VAR_1 = FUNC_0(VAR_0);
  return VAR_2 | (VAR_1 << 56);
}
