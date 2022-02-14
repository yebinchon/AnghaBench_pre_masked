
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int,int) ;
 scalar_t__ FUNC_4 (int,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(void)
{
 int VAR_8;




 if ((VAR_8 = FUNC_3(VAR_5, VAR_2 | VAR_1, VAR_3 | VAR_4)) == -1)
  FUNC_1("could not open output file");
 VAR_7 = 1;
 if (FUNC_4(VAR_8, VAR_6, VAR_0) !=
  VAR_0)
  FUNC_1("write failed");


 if (FUNC_2(VAR_8) != 0)
  FUNC_1("fsync failed");

 FUNC_0(VAR_8);
}
