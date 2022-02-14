
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__,char*) ;
 int FUNC_1 (int,char*,int,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_4)
{
 char VAR_5;
 int VAR_6, VAR_7 = 0;

 while (1) {
  VAR_6 = FUNC_1(VAR_4, &VAR_5, 1, VAR_1);
  if (VAR_6 == -1 && VAR_3 == VAR_0)
   break;
  if (VAR_6 == -1)
   FUNC_0(1, VAR_3, "recv");
  if (VAR_5 != VAR_2)
   FUNC_0(1, 0, "recv: payload mismatch");
  VAR_7++;
 };

 return VAR_7;
}
