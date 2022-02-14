
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int ,int ,struct cred*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cred*,int ) ;
 int FUNC_2 (struct cred*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct cred *VAR_1, gfp_t VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_0, 0, VAR_1, VAR_2);
 if (FUNC_3(VAR_3))
  FUNC_2(VAR_1);
 return VAR_3;
}
