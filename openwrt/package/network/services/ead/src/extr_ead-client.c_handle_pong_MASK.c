
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ead_msg_pong {char* name; int auth_type; } ;
struct TYPE_3__ {int sid; int nid; int len; } ;


 struct ead_msg_pong* FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ead_msg_pong* VAR_3 ;
 int FUNC_3 (char*,int,char*) ;
 int VAR_4 ;

__attribute__((used)) static bool
FUNC_4(void)
{
 struct ead_msg_pong *VAR_5 = FUNC_0(VAR_1, VAR_5);
 int VAR_6 = FUNC_1(VAR_1->len) - sizeof(struct ead_msg_pong);

 if (VAR_6 <= 0)
  return 0;

 VAR_5->name[VAR_6] = 0;
 VAR_0 = FUNC_2(VAR_5->auth_type);
 if (VAR_2 == 0xffff)
  FUNC_3("%04x: %s\n", FUNC_2(VAR_1->nid), VAR_5->name);
 VAR_4 = VAR_1->sid;
 return 1;
}
