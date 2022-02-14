
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct cred {int dummy; } ;
struct TYPE_2__ {int cap; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;
struct av_decision {int dummy; } ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int ,int ,int ,struct av_decision*,int,struct common_audit_data*,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ,struct av_decision*) ;
 int FUNC_5 (struct cred const*) ;
 int FUNC_6 (char*,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(const struct cred *VAR_8,
          int VAR_9, unsigned int VAR_10, bool VAR_11)
{
 struct common_audit_data VAR_12;
 struct av_decision VAR_13;
 u16 VAR_14;
 u32 VAR_15 = FUNC_5(VAR_8);
 u32 VAR_16 = FUNC_2(VAR_9);
 int VAR_17;

 VAR_12.type = VAR_2;
 VAR_12.u.cap = VAR_9;

 switch (FUNC_1(VAR_9)) {
 case 0:
  VAR_14 = VAR_11 ? VAR_4 : VAR_6;
  break;
 case 1:
  VAR_14 = VAR_11 ? VAR_5 : VAR_3;
  break;
 default:
  FUNC_6("SELinux:  out of range capability %d\n", VAR_9);
  FUNC_0();
  return -VAR_1;
 }

 VAR_17 = FUNC_4(&VAR_7,
      VAR_15, VAR_15, VAR_14, VAR_16, 0, &VAR_13);
 if (!(VAR_10 & VAR_0)) {
  int VAR_18 = FUNC_3(&VAR_7,
        VAR_15, VAR_15, VAR_14, VAR_16, &VAR_13, VAR_17, &VAR_12, 0);
  if (VAR_18)
   return VAR_18;
 }
 return VAR_17;
}
