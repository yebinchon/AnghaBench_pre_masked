
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int operation; TYPE_1__* filename; int number; } ;
struct TYPE_6__ {TYPE_2__ path_number; } ;
struct tomoyo_request_info {TYPE_3__ param; } ;
typedef int buffer ;
struct TYPE_4__ {int name; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 size_t* VAR_4 ;
 int FUNC_0 (char*,int,int ,int) ;
 int FUNC_1 (struct tomoyo_request_info*,char*,int ,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct tomoyo_request_info *VAR_5)
{
 const u8 VAR_6 = VAR_5->param.path_number.operation;
 u8 VAR_7;
 char VAR_8[64];

 switch (VAR_6) {
 case 132:
 case 130:
 case 129:
 case 128:
 case 133:
  VAR_7 = VAR_2;
  break;
 case 131:
  VAR_7 = VAR_1;
  break;
 default:
  VAR_7 = VAR_0;
  break;
 }
 FUNC_0(VAR_8, sizeof(VAR_8), VAR_5->param.path_number.number,
      VAR_7);
 return FUNC_1(VAR_5, "file %s %s %s\n", VAR_3
     [VAR_4[VAR_6]],
     VAR_5->param.path_number.filename->name, VAR_8);
}
