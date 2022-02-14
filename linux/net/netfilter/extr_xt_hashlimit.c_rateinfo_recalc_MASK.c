
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef int u32 ;
struct TYPE_2__ {unsigned long prev; unsigned long interval; int prev_window; unsigned long current_rate; unsigned long rate; unsigned long credit; unsigned long credit_cap; } ;
struct dsthash_ent {TYPE_1__ rateinfo; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct dsthash_ent *VAR_6, unsigned long VAR_7,
       u32 VAR_8, int VAR_9)
{
 unsigned long VAR_10 = VAR_7 - VAR_6->rateinfo.prev;
 u64 VAR_11, VAR_12;

 if (VAR_10 == 0)
  return;

 if (VAR_9 >= 3 && VAR_8 & VAR_5) {
  u64 VAR_13 = VAR_6->rateinfo.interval * VAR_3;

  if (VAR_10 < VAR_13)
   return;

  VAR_6->rateinfo.prev = VAR_7;
  VAR_6->rateinfo.prev_window =
   ((VAR_6->rateinfo.current_rate * VAR_13) >
    (VAR_10 * VAR_6->rateinfo.rate));
  VAR_6->rateinfo.current_rate = 0;

  return;
 }

 VAR_6->rateinfo.prev = VAR_7;

 if (VAR_8 & VAR_4) {
  u64 VAR_14 = VAR_6->rateinfo.credit;
  VAR_6->rateinfo.credit += VAR_1 * VAR_10;
  VAR_11 = VAR_1 * VAR_3;
  if (VAR_14 >= VAR_6->rateinfo.credit) {
   VAR_6->rateinfo.credit = VAR_11;
   return;
  }
 } else {
  VAR_12 = (VAR_9 == 1) ?
   VAR_2 : VAR_0;
  VAR_6->rateinfo.credit += VAR_10 * VAR_12;
  VAR_11 = VAR_6->rateinfo.credit_cap;
 }
 if (VAR_6->rateinfo.credit > VAR_11)
  VAR_6->rateinfo.credit = VAR_11;
}
