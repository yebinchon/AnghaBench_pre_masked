
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
struct EncStat {int buf; int ciph; } ;
typedef int PushFilter ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_2(PushFilter *VAR_1, void *VAR_2, const uint8 *VAR_3, int VAR_4)
{
 int VAR_5;
 struct EncStat *VAR_6 = VAR_2;
 int VAR_7 = VAR_4;

 while (VAR_7 > 0)
 {
  int VAR_8 = VAR_7 > VAR_0 ? VAR_0 : VAR_7;

  VAR_5 = FUNC_0(VAR_6->ciph, VAR_3, VAR_8, VAR_6->buf);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_5 = FUNC_1(VAR_1, VAR_6->buf, VAR_8);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_3 += VAR_8;
  VAR_7 -= VAR_8;
 }
 return 0;
}
