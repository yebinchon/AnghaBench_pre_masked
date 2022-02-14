
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {int dummy; } ;
struct diff_hpp_fmt {int idx; } ;


 int VAR_0 ;
 struct hist_entry* FUNC_0 (struct hist_entry*,struct diff_hpp_fmt*) ;
 int FUNC_1 (struct hist_entry*,char*,size_t) ;
 int FUNC_2 (struct hist_entry*,struct hist_entry*,int,char*,size_t) ;
 int FUNC_3 (struct hist_entry*,int,char*,size_t) ;

__attribute__((used)) static void
FUNC_4(struct hist_entry *VAR_1, struct diff_hpp_fmt *VAR_2,
      char *VAR_3, size_t VAR_4)
{
 struct hist_entry *VAR_5 = FUNC_0(VAR_1, VAR_2);
 int VAR_6 = VAR_2->idx;


 if (VAR_6 == VAR_0)
  FUNC_1(VAR_1, VAR_3, VAR_4);
 else {
  if (VAR_5)
   FUNC_2(VAR_1, VAR_5, VAR_6, VAR_3, VAR_4);
  else
   FUNC_3(VAR_1, VAR_6, VAR_3, VAR_4);
 }
}
