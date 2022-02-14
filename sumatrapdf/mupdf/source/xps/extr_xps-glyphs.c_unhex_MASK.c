
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0)
{
 if (VAR_0 >= 'A' && VAR_0 <= 'F') return VAR_0 - 'A' + 0xA;
 if (VAR_0 >= 'a' && VAR_0 <= 'f') return VAR_0 - 'a' + 0xA;
 if (VAR_0 >= '0' && VAR_0 <= '9') return VAR_0 - '0';
 return 0;
}
