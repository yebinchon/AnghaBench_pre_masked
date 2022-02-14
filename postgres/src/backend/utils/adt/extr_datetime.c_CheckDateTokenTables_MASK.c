
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

bool
FUNC_3(void)
{
 bool VAR_6 = 1;

 FUNC_0(VAR_1 == FUNC_2(1970, 1, 1));
 FUNC_0(VAR_0 == FUNC_2(2000, 1, 1));

 VAR_6 &= FUNC_1("datetktbl", VAR_2, VAR_4);
 VAR_6 &= FUNC_1("deltatktbl", VAR_3, VAR_5);
 return VAR_6;
}
