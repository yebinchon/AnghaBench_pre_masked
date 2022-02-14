
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_event {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct ring_buffer_event*) ;
 int FUNC_1 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_2 (struct ring_buffer_event*) ;

__attribute__((used)) static inline unsigned
FUNC_3(struct ring_buffer_event *VAR_1)
{
 unsigned VAR_2 = 0;

 if (FUNC_0(VAR_1)) {

  VAR_2 = VAR_0;
  VAR_1 = FUNC_2(VAR_1);
 }
 return VAR_2 + FUNC_1(VAR_1);
}
