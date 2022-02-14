
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfsc_class {scalar_t__ level; int filter_cnt; } ;
struct Qdisc {int dummy; } ;


 struct hfsc_class* FUNC_0 (int ,struct Qdisc*) ;

__attribute__((used)) static unsigned long
FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1, u32 VAR_2)
{
 struct hfsc_class *VAR_3 = (struct hfsc_class *)VAR_1;
 struct hfsc_class *VAR_4 = FUNC_0(VAR_2, VAR_0);

 if (VAR_4 != ((void*)0)) {
  if (VAR_3 != ((void*)0) && VAR_3->level <= VAR_4->level)
   return 0;
  VAR_4->filter_cnt++;
 }

 return (unsigned long)VAR_4;
}
