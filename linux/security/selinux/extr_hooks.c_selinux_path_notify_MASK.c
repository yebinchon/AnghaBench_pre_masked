
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct path {TYPE_2__* dentry; } ;
struct TYPE_3__ {struct path path; } ;
struct common_audit_data {TYPE_1__ u; int type; } ;
struct TYPE_4__ {int d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct path const*,int ) ;
 int FUNC_2 (int ,int ,int ,struct common_audit_data*) ;

__attribute__((used)) static int FUNC_3(const struct path *VAR_12, u64 VAR_13,
      unsigned int VAR_14)
{
 int VAR_15;
 u32 VAR_16;

 struct common_audit_data VAR_17;

 VAR_17.type = VAR_11;
 VAR_17.u.path = *VAR_12;





 switch (VAR_14) {
 case 128:
  VAR_16 = VAR_4;
  break;
 case 129:
  VAR_16 = VAR_6;
  VAR_15 = FUNC_2(FUNC_0(), VAR_12->dentry->d_sb,
      VAR_2, &VAR_17);
  if (VAR_15)
   return VAR_15;
  break;
 case 130:
  VAR_16 = VAR_3;
  break;
 default:
  return -VAR_1;
 }


 if (VAR_13 & (VAR_0))
  VAR_16 |= VAR_7;


 if (VAR_13 & (VAR_8 | VAR_9 | VAR_10))
  VAR_16 |= VAR_5;

 return FUNC_1(FUNC_0(), VAR_12, VAR_16);
}
