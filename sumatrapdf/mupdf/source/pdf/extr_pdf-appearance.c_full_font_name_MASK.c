
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_1(const char **VAR_0)
{
 if (!FUNC_0(*VAR_0, "Cour")) return "Courier";
 if (!FUNC_0(*VAR_0, "Helv")) return "Helvetica";
 if (!FUNC_0(*VAR_0, "TiRo")) return "Times-Roman";
 if (!FUNC_0(*VAR_0, "Symb")) return "Symbol";
 if (!FUNC_0(*VAR_0, "ZaDb")) return "ZapfDingbats";
 return *VAR_0 = "Helv", "Helvetica";
}
