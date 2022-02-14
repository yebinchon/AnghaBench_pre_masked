
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_info {struct nlattr** attrs; } ;
struct fd {TYPE_2__* file; } ;
struct cgroupstats {int dummy; } ;
struct TYPE_3__ {int dentry; } ;
struct TYPE_4__ {TYPE_1__ f_path; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cgroupstats*,int ) ;
 struct fd FUNC_1 (int ) ;
 int FUNC_2 (struct fd) ;
 int FUNC_3 (struct cgroupstats*,int ,int) ;
 struct cgroupstats* FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ,int) ;
 size_t FUNC_7 (int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct genl_info*,int ,struct sk_buff**,size_t) ;
 int FUNC_10 (struct sk_buff*,struct genl_info*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 int VAR_7 = 0;
 struct sk_buff *VAR_8;
 struct cgroupstats *VAR_9;
 struct nlattr *VAR_10;
 size_t VAR_11;
 u32 VAR_12;
 struct fd VAR_13;

 VAR_10 = VAR_6->attrs[VAR_0];
 if (!VAR_10)
  return -VAR_3;

 VAR_12 = FUNC_5(VAR_6->attrs[VAR_0]);
 VAR_13 = FUNC_1(VAR_12);
 if (!VAR_13.file)
  return 0;

 VAR_11 = FUNC_7(sizeof(struct cgroupstats));

 VAR_7 = FUNC_9(VAR_6, VAR_1, &VAR_8,
    VAR_11);
 if (VAR_7 < 0)
  goto err;

 VAR_10 = FUNC_6(VAR_8, VAR_2,
    sizeof(struct cgroupstats));
 if (VAR_10 == ((void*)0)) {
  FUNC_8(VAR_8);
  VAR_7 = -VAR_4;
  goto err;
 }

 VAR_9 = FUNC_4(VAR_10);
 FUNC_3(VAR_9, 0, sizeof(*VAR_9));

 VAR_7 = FUNC_0(VAR_9, VAR_13.file->f_path.dentry);
 if (VAR_7 < 0) {
  FUNC_8(VAR_8);
  goto err;
 }

 VAR_7 = FUNC_10(VAR_8, VAR_6);

err:
 FUNC_2(VAR_13);
 return VAR_7;
}
