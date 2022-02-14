
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf_poly {scalar_t__ deg; } ;
struct bch_control {int dummy; } ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (struct bch_control*,struct gf_poly*,struct gf_poly*,int *) ;
 int FUNC_2 (struct gf_poly*) ;

__attribute__((used)) static struct gf_poly *FUNC_3(struct bch_control *VAR_0, struct gf_poly *VAR_1,
       struct gf_poly *VAR_2)
{
 struct gf_poly *VAR_3;

 FUNC_0("gcd(%s,%s)=", FUNC_2(VAR_1), FUNC_2(VAR_2));

 if (VAR_1->deg < VAR_2->deg) {
  VAR_3 = VAR_2;
  VAR_2 = VAR_1;
  VAR_1 = VAR_3;
 }

 while (VAR_2->deg > 0) {
  FUNC_1(VAR_0, VAR_1, VAR_2, ((void*)0));
  VAR_3 = VAR_2;
  VAR_2 = VAR_1;
  VAR_1 = VAR_3;
 }

 FUNC_0("%s\n", FUNC_2(VAR_1));

 return VAR_1;
}
