
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct htcp {int minRTT; int alpha; int beta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct htcp*) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline void FUNC_3(struct htcp *VAR_3)
{
 u32 VAR_4 = VAR_3->minRTT;
 u32 VAR_5 = 1;
 u32 VAR_6 = FUNC_0(VAR_3);

 if (VAR_6 > VAR_1) {
  VAR_6 -= VAR_1;
  VAR_5 = 1 + (10 * VAR_6 + ((VAR_6 / 2) * (VAR_6 / 2) / VAR_1)) / VAR_1;
 }

 if (VAR_2 && VAR_4) {
  u32 VAR_7 = (VAR_1 << 3) / (10 * VAR_4);


  VAR_7 = FUNC_2(FUNC_1(VAR_7, 1U << 2), 10U << 3);
  VAR_5 = (VAR_5 << 3) / VAR_7;
  if (!VAR_5)
   VAR_5 = 1;
 }

 VAR_3->alpha = 2 * VAR_5 * ((1 << 7) - VAR_3->beta);
 if (!VAR_3->alpha)
  VAR_3->alpha = VAR_0;
}
