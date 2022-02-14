
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path_cond {int dummy; } ;
struct path {int dummy; } ;
struct aa_label {int dummy; } ;


 struct aa_label* FUNC_0 () ;
 int FUNC_1 (struct aa_label*) ;
 int FUNC_2 (char const*,struct aa_label*,struct path const*,int ,int ,struct path_cond*) ;
 int FUNC_3 (struct aa_label*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, const struct path *VAR_1, u32 VAR_2,
         struct path_cond *VAR_3)
{
 struct aa_label *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_0();
 if (!FUNC_3(VAR_4))
  VAR_5 = FUNC_2(VAR_0, VAR_4, VAR_1, 0, VAR_2, VAR_3);
 FUNC_1(VAR_4);

 return VAR_5;
}
