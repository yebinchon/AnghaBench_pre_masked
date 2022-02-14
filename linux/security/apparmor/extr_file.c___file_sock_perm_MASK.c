
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct socket {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct aa_label*,struct aa_label*) ;
 int FUNC_2 (struct aa_label*,char const*,scalar_t__,struct socket*) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,struct aa_label*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(const char *VAR_0, struct aa_label *VAR_1,
       struct aa_label *VAR_2, struct file *VAR_3,
       u32 VAR_4, u32 VAR_5)
{
 struct socket *VAR_6 = (struct socket *) VAR_3->private_data;
 int VAR_7;

 FUNC_0(!VAR_6);


 if (!VAR_5 && FUNC_1(VAR_2, VAR_1))
  return 0;


 VAR_7 = FUNC_2(VAR_1, VAR_0, VAR_4, VAR_6);
 if (VAR_5) {


  FUNC_4(VAR_7, FUNC_2(VAR_2, VAR_0, VAR_4, VAR_6));
 }
 if (!VAR_7)
  FUNC_5(FUNC_3(VAR_3), VAR_1, VAR_4);

 return VAR_7;
}
