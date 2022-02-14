
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Qdisc_ops {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct Qdisc_ops const* VAR_3 ;
 int FUNC_1 (int ) ;
 struct Qdisc_ops* FUNC_2 (char const*) ;
 int VAR_4 ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(const char *VAR_5)
{
 const struct Qdisc_ops *VAR_6;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 FUNC_4(&VAR_4);
 VAR_6 = FUNC_2(VAR_5);
 if (!VAR_6) {

  FUNC_5(&VAR_4);
  FUNC_3("sch_%s", VAR_5);
  FUNC_4(&VAR_4);

  VAR_6 = FUNC_2(VAR_5);
 }

 if (VAR_6) {

  FUNC_1(VAR_3->owner);
  VAR_3 = VAR_6;
 }
 FUNC_5(&VAR_4);

 return VAR_6 ? 0 : -VAR_1;
}
