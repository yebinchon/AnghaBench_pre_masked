
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pg_wchar ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (scalar_t__ const,unsigned char*) ;

__attribute__((used)) static int
FUNC_2(const pg_wchar *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 while (VAR_2 > 0 && *VAR_0)
 {
  int VAR_4;

  FUNC_1(*VAR_0, VAR_1);
  VAR_4 = FUNC_0(VAR_1);
  VAR_3 += VAR_4;
  VAR_1 += VAR_4;
  VAR_0++;
  VAR_2--;
 }
 *VAR_1 = 0;
 return VAR_3;
}
