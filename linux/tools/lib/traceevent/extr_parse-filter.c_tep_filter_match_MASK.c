
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_record {int dummy; } ;
struct tep_handle {int dummy; } ;
struct tep_filter_type {int filter; int event; } ;
struct tep_event_filter {int filters; struct tep_handle* tep; } ;
typedef enum tep_errno { ____Placeholder_tep_errno } tep_errno ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tep_event_filter*) ;
 struct tep_filter_type* FUNC_1 (struct tep_event_filter*,int) ;
 int FUNC_2 (struct tep_handle*,struct tep_record*) ;
 int FUNC_3 (int ,int ,struct tep_record*,int*) ;

enum tep_errno FUNC_4(struct tep_event_filter *VAR_4,
    struct tep_record *VAR_5)
{
 struct tep_handle *VAR_6 = VAR_4->tep;
 struct tep_filter_type *VAR_7;
 int VAR_8;
 int VAR_9;
 enum tep_errno VAR_10 = 0;

 FUNC_0(VAR_4);

 if (!VAR_4->filters)
  return VAR_3;

 VAR_8 = FUNC_2(VAR_6, VAR_5);

 VAR_7 = FUNC_1(VAR_4, VAR_8);
 if (!VAR_7)
  return VAR_2;

 VAR_9 = FUNC_3(VAR_7->event, VAR_7->filter, VAR_5, &VAR_10);
 if (VAR_10)
  return VAR_10;

 return VAR_9 ? VAR_0 : VAR_1;
}
