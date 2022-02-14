
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf_poly {int deg; } ;
struct bch_control {int dummy; } ;


 unsigned int FUNC_0 (struct bch_control*) ;
 int FUNC_1 (struct bch_control*,unsigned int,struct gf_poly*,struct gf_poly**,struct gf_poly**) ;
 int FUNC_2 (struct bch_control*,struct gf_poly*,unsigned int*) ;
 int FUNC_3 (struct bch_control*,struct gf_poly*,unsigned int*) ;
 int FUNC_4 (struct bch_control*,struct gf_poly*,unsigned int*) ;
 int FUNC_5 (struct bch_control*,struct gf_poly*,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct bch_control *VAR_0, unsigned int VAR_1,
      struct gf_poly *VAR_2, unsigned int *VAR_3)
{
 int VAR_4;
 struct gf_poly *VAR_5, *VAR_6;

 switch (VAR_2->deg) {

 case 1:
  VAR_4 = FUNC_2(VAR_0, VAR_2, VAR_3);
  break;
 case 2:
  VAR_4 = FUNC_3(VAR_0, VAR_2, VAR_3);
  break;
 case 3:
  VAR_4 = FUNC_4(VAR_0, VAR_2, VAR_3);
  break;
 case 4:
  VAR_4 = FUNC_5(VAR_0, VAR_2, VAR_3);
  break;
 default:

  VAR_4 = 0;
  if (VAR_2->deg && (VAR_1 <= FUNC_0(VAR_0))) {
   FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_5, &VAR_6);
   if (VAR_5)
    VAR_4 += FUNC_6(VAR_0, VAR_1+1, VAR_5, VAR_3);
   if (VAR_6)
    VAR_4 += FUNC_6(VAR_0, VAR_1+1, VAR_6, VAR_3+VAR_4);
  }
  break;
 }
 return VAR_4;
}
