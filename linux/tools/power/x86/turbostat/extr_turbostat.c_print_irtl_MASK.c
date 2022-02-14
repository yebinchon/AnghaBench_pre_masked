
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,int ,unsigned long long*) ;
 unsigned long long* VAR_8 ;
 int VAR_9 ;

void FUNC_2(void)
{
 unsigned long long VAR_10;

 FUNC_1(VAR_6, VAR_1, &VAR_10);
 FUNC_0(VAR_9, "cpu%d: MSR_PKGC3_IRTL: 0x%08llx (", VAR_6, VAR_10);
 FUNC_0(VAR_9, "%svalid, %lld ns)\n", VAR_10 & (1 << 15) ? "" : "NOT",
  (VAR_10 & 0x3FF) * VAR_8[(VAR_10 >> 10) & 0x3]);

 FUNC_1(VAR_6, VAR_2, &VAR_10);
 FUNC_0(VAR_9, "cpu%d: MSR_PKGC6_IRTL: 0x%08llx (", VAR_6, VAR_10);
 FUNC_0(VAR_9, "%svalid, %lld ns)\n", VAR_10 & (1 << 15) ? "" : "NOT",
  (VAR_10 & 0x3FF) * VAR_8[(VAR_10 >> 10) & 0x3]);

 FUNC_1(VAR_6, VAR_3, &VAR_10);
 FUNC_0(VAR_9, "cpu%d: MSR_PKGC7_IRTL: 0x%08llx (", VAR_6, VAR_10);
 FUNC_0(VAR_9, "%svalid, %lld ns)\n", VAR_10 & (1 << 15) ? "" : "NOT",
  (VAR_10 & 0x3FF) * VAR_8[(VAR_10 >> 10) & 0x3]);

 if (!VAR_7)
  return;

 FUNC_1(VAR_6, VAR_4, &VAR_10);
 FUNC_0(VAR_9, "cpu%d: MSR_PKGC8_IRTL: 0x%08llx (", VAR_6, VAR_10);
 FUNC_0(VAR_9, "%svalid, %lld ns)\n", VAR_10 & (1 << 15) ? "" : "NOT",
  (VAR_10 & 0x3FF) * VAR_8[(VAR_10 >> 10) & 0x3]);

 FUNC_1(VAR_6, VAR_5, &VAR_10);
 FUNC_0(VAR_9, "cpu%d: MSR_PKGC9_IRTL: 0x%08llx (", VAR_6, VAR_10);
 FUNC_0(VAR_9, "%svalid, %lld ns)\n", VAR_10 & (1 << 15) ? "" : "NOT",
  (VAR_10 & 0x3FF) * VAR_8[(VAR_10 >> 10) & 0x3]);

 FUNC_1(VAR_6, VAR_0, &VAR_10);
 FUNC_0(VAR_9, "cpu%d: MSR_PKGC10_IRTL: 0x%08llx (", VAR_6, VAR_10);
 FUNC_0(VAR_9, "%svalid, %lld ns)\n", VAR_10 & (1 << 15) ? "" : "NOT",
  (VAR_10 & 0x3FF) * VAR_8[(VAR_10 >> 10) & 0x3]);

}
