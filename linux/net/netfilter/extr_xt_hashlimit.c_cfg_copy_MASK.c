
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashlimit_cfg3 {int dstmask; int srcmask; int expire; int gc_interval; int max; int size; int burst; int avg; int mode; } ;
struct hashlimit_cfg2 {int dstmask; int srcmask; int expire; int gc_interval; int max; int size; int burst; int avg; int mode; } ;
struct hashlimit_cfg1 {int dstmask; int srcmask; int expire; int gc_interval; int max; int size; int burst; int avg; int mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct hashlimit_cfg3*,void const*,int) ;

__attribute__((used)) static int
FUNC_1(struct hashlimit_cfg3 *VAR_1, const void *VAR_2, int VAR_3)
{
 if (VAR_3 == 1) {
  struct hashlimit_cfg1 *VAR_4 = (struct hashlimit_cfg1 *)VAR_2;

  VAR_1->mode = VAR_4->mode;
  VAR_1->avg = VAR_4->avg;
  VAR_1->burst = VAR_4->burst;
  VAR_1->size = VAR_4->size;
  VAR_1->max = VAR_4->max;
  VAR_1->gc_interval = VAR_4->gc_interval;
  VAR_1->expire = VAR_4->expire;
  VAR_1->srcmask = VAR_4->srcmask;
  VAR_1->dstmask = VAR_4->dstmask;
 } else if (VAR_3 == 2) {
  struct hashlimit_cfg2 *VAR_5 = (struct hashlimit_cfg2 *)VAR_2;

  VAR_1->mode = VAR_5->mode;
  VAR_1->avg = VAR_5->avg;
  VAR_1->burst = VAR_5->burst;
  VAR_1->size = VAR_5->size;
  VAR_1->max = VAR_5->max;
  VAR_1->gc_interval = VAR_5->gc_interval;
  VAR_1->expire = VAR_5->expire;
  VAR_1->srcmask = VAR_5->srcmask;
  VAR_1->dstmask = VAR_5->dstmask;
 } else if (VAR_3 == 3) {
  FUNC_0(VAR_1, VAR_2, sizeof(struct hashlimit_cfg3));
 } else {
  return -VAR_0;
 }

 return 0;
}
