
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbuffer {int flags; int next_event; int read_long; int read_4; int read_8; } ;
typedef enum kbuffer_long_size { ____Placeholder_kbuffer_long_size } kbuffer_long_size ;
typedef enum kbuffer_endian { ____Placeholder_kbuffer_endian } kbuffer_endian ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct kbuffer*) ;
 scalar_t__ FUNC_1 () ;
 struct kbuffer* FUNC_2 (int) ;

struct kbuffer *
FUNC_3(enum kbuffer_long_size VAR_10, enum kbuffer_endian VAR_11)
{
 struct kbuffer *VAR_12;
 int VAR_13 = 0;

 switch (VAR_10) {
 case 129:
  break;
 case 128:
  VAR_13 |= VAR_2;
  break;
 default:
  return ((void*)0);
 }

 switch (VAR_11) {
 case 130:
  break;
 case 131:
  VAR_13 |= VAR_0;
  break;
 default:
  return ((void*)0);
 }

 VAR_12 = FUNC_2(sizeof(*VAR_12));
 if (!VAR_12)
  return ((void*)0);

 VAR_12->flags = VAR_13;

 if (FUNC_1())
  VAR_12->flags |= VAR_1;

 if (FUNC_0(VAR_12)) {
  VAR_12->read_8 = VAR_7;
  VAR_12->read_4 = VAR_5;
 } else {
  VAR_12->read_8 = VAR_6;
  VAR_12->read_4 = VAR_4;
 }

 if (VAR_12->flags & VAR_2)
  VAR_12->read_long = VAR_9;
 else
  VAR_12->read_long = VAR_8;


 VAR_12->next_event = VAR_3;

 return VAR_12;
}
