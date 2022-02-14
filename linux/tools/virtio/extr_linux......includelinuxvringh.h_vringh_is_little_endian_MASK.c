
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vringh {scalar_t__ little_endian; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static inline bool FUNC_1(const struct vringh *VAR_0)
{
 return VAR_0->little_endian ||
  FUNC_0();
}
