
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct ftrace_event_field {char const* name; char const* type; int filter_type; int offset; int size; int is_signed; int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 struct ftrace_event_field* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_3(struct list_head *VAR_4, const char *VAR_5,
    const char *VAR_6, int VAR_7, int VAR_8,
    int VAR_9, int VAR_10)
{
 struct ftrace_event_field *VAR_11;

 VAR_11 = FUNC_1(VAR_3, VAR_2);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->name = VAR_6;
 VAR_11->type = VAR_5;

 if (VAR_10 == VAR_1)
  VAR_11->filter_type = FUNC_0(VAR_5);
 else
  VAR_11->filter_type = VAR_10;

 VAR_11->offset = VAR_7;
 VAR_11->size = VAR_8;
 VAR_11->is_signed = VAR_9;

 FUNC_2(&VAR_11->link, VAR_4);

 return 0;
}
