
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ima_field_data {int dummy; } ;
struct ima_event_data {scalar_t__ buf_len; int buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ,struct ima_field_data*) ;

int FUNC_1(struct ima_event_data *VAR_1,
        struct ima_field_data *VAR_2)
{
 if ((!VAR_1->buf) || (VAR_1->buf_len == 0))
  return 0;

 return FUNC_0(VAR_1->buf,
          VAR_1->buf_len, VAR_0,
          VAR_2);
}
