
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drr_class {int filter_cnt; } ;
struct Qdisc {int dummy; } ;


 struct drr_class* FUNC_0 (struct Qdisc*,int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1,
      u32 VAR_2)
{
 struct drr_class *VAR_3 = FUNC_0(VAR_0, VAR_2);

 if (VAR_3 != ((void*)0))
  VAR_3->filter_cnt++;

 return (unsigned long)VAR_3;
}
