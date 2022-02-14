
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char**,int ,struct aa_label*,int,int ) ;
 int FUNC_2 (int *,int ,int ,struct aa_label*,int) ;
 struct aa_label* FUNC_3 (int) ;
 int VAR_7 ;

int FUNC_4(u32 VAR_8, char **VAR_9, u32 *VAR_10)
{

 struct aa_label *VAR_11 = FUNC_3(VAR_8);
 int VAR_12;

 FUNC_0(!VAR_10);

 if (!VAR_11)
  return -VAR_0;

 if (VAR_9)
  VAR_12 = FUNC_1(VAR_9, VAR_7, VAR_11,
     VAR_4 | VAR_5 |
     VAR_3 | VAR_2,
     VAR_6);
 else
  VAR_12 = FUNC_2(((void*)0), 0, VAR_7, VAR_11,
     VAR_4 | VAR_5 |
     VAR_3 | VAR_2);
 if (VAR_12 < 0)
  return -VAR_1;

 *VAR_10 = VAR_12;

 return 0;
}
