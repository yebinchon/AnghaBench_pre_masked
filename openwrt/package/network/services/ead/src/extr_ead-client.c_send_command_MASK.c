
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ead_msg_cmd {scalar_t__ data; void* timeout; void* type; } ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;
 struct ead_msg_cmd* FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ead_msg_cmd* VAR_3 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_6)
{
 struct ead_msg_cmd *VAR_7 = FUNC_0(VAR_5, VAR_7);

 VAR_5->type = FUNC_2(VAR_2);
 VAR_7->type = FUNC_3(VAR_0);
 VAR_7->timeout = FUNC_3(10);
 FUNC_6((char *)VAR_7->data, VAR_6, 1024);
 FUNC_1(VAR_5, sizeof(struct ead_msg_cmd) + FUNC_5(VAR_6) + 1);
 return FUNC_4(VAR_1, VAR_4, 1);
}
