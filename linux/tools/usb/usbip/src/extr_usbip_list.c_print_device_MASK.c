
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,char const*,char const*) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, const char *VAR_1,
    const char *VAR_2, bool VAR_3)
{
 if (VAR_3)
  FUNC_0("busid=%s#usbid=%.4s:%.4s#", VAR_0, VAR_1, VAR_2);
 else
  FUNC_0(" - busid %s (%.4s:%.4s)\n", VAR_0, VAR_1, VAR_2);
}
