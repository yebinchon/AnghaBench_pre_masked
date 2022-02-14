
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(int VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0, 0);
 if (VAR_4 < 0) {
  FUNC_1("fcntl(F_GETFL)");
  return VAR_4;
 }
 VAR_3 |= VAR_4;
 VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_3);
 if (VAR_4 < 0) {
  FUNC_1("fcntl(F_SETFL)");
  return VAR_4;
 }
 return VAR_4;
}
