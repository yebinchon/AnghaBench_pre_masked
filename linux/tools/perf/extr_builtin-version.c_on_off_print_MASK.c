
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,char const*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_3)
{
 FUNC_1("[ ");

 if (!FUNC_2(VAR_3, "OFF"))
  FUNC_0(VAR_2, VAR_1, "%-3s", VAR_3);
 else
  FUNC_0(VAR_2, VAR_0, "%-3s", VAR_3);

 FUNC_1(" ]");
}
