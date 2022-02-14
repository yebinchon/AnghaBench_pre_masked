
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ,int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(int VAR_2, const char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0, VAR_1, VAR_3, FUNC_2(VAR_3)+1);
 if (VAR_4 < 0)
  FUNC_0("setsockopt(SO_BINDTODEVICE)");

 return VAR_4;
}
