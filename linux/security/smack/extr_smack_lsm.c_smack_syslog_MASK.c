
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smack_known {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct smack_known* VAR_2 ;
 struct smack_known* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(int VAR_3)
{
 int VAR_4 = 0;
 struct smack_known *VAR_5 = FUNC_1();

 if (FUNC_0(VAR_0))
  return 0;

 if (VAR_2 != ((void*)0) && VAR_2 != VAR_5)
  VAR_4 = -VAR_1;

 return VAR_4;
}
