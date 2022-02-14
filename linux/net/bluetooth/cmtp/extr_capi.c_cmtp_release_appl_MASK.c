
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmtp_session {int wait; } ;
struct cmtp_application {scalar_t__ state; int msgnum; int mapping; } ;
struct capi_ctr {struct cmtp_session* driverdata; } ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct capi_ctr*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct cmtp_session*,struct cmtp_application*) ;
 struct cmtp_application* FUNC_3 (struct cmtp_session*,int ,int ) ;
 int FUNC_4 (struct cmtp_session*) ;
 int FUNC_5 (struct cmtp_session*,int ,int ,int ,int ,int *,int ) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static void FUNC_7(struct capi_ctr *VAR_5, __u16 VAR_6)
{
 struct cmtp_session *VAR_7 = VAR_5->driverdata;
 struct cmtp_application *VAR_8;

 FUNC_0("ctrl %p appl %d", VAR_5, VAR_6);

 VAR_8 = FUNC_3(VAR_7, VAR_3, VAR_6);
 if (!VAR_8) {
  FUNC_1("Can't find application");
  return;
 }

 VAR_8->msgnum = FUNC_4(VAR_7);

 FUNC_5(VAR_7, VAR_2, VAR_8->mapping, VAR_8->msgnum,
    VAR_1, ((void*)0), 0);

 FUNC_6(VAR_7->wait,
   (VAR_8->state == VAR_0), VAR_4);

 FUNC_2(VAR_7, VAR_8);
}
