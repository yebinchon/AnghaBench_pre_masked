
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tep_handle {int dummy; } ;
struct tep_format_field {int flags; unsigned int offset; unsigned int size; TYPE_1__* event; } ;
struct TYPE_4__ {void* raw_data; } ;
struct pyrf_event {TYPE_2__ sample; } ;
struct TYPE_3__ {struct tep_handle* tep; } ;
typedef int PyObject ;


 int * FUNC_0 (char const*,unsigned int) ;
 int * FUNC_1 (long) ;
 int * FUNC_2 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (void*,unsigned int) ;
 unsigned long long FUNC_5 (struct tep_handle*,void*,unsigned int) ;

__attribute__((used)) static PyObject*
FUNC_6(struct pyrf_event *VAR_5, struct tep_format_field *VAR_6)
{
 struct tep_handle *VAR_7 = VAR_6->event->tep;
 void *VAR_8 = VAR_5->sample.raw_data;
 PyObject *VAR_9 = ((void*)0);
 unsigned long long VAR_10;
 unsigned int VAR_11, VAR_12;

 if (VAR_6->flags & VAR_0) {
  VAR_11 = VAR_6->offset;
  VAR_12 = VAR_6->size;
  if (VAR_6->flags & VAR_1) {
   VAR_10 = FUNC_5(VAR_7, VAR_8 + VAR_11, VAR_12);
   VAR_11 = VAR_10;
   VAR_12 = VAR_11 >> 16;
   VAR_11 &= 0xffff;
  }
  if (VAR_6->flags & VAR_4 &&
      FUNC_4(VAR_8 + VAR_11, VAR_12)) {
   VAR_9 = FUNC_3((char *)VAR_8 + VAR_11);
  } else {
   VAR_9 = FUNC_0((const char *) VAR_8 + VAR_11, VAR_12);
   VAR_6->flags &= ~VAR_4;
  }
 } else {
  VAR_10 = FUNC_5(VAR_7, VAR_8 + VAR_6->offset,
          VAR_6->size);
  if (VAR_6->flags & VAR_2)
   VAR_9 = FUNC_2((unsigned long) VAR_10);
  else if (VAR_6->flags & VAR_3)
   VAR_9 = FUNC_1((long) VAR_10);
  else
   VAR_9 = FUNC_2((unsigned long) VAR_10);
 }

 return VAR_9;
}
