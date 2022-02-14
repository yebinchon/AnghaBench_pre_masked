
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char*,unsigned long,unsigned long,unsigned long) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_6, unsigned long VAR_7)
{
 FUNC_0(VAR_3,
  "%s tx: %6lu MB/s %8lu calls/s %6lu msg/s\n",
  VAR_2 ? "tcp" : "udp",
  (VAR_6 * VAR_1) >> 20,
  VAR_7, VAR_6);

 if (VAR_0) {
  VAR_4 += VAR_6;
  VAR_5 += VAR_7;
 }
}
