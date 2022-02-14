
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_ns {int dummy; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct aa_ns* FUNC_1 () ;
 int FUNC_2 (char*,int,struct aa_ns*,struct aa_label*,int) ;
 int FUNC_3 (struct aa_ns*,struct aa_ns*,int) ;
 int FUNC_4 (struct aa_ns*) ;
 char* FUNC_5 (int,int ) ;
 struct aa_ns* FUNC_6 (struct aa_label*) ;

int FUNC_7(struct aa_label *VAR_6, char **VAR_7)
{
 struct aa_ns *VAR_8 = FUNC_6(VAR_6);
 struct aa_ns *VAR_9 = FUNC_1();
 int VAR_10;

 if (!FUNC_3(VAR_9, VAR_8, 1)) {
  FUNC_4(VAR_9);
  return -VAR_0;
 }

 VAR_10 = FUNC_2(((void*)0), 0, VAR_9, VAR_6,
    VAR_3 | VAR_4 |
    VAR_2);
 FUNC_0(VAR_10 < 0);

 *VAR_7 = FUNC_5(VAR_10 + 2, VAR_5);
 if (!*VAR_7) {
  FUNC_4(VAR_9);
  return -VAR_1;
 }

 VAR_10 = FUNC_2(*VAR_7, VAR_10 + 2, VAR_9, VAR_6,
    VAR_3 | VAR_4 |
    VAR_2);
 if (VAR_10 < 0) {
  FUNC_4(VAR_9);
  return VAR_10;
 }

 (*VAR_7)[VAR_10] = '\n';
 (*VAR_7)[VAR_10 + 1] = 0;

 FUNC_4(VAR_9);
 return VAR_10 + 1;
}
