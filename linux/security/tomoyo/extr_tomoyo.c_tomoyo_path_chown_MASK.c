
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,struct path const*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct path *VAR_3, kuid_t VAR_4, kgid_t VAR_5)
{
 int VAR_6 = 0;

 if (FUNC_4(VAR_4))
  VAR_6 = FUNC_3(VAR_1, VAR_3,
      FUNC_1(&VAR_2, VAR_4));
 if (!VAR_6 && FUNC_2(VAR_5))
  VAR_6 = FUNC_3(VAR_0, VAR_3,
      FUNC_0(&VAR_2, VAR_5));
 return VAR_6;
}
