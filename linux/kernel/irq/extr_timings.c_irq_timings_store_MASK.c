
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct irqt_stat {scalar_t__ last_ts; scalar_t__ count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,struct irqt_stat*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(int VAR_1, struct irqt_stat *VAR_2, u64 VAR_3)
{
 u64 VAR_4 = VAR_2->last_ts;
 u64 VAR_5;





 VAR_2->last_ts = VAR_3;






 VAR_5 = VAR_3 - VAR_4;
 if (VAR_5 >= VAR_0) {
  VAR_2->count = 0;
  return;
 }

 FUNC_0(VAR_1, VAR_2, VAR_5);
}
