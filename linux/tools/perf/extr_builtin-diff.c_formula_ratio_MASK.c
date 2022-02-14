
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double period; } ;
struct hist_entry {TYPE_1__ stat; } ;


 int FUNC_0 (char*,size_t,char*,double,double) ;

__attribute__((used)) static int FUNC_1(struct hist_entry *VAR_0, struct hist_entry *VAR_1,
    char *VAR_2, size_t VAR_3)
{
 double VAR_4 = VAR_0->stat.period;
 double VAR_5 = VAR_1->stat.period;

 return FUNC_0(VAR_2, VAR_3, "%.0F / %.0F", VAR_5, VAR_4);
}
