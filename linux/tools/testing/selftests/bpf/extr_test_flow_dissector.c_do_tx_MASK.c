
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ,char*,...) ;
 int FUNC_1 (int,char const*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == -1)
  FUNC_0(1, VAR_0, "send");
 if (VAR_4 != VAR_3)
  FUNC_0(1, VAR_0, "send: len (%d < %d)\n", VAR_4, VAR_3);

 return 1;
}
