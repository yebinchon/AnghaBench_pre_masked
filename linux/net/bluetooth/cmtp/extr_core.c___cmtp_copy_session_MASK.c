
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cmtp_session {int flags; int num; int state; int bdaddr; } ;
struct cmtp_conninfo {int flags; int num; int state; int bdaddr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct cmtp_conninfo*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct cmtp_session *VAR_1, struct cmtp_conninfo *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_0);
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 FUNC_1(&VAR_2->bdaddr, &VAR_1->bdaddr);

 VAR_2->flags = VAR_1->flags & VAR_3;
 VAR_2->state = VAR_1->state;

 VAR_2->num = VAR_1->num;
}
