
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct seq_file {int dummy; } ;
typedef int s64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct seq_file*,char*,int,...) ;
 int FUNC_4 (struct seq_file*,char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_0, int VAR_1, uint32_t VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;
 uint64_t VAR_6 = 0;
 uint64_t VAR_7;
 int VAR_8;

 int VAR_9 = VAR_1 * 5;

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  s64 VAR_10, VAR_11;
  int VAR_12;

  VAR_10 = FUNC_2();
  FUNC_5(VAR_1);
  VAR_11 = FUNC_2();
  VAR_12 = VAR_11 - VAR_10;

  if (VAR_8 == 0 || VAR_12 < VAR_3)
   VAR_3 = VAR_12;
  if (VAR_8 == 0 || VAR_12 > VAR_4)
   VAR_4 = VAR_12;
  if ((VAR_12 + VAR_9) / 1000 < VAR_1)
   ++VAR_5;
  FUNC_0(VAR_12 < 0);
  VAR_6 += VAR_12;
 }

 VAR_7 = VAR_6;
 FUNC_1(VAR_7, VAR_2);
 FUNC_3(VAR_0, "%d usecs x %d: exp=%d allowed=%d min=%d avg=%lld max=%d",
   VAR_1, VAR_2, VAR_1 * 1000,
   (VAR_1 * 1000) - VAR_9, VAR_3, VAR_7, VAR_4);
 if (VAR_5)
  FUNC_3(VAR_0, " FAIL=%d", VAR_5);
 FUNC_4(VAR_0, "\n");

 return 0;
}
