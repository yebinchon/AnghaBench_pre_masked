
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;
struct tep_format_field {int offset; int size; } ;
struct tep_event {int dummy; } ;
struct scripting_context {scalar_t__ event_data; struct tep_handle* pevent; } ;


 struct tep_format_field* FUNC_0 (struct tep_event*,char const*) ;
 struct tep_event* FUNC_1 (struct tep_handle*) ;
 int FUNC_2 (struct tep_handle*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct scripting_context *VAR_0,
       int *VAR_1, int *VAR_2, const char *VAR_3)
{
 struct tep_handle *VAR_4 = VAR_0->pevent;
 struct tep_event *VAR_5;
 struct tep_format_field *VAR_6;

 if (!*VAR_2) {

  VAR_5 = FUNC_1(VAR_4);
  if (!VAR_5)
   return 0;

  VAR_6 = FUNC_0(VAR_5, VAR_3);
  if (!VAR_6)
   return 0;
  *VAR_1 = VAR_6->offset;
  *VAR_2 = VAR_6->size;
 }

 return FUNC_2(VAR_4, VAR_0->event_data + *VAR_1, *VAR_2);
}
