
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char const*) ;

__attribute__((used)) static inline bool FUNC_1(const void *VAR_1, const char *VAR_2,
        const char *VAR_3)
{
 if (!VAR_1) {
  FUNC_0(VAR_0, "%s: Null '%s' parameter", VAR_2, VAR_3);
  return 0;
 }

 return 1;
}
