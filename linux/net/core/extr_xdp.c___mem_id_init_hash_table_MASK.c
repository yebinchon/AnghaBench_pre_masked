
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rhashtable*) ;
 struct rhashtable* FUNC_1 (int,int ) ;
 struct rhashtable* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct rhashtable*,int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(void)
{
 struct rhashtable *VAR_5;
 int VAR_6;

 if (FUNC_4(VAR_3))
  return 0;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_5, &VAR_4);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5);
  return VAR_6;
 }
 VAR_2 = VAR_5;
 FUNC_3();
 VAR_3 = 1;

 return 0;
}
