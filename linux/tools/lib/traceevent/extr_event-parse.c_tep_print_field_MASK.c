
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_seq {int dummy; } ;
struct tep_handle {int dummy; } ;
struct tep_format_field {int flags; unsigned int offset; unsigned int size; TYPE_1__* event; } ;
struct TYPE_2__ {struct tep_handle* tep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*,unsigned int) ;
 unsigned long long FUNC_1 (struct tep_handle*,void*,unsigned int) ;
 int FUNC_2 (struct trace_seq*,char*,...) ;
 int FUNC_3 (struct trace_seq*,char) ;
 int FUNC_4 (struct trace_seq*,char*) ;

void FUNC_5(struct trace_seq *VAR_6, void *VAR_7,
       struct tep_format_field *VAR_8)
{
 unsigned long long VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12;
 struct tep_handle *VAR_13 = VAR_8->event->tep;

 if (VAR_8->flags & VAR_0) {
  VAR_10 = VAR_8->offset;
  VAR_11 = VAR_8->size;
  if (VAR_8->flags & VAR_1) {
   VAR_9 = FUNC_1(VAR_13, VAR_7 + VAR_10, VAR_11);
   VAR_10 = VAR_9;
   VAR_11 = VAR_10 >> 16;
   VAR_10 &= 0xffff;
  }
  if (VAR_8->flags & VAR_5 &&
      FUNC_0(VAR_7 + VAR_10, VAR_11)) {
   FUNC_2(VAR_6, "%s", (char *)VAR_7 + VAR_10);
  } else {
   FUNC_4(VAR_6, "ARRAY[");
   for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
    if (VAR_12)
     FUNC_4(VAR_6, ", ");
    FUNC_2(VAR_6, "%02x",
       *((unsigned char *)VAR_7 + VAR_10 + VAR_12));
   }
   FUNC_3(VAR_6, ']');
   VAR_8->flags &= ~VAR_5;
  }
 } else {
  VAR_9 = FUNC_1(VAR_13, VAR_7 + VAR_8->offset,
          VAR_8->size);
  if (VAR_8->flags & VAR_3) {
   FUNC_2(VAR_6, "0x%llx", VAR_9);
  } else if (VAR_8->flags & VAR_4) {
   switch (VAR_8->size) {
   case 4:




    if (VAR_8->flags & VAR_2)
     FUNC_2(VAR_6, "0x%x", (int)VAR_9);
    else
     FUNC_2(VAR_6, "%d", (int)VAR_9);
    break;
   case 2:
    FUNC_2(VAR_6, "%2d", (short)VAR_9);
    break;
   case 1:
    FUNC_2(VAR_6, "%1d", (char)VAR_9);
    break;
   default:
    FUNC_2(VAR_6, "%lld", VAR_9);
   }
  } else {
   if (VAR_8->flags & VAR_2)
    FUNC_2(VAR_6, "0x%llx", VAR_9);
   else
    FUNC_2(VAR_6, "%llu", VAR_9);
  }
 }
}
