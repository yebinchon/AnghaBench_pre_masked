
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct timecounter {scalar_t__ cycle_last; } ;
struct cyclecounter {int mult; scalar_t__ shift; int mask; int read; } ;
struct hdac_stream {struct cyclecounter cc; struct timecounter tc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct timecounter*,struct cyclecounter*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hdac_stream *VAR_1,
     bool VAR_2, u64 VAR_3)
{
 struct timecounter *VAR_4 = &VAR_1->tc;
 struct cyclecounter *VAR_5 = &VAR_1->cc;
 u64 VAR_6;

 VAR_5->read = VAR_0;
 VAR_5->mask = FUNC_0(32);
 VAR_5->mult = 125;
 VAR_5->shift = 0;

 VAR_6 = 0;
 FUNC_1(VAR_4, VAR_5, VAR_6);
 if (VAR_2) {




  VAR_4->cycle_last = VAR_3;
 }
}
