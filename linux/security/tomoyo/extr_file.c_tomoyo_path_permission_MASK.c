
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_5__ {size_t operation; struct tomoyo_path_info const* filename; } ;
struct TYPE_6__ {TYPE_2__ path; } ;
struct tomoyo_request_info {scalar_t__ mode; TYPE_3__ param; int param_type; int type; int profile; TYPE_1__* domain; } ;
struct tomoyo_path_info {int dummy; } ;
struct TYPE_4__ {int ns; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tomoyo_request_info*) ;
 int FUNC_1 (struct tomoyo_request_info*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_3(struct tomoyo_request_info *VAR_5, u8 VAR_6,
      const struct tomoyo_path_info *VAR_7)
{
 int VAR_8;

 VAR_5->type = VAR_4[VAR_6];
 VAR_5->mode = FUNC_2(VAR_5->domain->ns, VAR_5->profile, VAR_5->type);
 if (VAR_5->mode == VAR_0)
  return 0;
 VAR_5->param_type = VAR_2;
 VAR_5->param.path.filename = VAR_7;
 VAR_5->param.path.operation = VAR_6;
 do {
  FUNC_1(VAR_5, VAR_3);
  VAR_8 = FUNC_0(VAR_5);
 } while (VAR_8 == VAR_1);
 return VAR_8;
}
