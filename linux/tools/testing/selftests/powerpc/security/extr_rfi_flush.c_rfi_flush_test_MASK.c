
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
struct perf_event_read {unsigned long l1d_misses; } ;
typedef scalar_t__ __u64 ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int,scalar_t__,char,int,int,int) ;
 int FUNC_11 (int,struct perf_event_read*,int) ;
 scalar_t__ FUNC_12 (char*,int*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_15 (char*,int) ;

int FUNC_16(void)
{
 char *VAR_2;
 int VAR_3 = 10;
 int VAR_4, VAR_5 = 0, VAR_6, VAR_7 = 0;
 struct perf_event_read VAR_8;
 __u64 VAR_9 = 0;
 unsigned long VAR_10 = 100000, VAR_11 = 24 * 1024;
 unsigned long VAR_12;
 int VAR_13, VAR_14;

 FUNC_1(FUNC_3() != 0);

 if (FUNC_12("powerpc/rfi_flush", &VAR_13)) {
  FUNC_9("Unable to read powerpc/rfi_flush debugfs file");
  FUNC_1(1);
 }

 VAR_14 = VAR_13;

 VAR_4 = FUNC_7(VAR_1, 0x400f0, -1);
 FUNC_0(VAR_4 < 0);

 VAR_2 = (char *)FUNC_4(VAR_11, VAR_0);

 FUNC_0(FUNC_6(VAR_4));

 FUNC_13(1);

 VAR_6 = VAR_3;





 VAR_12 = VAR_10 * (VAR_11 / VAR_0 - 2);

again:
 FUNC_0(FUNC_8(VAR_4));

 FUNC_14(VAR_2, VAR_10, VAR_11);

 FUNC_0(FUNC_11(VAR_4, &VAR_8, sizeof(VAR_8)) != sizeof(VAR_8));

 if (VAR_14 && VAR_8.l1d_misses >= VAR_12)
  VAR_5++;
 else if (!VAR_14 && VAR_8.l1d_misses < (VAR_12 / 2))
  VAR_5++;

 VAR_9 += VAR_8.l1d_misses;

 while (--VAR_6)
  goto again;

 if (VAR_5 < VAR_3) {
  FUNC_10("FAIL (L1D misses with rfi_flush=%d: %llu %c %lu) [%d/%d failures]\n",
         VAR_14, VAR_9, VAR_14 ? '<' : '>',
         VAR_14 ? VAR_3 * VAR_12 :
         VAR_3 * VAR_12 / 2,
         VAR_3 - VAR_5, VAR_3);
  VAR_7 = 1;
 } else
  FUNC_10("PASS (L1D misses with rfi_flush=%d: %llu %c %lu) [%d/%d pass]\n",
         VAR_14, VAR_9, VAR_14 ? '>' : '<',
         VAR_14 ? VAR_3 * VAR_12 :
         VAR_3 * VAR_12 / 2,
         VAR_5, VAR_3);

 if (VAR_14 == VAR_13) {
  VAR_14 = !VAR_13;
  if (FUNC_15("powerpc/rfi_flush", VAR_14) < 0) {
   FUNC_9("error writing to powerpc/rfi_flush debugfs file");
   return 1;
  }
  VAR_6 = VAR_3;
  VAR_9 = 0;
  VAR_5 = 0;
  goto again;
 }

 FUNC_5(VAR_4);
 FUNC_2(VAR_4);

 FUNC_13(0);

 if (FUNC_15("powerpc/rfi_flush", VAR_13) < 0) {
  FUNC_9("unable to restore original value of powerpc/rfi_flush debugfs file");
  return 1;
 }

 return VAR_7;
}
