
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct setuid_rule {void* dst_uid; void* src_uid; } ;
struct file {TYPE_1__* f_cred; } ;
struct TYPE_2__ {int user_ns; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int *) ;
 void* FUNC_1 (int ,int ) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, char *VAR_2,
 struct setuid_rule *VAR_3)
{
 char *VAR_4;
 int VAR_5;
 u32 VAR_6, VAR_7;


 VAR_4 = FUNC_2(VAR_2, ':');
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 *VAR_4 = '\0';
 VAR_4++;

 VAR_5 = FUNC_0(VAR_2, 0, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_4, 0, &VAR_7);
 if (VAR_5)
  return VAR_5;

 VAR_3->src_uid = FUNC_1(VAR_1->f_cred->user_ns, VAR_6);
 VAR_3->dst_uid = FUNC_1(VAR_1->f_cred->user_ns, VAR_7);
 if (!FUNC_3(VAR_3->src_uid) || !FUNC_3(VAR_3->dst_uid))
  return -VAR_0;

 return 0;
}
