
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int PushFilter ;
typedef int MBuf ;


 int FUNC_0 (int *,int const*,int) ;

__attribute__((used)) static int
FUNC_1(PushFilter *VAR_0, void *VAR_1, const uint8 *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 MBuf *VAR_5 = VAR_1;

 if (VAR_3 > 0)
  VAR_4 = FUNC_0(VAR_5, VAR_2, VAR_3);
 return VAR_4 < 0 ? VAR_4 : 0;
}
