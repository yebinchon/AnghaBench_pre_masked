
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ field_sep; } ;


 double FUNC_0 (struct hist_entry*) ;
 int FUNC_1 (char*,size_t,char const*,double) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct hist_entry *VAR_1, char *VAR_2, size_t VAR_3)
{
 double VAR_4 = FUNC_0(VAR_1);
 const char *VAR_5 = VAR_0.field_sep ? "%.2f" : "%6.2f%%";
 int VAR_6 = 0;

 if (!VAR_1->dummy)
  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5, VAR_4);

 return VAR_6;
}
