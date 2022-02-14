
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* from; } ;
typedef TYPE_1__ substring_t ;
struct kernel_pkey_params {char* info; char* encoding; char* hash_algo; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 scalar_t__ FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (char*,int ,TYPE_1__*) ;
 int VAR_3 ;
 char* FUNC_2 (char**,char*) ;

__attribute__((used)) static int FUNC_3(struct kernel_pkey_params *VAR_4)
{
 unsigned long VAR_5 = 0;
 substring_t VAR_6[VAR_1];
 char *VAR_7 = VAR_4->info, *VAR_8, *VAR_9;
 int VAR_10;

 while ((VAR_8 = FUNC_2(&VAR_7, " \t"))) {
  if (*VAR_8 == '\0' || *VAR_8 == ' ' || *VAR_8 == '\t')
   continue;
  VAR_10 = FUNC_1(VAR_8, VAR_3, VAR_6);
  if (VAR_10 == VAR_2)
   return -VAR_0;
  if (FUNC_0(VAR_10, &VAR_5))
   return -VAR_0;
  VAR_9 = VAR_6[0].from;
  if (!VAR_9[0])
   return -VAR_0;

  switch (VAR_10) {
  case 129:
   VAR_4->encoding = VAR_9;
   break;

  case 128:
   VAR_4->hash_algo = VAR_9;
   break;

  default:
   return -VAR_0;
  }
 }

 return 0;
}
