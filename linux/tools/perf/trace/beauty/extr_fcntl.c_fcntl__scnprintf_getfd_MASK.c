
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*,size_t,char*,char*,...) ;

__attribute__((used)) static size_t FUNC_1(unsigned long VAR_0, char *VAR_1, size_t VAR_2, bool VAR_3)
{
 return VAR_0 ? FUNC_0(VAR_1, VAR_2, "%s", "0") :
       FUNC_0(VAR_1, VAR_2, "%s%s", VAR_3 ? "FD_" : "", "CLOEXEC");
}
