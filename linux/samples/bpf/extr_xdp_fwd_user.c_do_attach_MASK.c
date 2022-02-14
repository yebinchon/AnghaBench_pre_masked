
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int*,int*,int ) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(int VAR_0, int VAR_1, int VAR_2, const char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, 0);
 if (VAR_4 < 0) {
  FUNC_2("ERROR: failed to attach program to %s\n", VAR_3);
  return VAR_4;
 }


 VAR_4 = FUNC_0(VAR_2, &VAR_0, &VAR_0, 0);
 if (VAR_4)
  FUNC_2("ERROR: failed using device %s as TX-port\n", VAR_3);

 return VAR_4;
}
