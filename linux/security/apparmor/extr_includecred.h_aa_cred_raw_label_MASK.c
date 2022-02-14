
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int dummy; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 struct aa_label* FUNC_1 (struct cred const*) ;

__attribute__((used)) static inline struct aa_label *FUNC_2(const struct cred *VAR_0)
{
 struct aa_label *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(!VAR_1);
 return VAR_1;
}
