
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umh_info {struct file* pipe_from_umh; struct file* pipe_to_umh; } ;
struct subprocess_info {struct umh_info* data; } ;
struct file {int dummy; } ;
struct cred {int dummy; } ;


 int FUNC_0 (struct file**,int ) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int,struct file*,int ) ;

__attribute__((used)) static int FUNC_3(struct subprocess_info *VAR_0, struct cred *VAR_1)
{
 struct umh_info *VAR_2 = VAR_0->data;
 struct file *VAR_3[2];
 struct file *VAR_4[2];
 int VAR_5;


 VAR_5 = FUNC_0(VAR_4, 0);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_2(0, VAR_4[0], 0);
 FUNC_1(VAR_4[0]);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4[1]);
  return VAR_5;
 }


 VAR_5 = FUNC_0(VAR_3, 0);
 if (VAR_5) {
  FUNC_1(VAR_4[1]);
  FUNC_2(0, ((void*)0), 0);
  return VAR_5;
 }
 VAR_5 = FUNC_2(1, VAR_3[1], 0);
 FUNC_1(VAR_3[1]);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4[1]);
  FUNC_2(0, ((void*)0), 0);
  FUNC_1(VAR_3[0]);
  return VAR_5;
 }

 VAR_2->pipe_to_umh = VAR_4[1];
 VAR_2->pipe_from_umh = VAR_3[0];
 return 0;
}
