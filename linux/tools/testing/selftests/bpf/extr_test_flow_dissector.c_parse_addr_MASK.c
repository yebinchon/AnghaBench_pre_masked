
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,char const*,void*) ;

__attribute__((used)) static void FUNC_2(int VAR_1, void *VAR_2, const char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3, VAR_2);
 if (VAR_4 == -1)
  FUNC_0(1, VAR_0, "inet_pton");
 if (VAR_4 == 0)
  FUNC_0(1, 0, "inet_pton: bad string");
}
