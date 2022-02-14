
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_entry {int type; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (char*,struct trace_entry*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct trace_entry*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct trace_entry*) ;
 int FUNC_5 (struct trace_entry*) ;

__attribute__((used)) static void FUNC_6(struct trace_entry *VAR_2, int VAR_3, int *VAR_4)
{
 switch (VAR_2->type) {
 case 129:
  FUNC_3(VAR_3, *VAR_4);
  FUNC_4(VAR_2);
  break;
 case 132:
  FUNC_3(VAR_3, *VAR_4);
  FUNC_2(VAR_2);
  break;
 case 128:
  FUNC_3(VAR_3, *VAR_4);
  FUNC_5(VAR_2);
  break;
 case 131:
  FUNC_3(VAR_3, *VAR_4);
  FUNC_1("{");
  *VAR_4 += VAR_1;
  break;
 case 130:
  *VAR_4 -= VAR_1;
  if (*VAR_4 < VAR_0)
   *VAR_4 = VAR_0;
  FUNC_3(VAR_3, *VAR_4);
  FUNC_1("}");
  break;
 default:
  FUNC_3(VAR_3, *VAR_4);
  FUNC_0("entry @ %p type %d\n", VAR_2, VAR_2->type);
  break;
 }
}
