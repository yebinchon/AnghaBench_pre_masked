
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (int *,char const*,int,char const**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,char const**,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3, const char **VAR_4)
{
 int VAR_5 = FUNC_1(VAR_4);

 FUNC_2(&VAR_2, VAR_3, VAR_5, VAR_4);
 VAR_5 = FUNC_3(VAR_5, VAR_4, VAR_1, VAR_0, 0);
 if (VAR_5)
  goto err;

 if (FUNC_0(VAR_3))
  goto err;

 return 0;

err:
 return -1;
}
