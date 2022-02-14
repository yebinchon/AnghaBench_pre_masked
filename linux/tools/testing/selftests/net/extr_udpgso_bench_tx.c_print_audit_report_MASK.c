
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int ,char*,unsigned long,unsigned long) ;
 int FUNC_1 (int ,char*,...) ;
 unsigned long VAR_4 ;
 long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_10, unsigned long VAR_11)
{
 unsigned long VAR_12;

 VAR_12 = VAR_8 - VAR_9;
 if (!VAR_12)
  return;

 FUNC_1(VAR_7, "Summary over %lu.%03lu seconds...\n",
   VAR_12 / 1000, VAR_12 % 1000);
 FUNC_1(VAR_7,
  "sum %s tx: %6lu MB/s %10lu calls (%lu/s) %10lu msgs (%lu/s)\n",
  VAR_1 ? "tcp" : "udp",
  ((VAR_10 * VAR_0) >> 10) / VAR_12,
  VAR_11, VAR_11 * 1000 / VAR_12,
  VAR_10, VAR_10 * 1000 / VAR_12);

 if (VAR_2) {
  if (VAR_5)
   FUNC_0(1, 0,
         "Expected clean TX Timestamps: %9lu msgs received %6lu errors",
         VAR_4, VAR_5);
  if (VAR_4 != VAR_11)
   FUNC_0(1, 0,
         "Unexpected number of TX Timestamps: %9lu expected %9lu received",
         VAR_11, VAR_4);
  FUNC_1(VAR_7,
   "Tx Timestamps: %19lu received %17lu errors\n",
   VAR_4, VAR_5);
 }

 if (VAR_3) {
  if (VAR_6 != VAR_11)
   FUNC_0(1, 0, "Unexpected number of Zerocopy completions: %9lu expected %9lu received",
         VAR_11, VAR_6);
  FUNC_1(VAR_7,
   "Zerocopy acks: %19lu\n",
   VAR_6);
 }
}
