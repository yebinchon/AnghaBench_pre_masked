
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 scalar_t__ FUNC_0 (int ,char*,int,char*,int) ;
 scalar_t__ FUNC_1 (char*,int,char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, int VAR_1,
      u64 VAR_2,
      u64 VAR_3, u64 VAR_4,
      u64 VAR_5, u64 VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0;
 u64 VAR_9, VAR_10 = 0;

 VAR_9 = VAR_3 / VAR_2;
 if (VAR_9) {
  VAR_7 += FUNC_0(VAR_8++, "cycles",
    VAR_9,
    VAR_0 + VAR_7, VAR_1 - VAR_7);
 }

 if (VAR_4 && VAR_6) {
  VAR_10 = VAR_4 / VAR_6;
  if (VAR_10) {
   VAR_7 += FUNC_0(VAR_8++, "iter",
     VAR_10, VAR_0 + VAR_7, VAR_1 - VAR_7);

   VAR_7 += FUNC_0(VAR_8++, "avg_cycles",
     VAR_5 / VAR_4,
     VAR_0 + VAR_7, VAR_1 - VAR_7);
  }
 }

 if (VAR_8)
  VAR_7 += FUNC_1(VAR_0 + VAR_7, VAR_1 - VAR_7, ")");

 return VAR_7;
}
