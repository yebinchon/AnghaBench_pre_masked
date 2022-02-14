
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kernel_timex {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static inline void FUNC_2(const struct __kernel_timex *VAR_9)
{
 if ((VAR_8 & VAR_0) && !(VAR_9->status & VAR_0)) {
  VAR_7 = VAR_4;
  VAR_8 = VAR_2;
  VAR_5 = VAR_3;

  FUNC_1();
 }





 if (!(VAR_8 & VAR_0) && (VAR_9->status & VAR_0))
  VAR_6 = FUNC_0();


 VAR_8 &= VAR_1;
 VAR_8 |= VAR_9->status & ~VAR_1;
}
