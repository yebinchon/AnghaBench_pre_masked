
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {int dummy; } ;
struct diff_hpp_fmt {int fmt; } ;
struct data__file {int dummy; } ;


 struct data__file* FUNC_0 (int *) ;
 struct hist_entry* FUNC_1 (struct hist_entry*,struct data__file*) ;

__attribute__((used)) static struct hist_entry*
FUNC_2(struct hist_entry *VAR_0, struct diff_hpp_fmt *VAR_1)
{
 struct data__file *VAR_2 = FUNC_0(&VAR_1->fmt);

 return FUNC_1(VAR_0, VAR_2);
}
