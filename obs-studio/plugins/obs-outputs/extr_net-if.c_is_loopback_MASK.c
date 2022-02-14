
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddrs {char* ifa_name; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static inline bool FUNC_1(struct ifaddrs *VAR_0)
{
 const char *VAR_1 = VAR_0->ifa_name;
 return VAR_1 && (FUNC_0(VAR_1, "lo") == 0 || FUNC_0(VAR_1, "lo0") == 0);
}
