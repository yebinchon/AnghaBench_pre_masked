
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_merge_data {int fd2; char* name; int fence; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct sync_merge_data*) ;
 int FUNC_1 (char*,char const*,int) ;

int FUNC_2(const char *VAR_1, int VAR_2, int VAR_3)
{
 struct sync_merge_data VAR_4 = {};
 int VAR_5;

 VAR_4.fd2 = VAR_3;
 FUNC_1(VAR_4.name, VAR_1, sizeof(VAR_4.name) - 1);
 VAR_4.name[sizeof(VAR_4.name) - 1] = '\0';

 VAR_5 = FUNC_0(VAR_2, VAR_0, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_4.fence;
}
