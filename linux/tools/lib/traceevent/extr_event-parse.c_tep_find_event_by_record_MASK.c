
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_record {scalar_t__ size; int data; } ;
struct tep_handle {int dummy; } ;
struct tep_event {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 struct tep_event* FUNC_1 (struct tep_handle*,int) ;
 int FUNC_2 (struct tep_handle*,int ) ;

struct tep_event *
FUNC_3(struct tep_handle *VAR_0, struct tep_record *VAR_1)
{
 int VAR_2;

 if (VAR_1->size < 0) {
  FUNC_0("ug! negative record size %d", VAR_1->size);
  return ((void*)0);
 }

 VAR_2 = FUNC_2(VAR_0, VAR_1->data);

 return FUNC_1(VAR_0, VAR_2);
}
