
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_hpp_fmt {int len; scalar_t__ user_len; } ;
struct perf_hpp {int dummy; } ;
struct hist_entry {int dummy; } ;
typedef int hpp_snprint_fn ;
typedef int hpp_field_fn ;
struct TYPE_2__ {scalar_t__ field_sep; } ;


 int FUNC_0 (struct perf_hpp*,struct hist_entry*,int ,char const*,int,int ,int) ;
 TYPE_1__ VAR_0 ;

int FUNC_1(struct perf_hpp_fmt *VAR_1, struct perf_hpp *VAR_2,
      struct hist_entry *VAR_3, hpp_field_fn VAR_4,
      const char *VAR_5, hpp_snprint_fn VAR_6, bool VAR_7)
{
 int VAR_8 = VAR_1->user_len ?: VAR_1->len;

 if (VAR_0.field_sep) {
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, 1,
      VAR_6, VAR_7);
 }

 if (VAR_7)
  VAR_8 -= 2;
 else
  VAR_8 -= 1;

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_8, VAR_6, VAR_7);
}
