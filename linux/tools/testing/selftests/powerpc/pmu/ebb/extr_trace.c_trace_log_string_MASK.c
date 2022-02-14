
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_entry {scalar_t__ data; int type; } ;
struct trace_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 struct trace_entry* FUNC_2 (struct trace_buffer*,int) ;

int FUNC_3(struct trace_buffer *VAR_2, char *VAR_3)
{
 struct trace_entry *VAR_4;
 char *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3);


 VAR_4 = FUNC_2(VAR_2, VAR_6 + 1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->type = VAR_1;
 VAR_5 = (char *)VAR_4->data;
 FUNC_0(VAR_5, VAR_3, VAR_6);
 VAR_5 += VAR_6;
 *VAR_5 = '\0';

 return 0;
}
