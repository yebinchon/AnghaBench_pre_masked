
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct tomoyo_path_info* name; } ;
struct TYPE_4__ {TYPE_1__ environ; } ;
struct tomoyo_request_info {TYPE_2__ param; int param_type; } ;
struct tomoyo_path_info {char const* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tomoyo_request_info*) ;
 int FUNC_1 (struct tomoyo_request_info*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct tomoyo_path_info*) ;

int FUNC_3(struct tomoyo_request_info *VAR_3, const char *VAR_4)
{
 struct tomoyo_path_info VAR_5;
 int VAR_6;

 if (!VAR_4 || !*VAR_4)
  return 0;
 VAR_5.name = VAR_4;
 FUNC_2(&VAR_5);
 VAR_3->param_type = VAR_1;
 VAR_3->param.environ.name = &VAR_5;
 do {
  FUNC_1(VAR_3, VAR_2);
  VAR_6 = FUNC_0(VAR_3);
 } while (VAR_6 == VAR_0);
 return VAR_6;
}
