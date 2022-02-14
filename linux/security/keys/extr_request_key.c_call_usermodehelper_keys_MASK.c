
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subprocess_info {int dummy; } ;
struct key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct subprocess_info*,int) ;
 struct subprocess_info* FUNC_1 (char const*,char**,char**,int ,int ,int ,struct key*) ;
 int FUNC_2 (struct key*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(const char *VAR_4, char **VAR_5, char **VAR_6,
     struct key *VAR_7, int VAR_8)
{
 struct subprocess_info *VAR_9;

 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_1,
       VAR_3, VAR_2,
       VAR_7);
 if (!VAR_9)
  return -VAR_0;

 FUNC_2(VAR_7);
 return FUNC_0(VAR_9, VAR_8);
}
