
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timer_event {int session; int handle; } ;
struct skynet_message {int session; size_t sz; int * data; scalar_t__ source; } ;
typedef int event ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct skynet_message*) ;
 int FUNC_1 (int ,struct timer_event*,int,int) ;

int
FUNC_2(uint32_t VAR_3, int VAR_4, int VAR_5) {
 if (VAR_4 <= 0) {
  struct skynet_message VAR_6;
  VAR_6.source = 0;
  VAR_6.session = VAR_5;
  VAR_6.data = ((void*)0);
  VAR_6.sz = (size_t)VAR_1 << VAR_0;

  if (FUNC_0(VAR_3, &VAR_6)) {
   return -1;
  }
 } else {
  struct timer_event VAR_7;
  VAR_7.handle = VAR_3;
  VAR_7.session = VAR_5;
  FUNC_1(VAR_2, &VAR_7, sizeof(VAR_7), VAR_4);
 }

 return VAR_5;
}
