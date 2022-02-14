
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kernel_timex {int modes; int freq; int constant; int tick; int offset; int esterror; int maxerror; } ;
typedef scalar_t__ s32 ;


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
 long VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,long) ;
 int FUNC_1 (int,long) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct __kernel_timex const*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static inline void FUNC_6(const struct __kernel_timex *VAR_21,
       s32 *VAR_22)
{
 if (VAR_21->modes & VAR_6)
  FUNC_5(VAR_21);

 if (VAR_21->modes & VAR_4)
  VAR_20 |= VAR_14;

 if (VAR_21->modes & VAR_3)
  VAR_20 &= ~VAR_14;

 if (VAR_21->modes & VAR_1) {
  VAR_18 = VAR_21->freq * VAR_13;
  VAR_18 = FUNC_1(VAR_18, VAR_10);
  VAR_18 = FUNC_0(VAR_18, -VAR_10);

  FUNC_4(VAR_18);
 }

 if (VAR_21->modes & VAR_2)
  VAR_19 = VAR_21->maxerror;

 if (VAR_21->modes & VAR_0)
  VAR_17 = VAR_21->esterror;

 if (VAR_21->modes & VAR_9) {
  VAR_16 = VAR_21->constant;
  if (!(VAR_20 & VAR_14))
   VAR_16 += 4;
  VAR_16 = FUNC_1(VAR_16, (long)VAR_11);
  VAR_16 = FUNC_0(VAR_16, 0l);
 }

 if (VAR_21->modes & VAR_7 &&
   VAR_21->constant >= 0 && VAR_21->constant <= VAR_12)
  *VAR_22 = VAR_21->constant;

 if (VAR_21->modes & VAR_5)
  FUNC_3(VAR_21->offset);

 if (VAR_21->modes & VAR_8)
  VAR_15 = VAR_21->tick;

 if (VAR_21->modes & (VAR_8|VAR_1|VAR_5))
  FUNC_2();
}
