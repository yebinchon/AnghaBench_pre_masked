
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_label {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct aa_label*,int ,int ,int,int,int) ;
 int FUNC_2 (int,int ,int ) ;
 struct aa_label* FUNC_3 () ;
 int FUNC_4 (struct aa_label*,int,int,int) ;
 int FUNC_5 (struct aa_label*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct aa_label*) ;

__attribute__((used)) static int FUNC_8(int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct aa_label *VAR_6;
 int VAR_7 = 0;

 FUNC_0(FUNC_6());

 VAR_6 = FUNC_3();
 if (!(VAR_5 || FUNC_7(VAR_6)))
  VAR_7 = FUNC_2(VAR_2,
      FUNC_4(VAR_6, VAR_2, VAR_3, VAR_4),
      FUNC_1(VAR_6, VAR_1, VAR_0,
          VAR_2, VAR_3, VAR_4));
 FUNC_5(VAR_6);

 return VAR_7;
}
