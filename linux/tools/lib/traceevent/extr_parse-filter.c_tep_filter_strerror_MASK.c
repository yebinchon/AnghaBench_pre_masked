
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_event_filter {char* error_buffer; int tep; } ;
typedef enum tep_errno { ____Placeholder_tep_errno } tep_errno ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char*,size_t,char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ,int,char*,size_t) ;

int FUNC_3(struct tep_event_filter *VAR_2, enum tep_errno VAR_3,
   char *VAR_4, size_t VAR_5)
{
 if (VAR_3 <= VAR_1 || VAR_3 >= VAR_0)
  return -1;

 if (FUNC_1(VAR_2->error_buffer) > 0) {
  size_t VAR_6 = FUNC_0(VAR_4, VAR_5, "%s", VAR_2->error_buffer);

  if (VAR_6 > VAR_5)
   return -1;
  return 0;
 }

 return FUNC_2(VAR_2->tep, VAR_3, VAR_4, VAR_5);
}
