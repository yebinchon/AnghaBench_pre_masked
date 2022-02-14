
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;
struct tep_event {int dummy; } ;
typedef enum tep_errno { ____Placeholder_tep_errno } tep_errno ;


 int FUNC_0 (struct tep_handle*,struct tep_event**,char const*,unsigned long,char const*) ;

enum tep_errno FUNC_1(struct tep_handle *VAR_0, const char *VAR_1,
          unsigned long VAR_2, const char *VAR_3)
{
 struct tep_event *VAR_4 = ((void*)0);
 return FUNC_0(VAR_0, &VAR_4, VAR_1, VAR_2, VAR_3);
}
