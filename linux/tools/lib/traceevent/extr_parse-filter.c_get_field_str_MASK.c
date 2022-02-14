
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tep_record {char* data; } ;
struct tep_handle {int dummy; } ;
struct TYPE_3__ {char* buffer; TYPE_2__* field; } ;
struct tep_filter_arg {TYPE_1__ str; } ;
struct tep_event {struct tep_handle* tep; } ;
struct TYPE_4__ {int flags; int offset; unsigned int size; struct tep_event* event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long FUNC_0 (struct tep_event*,TYPE_2__*,struct tep_record*) ;
 int FUNC_1 (char*,char const*,unsigned int) ;
 int FUNC_2 (char*,int,char*,unsigned long long) ;
 char* FUNC_3 (struct tep_handle*,unsigned long long) ;

__attribute__((used)) static const char *FUNC_4(struct tep_filter_arg *VAR_4, struct tep_record *VAR_5)
{
 struct tep_event *VAR_6;
 struct tep_handle *VAR_7;
 unsigned long long VAR_8;
 const char *VAR_9 = ((void*)0);
 unsigned int VAR_10;
 char VAR_11[64];


 if (VAR_4->str.field->flags & VAR_3) {
  VAR_9 = VAR_5->data + VAR_4->str.field->offset;
  VAR_10 = VAR_4->str.field->size;

  if (VAR_4->str.field->flags & VAR_0) {
   VAR_8 = *(unsigned int *)VAR_9;
   VAR_9 = VAR_5->data + (VAR_8 & 0xffff);
   VAR_10 = VAR_8 >> 16;
  }





  if (*(VAR_9 + VAR_10 - 1)) {

   FUNC_1(VAR_4->str.buffer, VAR_9, VAR_4->str.field->size);

   VAR_9 = VAR_4->str.buffer;
  }

 } else {
  VAR_6 = VAR_4->str.field->event;
  VAR_7 = VAR_6->tep;
  VAR_8 = FUNC_0(VAR_6, VAR_4->str.field, VAR_5);

  if (VAR_4->str.field->flags & (VAR_2 | VAR_1))

   VAR_9 = FUNC_3(VAR_7, VAR_8);

  if (VAR_9 == ((void*)0)) {

   FUNC_2(VAR_11, 64, "0x%llx", VAR_8);
   VAR_9 = VAR_11;
  }
 }

 return VAR_9;
}
