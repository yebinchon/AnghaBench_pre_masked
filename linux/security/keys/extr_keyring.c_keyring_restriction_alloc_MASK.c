
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_restriction {int check; } ;
typedef int key_restrict_link_func_t ;


 int VAR_0 ;
 struct key_restriction* FUNC_0 (int ) ;
 int VAR_1 ;
 struct key_restriction* FUNC_1 (int,int ) ;

__attribute__((used)) static struct key_restriction *FUNC_2(
 key_restrict_link_func_t VAR_2)
{
 struct key_restriction *VAR_3 =
  FUNC_1(sizeof(struct key_restriction), VAR_1);

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->check = VAR_2;

 return VAR_3;
}
