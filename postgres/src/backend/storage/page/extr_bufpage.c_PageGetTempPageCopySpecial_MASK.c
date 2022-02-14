
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef scalar_t__ Page ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

Page
FUNC_6(Page VAR_0)
{
 Size VAR_1;
 Page VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 VAR_2 = (Page) FUNC_5(VAR_1);

 FUNC_3(VAR_2, VAR_1, FUNC_2(VAR_0));
 FUNC_4(FUNC_1(VAR_2),
     FUNC_1(VAR_0),
     FUNC_2(VAR_0));

 return VAR_2;
}
