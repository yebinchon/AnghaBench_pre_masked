
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct strbuf*,char*,int) ;
 int FUNC_4 (struct strbuf*,char*,char const*,int ) ;
 int FUNC_5 (struct strbuf*,char const*) ;

int FUNC_6(Dwarf_Die *VAR_7, struct strbuf *VAR_8)
{
 Dwarf_Die VAR_9;
 int VAR_10, VAR_11;
 const char *VAR_12 = "";

 if (FUNC_0(VAR_7, &VAR_9) == ((void*)0))
  return -VAR_6;

 VAR_10 = FUNC_2(&VAR_9);
 if (VAR_10 == VAR_0 || VAR_10 == VAR_2)
  VAR_12 = "*";
 else if (VAR_10 == VAR_4) {

  return FUNC_3(VAR_8, "(function_type)", 15);
 } else {
  if (!FUNC_1(&VAR_9))
   return -VAR_6;
  if (VAR_10 == VAR_5)
   VAR_12 = "union ";
  else if (VAR_10 == VAR_3)
   VAR_12 = "struct ";
  else if (VAR_10 == VAR_1)
   VAR_12 = "enum ";

  return FUNC_4(VAR_8, "%s%s", VAR_12, FUNC_1(&VAR_9));
 }
 VAR_11 = FUNC_6(&VAR_9, VAR_8);
 return VAR_11 ? VAR_11 : FUNC_5(VAR_8, VAR_12);
}
