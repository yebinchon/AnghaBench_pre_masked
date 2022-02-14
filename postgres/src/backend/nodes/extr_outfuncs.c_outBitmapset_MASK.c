
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;
typedef int Bitmapset ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (int const*,int) ;

void
FUNC_3(StringInfo VAR_0, const Bitmapset *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0, '(');
 FUNC_1(VAR_0, 'b');
 VAR_2 = -1;
 while ((VAR_2 = FUNC_2(VAR_1, VAR_2)) >= 0)
  FUNC_0(VAR_0, " %d", VAR_2);
 FUNC_1(VAR_0, ')');
}
