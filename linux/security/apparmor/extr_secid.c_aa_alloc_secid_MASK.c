
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_label {int secid; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct aa_label*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct aa_label *VAR_5, gfp_t VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 FUNC_2(VAR_6);
 FUNC_4(&VAR_4, VAR_7);
 VAR_8 = FUNC_1(&VAR_3, VAR_5, VAR_0, 0, VAR_2);
 FUNC_5(&VAR_4, VAR_7);
 FUNC_3();

 if (VAR_8 < 0) {
  VAR_5->secid = VAR_1;
  return VAR_8;
 }

 FUNC_0(VAR_8 == VAR_1);
 VAR_5->secid = VAR_8;
 return 0;
}
