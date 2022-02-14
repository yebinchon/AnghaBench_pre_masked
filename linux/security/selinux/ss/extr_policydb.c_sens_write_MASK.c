
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct policy_data {void* fp; } ;
struct level_datum {size_t isalias; int level; } ;
typedef char __le32 ;


 char FUNC_0 (size_t) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (char*,int,size_t,void*) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, void *VAR_1, void *VAR_2)
{
 char *VAR_3 = VAR_0;
 struct level_datum *VAR_4 = VAR_1;
 struct policy_data *VAR_5 = VAR_2;
 void *VAR_6 = VAR_5->fp;
 __le32 VAR_7[2];
 size_t VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_3);
 VAR_7[0] = FUNC_0(VAR_8);
 VAR_7[1] = FUNC_0(VAR_4->isalias);
 VAR_9 = FUNC_2(VAR_7, sizeof(u32), 2, VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_3, 1, VAR_8, VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_4->level, VAR_6);
 if (VAR_9)
  return VAR_9;

 return 0;
}
