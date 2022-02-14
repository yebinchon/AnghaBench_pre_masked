
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_1(const char *VAR_2)
{
 if (!VAR_1) {
  FUNC_0(VAR_0, "%s: called while not in a graphics context",
       VAR_2);
  return 0;
 }

 return 1;
}
