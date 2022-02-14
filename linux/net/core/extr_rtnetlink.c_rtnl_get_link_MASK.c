
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link {int dummy; } ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 struct rtnl_link** FUNC_1 (int ) ;
 int * VAR_1 ;

__attribute__((used)) static struct rtnl_link *FUNC_2(int VAR_2, int VAR_3)
{
 struct rtnl_link **VAR_4;

 if (VAR_2 >= FUNC_0(VAR_1))
  VAR_2 = VAR_0;

 VAR_4 = FUNC_1(VAR_1[VAR_2]);
 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_1[VAR_0]);

 return VAR_4[VAR_3];
}
