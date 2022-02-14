
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mutex*) ;
 int FUNC_2 (struct mutex*,int ) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (struct mutex*,struct mutex*) ;

__attribute__((used)) static int FUNC_5(struct mutex *VAR_1, struct mutex *VAR_2)
{
 int VAR_3;

 if (VAR_2 > VAR_1)
  FUNC_4(VAR_1, VAR_2);

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3 && FUNC_0(VAR_1 != VAR_2)) {
  VAR_3 = FUNC_2(VAR_2, VAR_0);
  if (VAR_3)
   FUNC_3(VAR_1);
 }

 return VAR_3;
}
