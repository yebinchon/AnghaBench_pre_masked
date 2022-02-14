
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct record_opts {int sample_address; } ;
struct callchain_param {int enabled; scalar_t__ record_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct callchain_param*) ;
 int FUNC_1 (char const*,struct callchain_param*) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct record_opts *VAR_2,
     struct callchain_param *VAR_3,
     const char *VAR_4, bool VAR_5)
{
 int VAR_6;
 VAR_3->enabled = !VAR_5;


 if (VAR_5) {
  VAR_3->record_mode = VAR_1;
  FUNC_2("callchain: disabled\n");
  return 0;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_3);
 if (!VAR_6) {

  if (VAR_3->record_mode == VAR_0)
   VAR_2->sample_address = 1;
  FUNC_0(VAR_3);
 }

 return VAR_6;
}
