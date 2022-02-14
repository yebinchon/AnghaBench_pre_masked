
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (struct aa_label*,struct aa_profile*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct aa_profile*,struct path const*,char*,int *,int *,int *,unsigned long,int *,int) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct aa_label *VAR_6, const struct path *VAR_7,
    unsigned long VAR_8)
{
 struct aa_profile *VAR_9;
 char *VAR_10 = ((void*)0);
 int VAR_11;

 FUNC_0(!VAR_6);
 FUNC_0(!VAR_7);


 VAR_8 &= (VAR_1 | VAR_3 | VAR_2 | VAR_0 | VAR_4 |
    VAR_5);

 FUNC_2(VAR_10);
 VAR_11 = FUNC_1(VAR_6, VAR_9,
   FUNC_3(VAR_9, VAR_7, VAR_10, ((void*)0), ((void*)0), ((void*)0),
      VAR_8, ((void*)0), 0));
 FUNC_4(VAR_10);

 return VAR_11;
}
