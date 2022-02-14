
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct htb_class {int filter_cnt; } ;
struct Qdisc {int dummy; } ;


 struct htb_class* FUNC_0 (int ,struct Qdisc*) ;

__attribute__((used)) static unsigned long FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1,
         u32 VAR_2)
{
 struct htb_class *VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3)
  VAR_3->filter_cnt++;
 return (unsigned long)VAR_3;
}
