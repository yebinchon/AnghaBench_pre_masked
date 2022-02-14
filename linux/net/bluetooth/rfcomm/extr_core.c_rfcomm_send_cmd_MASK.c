
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_session {int dummy; } ;
struct rfcomm_cmd {int ctrl; } ;


 int FUNC_0 (char*,struct rfcomm_session*,int ) ;
 int FUNC_1 (struct rfcomm_session*,void*,int) ;

__attribute__((used)) static int FUNC_2(struct rfcomm_session *VAR_0, struct rfcomm_cmd *VAR_1)
{
 FUNC_0("%p cmd %u", VAR_0, VAR_1->ctrl);

 return FUNC_1(VAR_0, (void *) VAR_1, sizeof(*VAR_1));
}
