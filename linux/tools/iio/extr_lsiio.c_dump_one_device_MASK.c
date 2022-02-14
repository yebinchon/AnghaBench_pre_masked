
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*) ;
 int VAR_3 ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,char const*,char*) ;
 int FUNC_3 (char const*,char*,int*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_5(const char *VAR_6)
{
 char VAR_7[VAR_1];
 int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_6 + FUNC_4(VAR_3) + FUNC_4(VAR_4), "%i",
       &VAR_8);
 if (VAR_9 != 1)
  return -VAR_0;

 VAR_9 = FUNC_2("name", VAR_6, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_1("Device %03d: %s\n", VAR_8, VAR_7);

 if (VAR_5 >= VAR_2)
  return FUNC_0(VAR_6);

 return 0;
}
