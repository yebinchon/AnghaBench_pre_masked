
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(const unsigned char *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 if (!VAR_2)
  VAR_0 += VAR_1;
 for (; VAR_1 > 0; VAR_1--)
  VAR_3 = (VAR_3 << 8) | (VAR_2 ? *VAR_0++ : *--VAR_0);
 return VAR_3;
}
