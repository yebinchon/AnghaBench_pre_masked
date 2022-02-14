
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct machine {int dummy; } ;
struct dso {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dso*,struct machine*,int ,int *,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_2(struct dso *VAR_0, struct machine *VAR_1,
      u64 VAR_2, u8 *VAR_3, ssize_t VAR_4)
{
 ssize_t VAR_5 = 0;
 u8 *VAR_6 = VAR_3;

 do {
  ssize_t VAR_7;

  VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_6, VAR_4);
  if (VAR_7 < 0)
   return VAR_7;


  if (!VAR_7)
   break;

  FUNC_0(VAR_7 > VAR_4);

  VAR_5 += VAR_7;
  VAR_6 += VAR_7;
  VAR_2 += VAR_7;
  VAR_4 -= VAR_7;

 } while (VAR_4);

 return VAR_5;
}
