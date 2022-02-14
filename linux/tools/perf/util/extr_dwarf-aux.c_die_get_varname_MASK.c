
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef int Dwarf_Die ;


 int FUNC_0 (int *,struct strbuf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct strbuf*,char*,int) ;
 int FUNC_4 (struct strbuf*,char*,int ) ;

int FUNC_5(Dwarf_Die *VAR_0, struct strbuf *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 < 0) {
  FUNC_2("Failed to get type, make it unknown.\n");
  VAR_2 = FUNC_3(VAR_1, " (unknown_type)", 14);
 }

 return VAR_2 < 0 ? VAR_2 : FUNC_4(VAR_1, "\t%s", FUNC_1(VAR_0));
}
