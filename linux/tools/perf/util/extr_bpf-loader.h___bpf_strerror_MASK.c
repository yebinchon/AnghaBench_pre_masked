
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static inline int
FUNC_1(char *VAR_0, size_t VAR_1)
{
 if (!VAR_1)
  return 0;
 FUNC_0(VAR_0,
  "ERROR: eBPF object loading is disabled during compiling.\n",
  VAR_1);
 VAR_0[VAR_1 - 1] = '\0';
 return 0;
}
