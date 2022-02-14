
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int operation; struct tomoyo_path_info const* filename; } ;
struct TYPE_9__ {TYPE_2__ path; } ;
struct tomoyo_request_info {scalar_t__ mode; TYPE_6__* matched_acl; TYPE_4__* ee; TYPE_3__ param; int param_type; int type; int profile; TYPE_1__* domain; } ;
struct tomoyo_path_info {int dummy; } ;
struct TYPE_12__ {TYPE_5__* cond; } ;
struct TYPE_11__ {int * transit; } ;
struct TYPE_10__ {int * transition; } ;
struct TYPE_7__ {int ns; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tomoyo_request_info*) ;
 int FUNC_1 (struct tomoyo_request_info*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

int FUNC_3(struct tomoyo_request_info *VAR_5,
         const struct tomoyo_path_info *VAR_6)
{





 VAR_5->type = VAR_1;
 VAR_5->mode = FUNC_2(VAR_5->domain->ns, VAR_5->profile, VAR_5->type);
 VAR_5->param_type = VAR_3;
 VAR_5->param.path.filename = VAR_6;
 VAR_5->param.path.operation = VAR_2;
 FUNC_1(VAR_5, VAR_4);
 VAR_5->ee->transition = VAR_5->matched_acl && VAR_5->matched_acl->cond ?
  VAR_5->matched_acl->cond->transit : ((void*)0);
 if (VAR_5->mode != VAR_0)
  return FUNC_0(VAR_5);
 return 0;
}
