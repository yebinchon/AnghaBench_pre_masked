
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_nl_compat_msg {int rep; int req; } ;
struct tipc_name_table_query {int depth; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const* const) ;

__attribute__((used)) static int FUNC_4(struct tipc_nl_compat_msg *VAR_1)
{
 int VAR_2;
 u32 VAR_3;
 struct tipc_name_table_query *VAR_4;
 static const char * const VAR_5[] = {
  "Type       ",
  "Lower      Upper      ",
  "Port Identity              ",
  "Publication Scope"
 };

 VAR_4 = (struct tipc_name_table_query *)FUNC_0(VAR_1->req);
 if (FUNC_1(VAR_1->req) < sizeof(struct tipc_name_table_query))
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_4->depth);

 if (VAR_3 > 4)
  VAR_3 = 4;
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_3(VAR_1->rep, VAR_5[VAR_2]);
 FUNC_3(VAR_1->rep, "\n");

 return 0;
}
