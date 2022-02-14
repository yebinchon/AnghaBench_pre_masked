
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_buffer {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 int FUNC_0 (struct audit_buffer*,char*) ;

__attribute__((used)) static void FUNC_1(struct audit_buffer *VAR_23, unsigned long VAR_24)
{
 if (VAR_24 & VAR_13)
  FUNC_0(VAR_23, "ro");
 else
  FUNC_0(VAR_23, "rw");
 if (VAR_24 & VAR_9)
  FUNC_0(VAR_23, ", nosuid");
 if (VAR_24 & VAR_6)
  FUNC_0(VAR_23, ", nodev");
 if (VAR_24 & VAR_8)
  FUNC_0(VAR_23, ", noexec");
 if (VAR_24 & VAR_21)
  FUNC_0(VAR_23, ", sync");
 if (VAR_24 & VAR_16)
  FUNC_0(VAR_23, ", remount");
 if (VAR_24 & VAR_3)
  FUNC_0(VAR_23, ", mand");
 if (VAR_24 & VAR_1)
  FUNC_0(VAR_23, ", dirsync");
 if (VAR_24 & VAR_5)
  FUNC_0(VAR_23, ", noatime");
 if (VAR_24 & VAR_7)
  FUNC_0(VAR_23, ", nodiratime");
 if (VAR_24 & VAR_0)
  FUNC_0(VAR_23, VAR_24 & VAR_14 ? ", rbind" : ", bind");
 if (VAR_24 & VAR_4)
  FUNC_0(VAR_23, ", move");
 if (VAR_24 & VAR_18)
  FUNC_0(VAR_23, ", silent");
 if (VAR_24 & VAR_11)
  FUNC_0(VAR_23, ", acl");
 if (VAR_24 & VAR_22)
  FUNC_0(VAR_23, VAR_24 & VAR_14 ? ", runbindable" :
     ", unbindable");
 if (VAR_24 & VAR_12)
  FUNC_0(VAR_23, VAR_24 & VAR_14 ? ", rprivate" :
     ", private");
 if (VAR_24 & VAR_19)
  FUNC_0(VAR_23, VAR_24 & VAR_14 ? ", rslave" :
     ", slave");
 if (VAR_24 & VAR_17)
  FUNC_0(VAR_23, VAR_24 & VAR_14 ? ", rshared" :
     ", shared");
 if (VAR_24 & VAR_15)
  FUNC_0(VAR_23, ", relatime");
 if (VAR_24 & VAR_2)
  FUNC_0(VAR_23, ", iversion");
 if (VAR_24 & VAR_20)
  FUNC_0(VAR_23, ", strictatime");
 if (VAR_24 & VAR_10)
  FUNC_0(VAR_23, ", nouser");
}
