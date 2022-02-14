
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_parse_result {int dummy; } ;
struct fs_parameter {int * string; } ;
struct fs_context {int security; } ;


 int FUNC_0 (struct fs_context*,int *,struct fs_parameter*,struct fs_parse_result*) ;
 int FUNC_1 (int,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_1,
     struct fs_parameter *VAR_2)
{
 struct fs_parse_result VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_1, &VAR_0, VAR_2, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 = FUNC_1(VAR_4, VAR_2->string, &VAR_1->security);
 if (!VAR_5)
  VAR_2->string = ((void*)0);
 return VAR_5;
}
