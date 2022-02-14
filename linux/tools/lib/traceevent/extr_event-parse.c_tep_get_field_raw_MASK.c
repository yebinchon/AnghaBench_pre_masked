
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {void* data; } ;
struct tep_format_field {unsigned int offset; int flags; int size; } ;
struct tep_event {int tep; } ;


 int VAR_0 ;
 struct tep_format_field* FUNC_0 (struct tep_event*,char const*) ;
 unsigned int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (struct trace_seq*,char*,char const*) ;

void *FUNC_3(struct trace_seq *VAR_1, struct tep_event *VAR_2,
   const char *VAR_3, struct tep_record *VAR_4,
   int *VAR_5, int VAR_6)
{
 struct tep_format_field *VAR_7;
 void *VAR_8 = VAR_4->data;
 unsigned VAR_9;
 int VAR_10;

 if (!VAR_2)
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_2, VAR_3);

 if (!VAR_7) {
  if (VAR_6)
   FUNC_2(VAR_1, "<CANT FIND FIELD %s>", VAR_3);
  return ((void*)0);
 }


 if (!VAR_5)
  VAR_5 = &VAR_10;

 VAR_9 = VAR_7->offset;
 if (VAR_7->flags & VAR_0) {
  VAR_9 = FUNC_1(VAR_2->tep,
      VAR_8 + VAR_9, VAR_7->size);
  *VAR_5 = VAR_9 >> 16;
  VAR_9 &= 0xffff;
 } else
  *VAR_5 = VAR_7->size;

 return VAR_8 + VAR_9;
}
