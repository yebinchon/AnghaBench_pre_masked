
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;


 int FUNC_0 (struct ring_buffer*,struct ring_buffer_event*) ;
 int FUNC_1 (int ) ;
 struct ring_buffer_event* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_3(struct ring_buffer *VAR_2,
        struct ring_buffer_event *VAR_3)
{
 if (FUNC_2(VAR_0) == VAR_3) {

  FUNC_1(VAR_1);
  return;
 }
 FUNC_0(VAR_2, VAR_3);
}
