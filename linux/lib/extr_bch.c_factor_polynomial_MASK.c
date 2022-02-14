
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf_poly {scalar_t__ deg; } ;
struct gf_poly_deg1 {struct gf_poly poly; } ;
struct bch_control {struct gf_poly** poly_2t; } ;


 int FUNC_0 (struct bch_control*,int,struct gf_poly*,struct gf_poly*,struct gf_poly*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct gf_poly*,struct gf_poly*) ;
 int FUNC_3 (struct bch_control*,struct gf_poly*,struct gf_poly*,struct gf_poly*) ;
 struct gf_poly* FUNC_4 (struct bch_control*,struct gf_poly*,struct gf_poly*) ;
 int FUNC_5 (struct gf_poly*) ;

__attribute__((used)) static void FUNC_6(struct bch_control *VAR_0, int VAR_1, struct gf_poly *VAR_2,
         struct gf_poly **VAR_3, struct gf_poly **VAR_4)
{
 struct gf_poly *VAR_5 = VAR_0->poly_2t[0];
 struct gf_poly *VAR_6 = VAR_0->poly_2t[1];
 struct gf_poly *VAR_7 = VAR_0->poly_2t[2];
 struct gf_poly *VAR_8 = VAR_0->poly_2t[3];
 struct gf_poly *VAR_9;

 FUNC_1("factoring %s...\n", FUNC_5(VAR_2));

 *VAR_3 = VAR_2;
 *VAR_4 = ((void*)0);


 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_8, VAR_7);

 if (VAR_7->deg > 0) {

  FUNC_2(VAR_5, VAR_2);
  VAR_9 = FUNC_4(VAR_0, VAR_5, VAR_7);
  if (VAR_9->deg < VAR_2->deg) {

   FUNC_3(VAR_0, VAR_2, VAR_9, VAR_6);

   *VAR_4 = &((struct gf_poly_deg1 *)VAR_2)[VAR_9->deg].poly;
   FUNC_2(*VAR_3, VAR_9);
   FUNC_2(*VAR_4, VAR_6);
  }
 }
}
