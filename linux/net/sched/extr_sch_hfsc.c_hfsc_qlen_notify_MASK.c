
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfsc_class {int cl_flags; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfsc_class*) ;
 int FUNC_1 (struct hfsc_class*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct Qdisc *VAR_1, unsigned long VAR_2)
{
 struct hfsc_class *VAR_3 = (struct hfsc_class *)VAR_2;




 FUNC_1(VAR_3, 0, 0);
 if (VAR_3->cl_flags & VAR_0)
  FUNC_0(VAR_3);
}
