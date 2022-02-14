
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {int family; struct net* net; } ;
struct xt_hashlimit_htable {int dummy; } ;
struct net {int dummy; } ;
struct hashlimit_cfg3 {scalar_t__ gc_interval; scalar_t__ expire; int srcmask; int dstmask; int mode; int avg; scalar_t__ interval; int burst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net*,struct hashlimit_cfg3*,char const*,int ,struct xt_hashlimit_htable**,int) ;
 struct xt_hashlimit_htable* FUNC_1 (struct net*,char const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(const struct xt_mtchk_param *VAR_8,
         struct xt_hashlimit_htable **VAR_9,
         struct hashlimit_cfg3 *VAR_10,
         const char *VAR_11, int VAR_12)
{
 struct net *VAR_13 = VAR_8->net;
 int VAR_14;

 if (VAR_10->gc_interval == 0 || VAR_10->expire == 0)
  return -VAR_0;
 if (VAR_8->family == VAR_2) {
  if (VAR_10->srcmask > 32 || VAR_10->dstmask > 32)
   return -VAR_0;
 } else {
  if (VAR_10->srcmask > 128 || VAR_10->dstmask > 128)
   return -VAR_0;
 }

 if (VAR_10->mode & ~VAR_4) {
  FUNC_4("Unknown mode mask %X, kernel too old?\n",
        VAR_10->mode);
  return -VAR_0;
 }


 if (VAR_12 >= 3 && VAR_10->mode & VAR_6) {
  if (VAR_10->avg == 0 || VAR_10->avg > VAR_3) {
   FUNC_4("invalid rate\n");
   return -VAR_1;
  }

  if (VAR_10->interval == 0) {
   FUNC_4("invalid interval\n");
   return -VAR_0;
  }
 } else if (VAR_10->mode & VAR_5) {
  if (FUNC_6(VAR_10->avg) == 0) {
   FUNC_4("overflow, rate too high: %llu\n",
         VAR_10->avg);
   return -VAR_0;
  }
 } else if (VAR_10->burst == 0 ||
     FUNC_5(VAR_10->avg * VAR_10->burst, VAR_12) <
     FUNC_5(VAR_10->avg, VAR_12)) {
  FUNC_4("overflow, try lower: %llu/%llu\n",
        VAR_10->avg, VAR_10->burst);
  return -VAR_1;
 }

 FUNC_2(&VAR_7);
 *VAR_9 = FUNC_1(VAR_13, VAR_11, VAR_8->family);
 if (*VAR_9 == ((void*)0)) {
  VAR_14 = FUNC_0(VAR_13, VAR_10, VAR_11, VAR_8->family,
        VAR_9, VAR_12);
  if (VAR_14 < 0) {
   FUNC_3(&VAR_7);
   return VAR_14;
  }
 }
 FUNC_3(&VAR_7);

 return 0;
}
