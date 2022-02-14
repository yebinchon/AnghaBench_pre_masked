
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_record {unsigned long long cpu; int data; } ;
struct tep_format_field {int flags; int size; } ;
struct tep_event {int dummy; } ;


 int VAR_0 ;
 struct tep_format_field VAR_1 ;
 struct tep_format_field VAR_2 ;
 char* FUNC_0 (struct tep_event*,struct tep_record*) ;
 int FUNC_1 (struct tep_format_field*,int ,unsigned long long*) ;

__attribute__((used)) static unsigned long long
FUNC_2(struct tep_event *VAR_3,
   struct tep_format_field *VAR_4, struct tep_record *VAR_5)
{
 unsigned long long VAR_6;


 if (VAR_4 == &VAR_1) {
  const char *VAR_7;

  VAR_7 = FUNC_0(VAR_3, VAR_5);
  return (unsigned long)VAR_7;
 }


 if (VAR_4 == &VAR_2)
  return VAR_5->cpu;

 FUNC_1(VAR_4, VAR_5->data, &VAR_6);

 if (!(VAR_4->flags & VAR_0))
  return VAR_6;

 switch (VAR_4->size) {
 case 1:
  return (char)VAR_6;
 case 2:
  return (short)VAR_6;
 case 4:
  return (int)VAR_6;
 case 8:
  return (long long)VAR_6;
 }
 return VAR_6;
}
