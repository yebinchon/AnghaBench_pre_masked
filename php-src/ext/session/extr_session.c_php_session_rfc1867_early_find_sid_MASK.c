
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sid; scalar_t__ apply_trans_sid; } ;
typedef TYPE_1__ php_session_rfc1867_progress ;
struct TYPE_6__ {int (* treat_data ) (int ,int *,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_1__*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(php_session_rfc1867_progress *VAR_7)
{

 if (FUNC_0(VAR_5)) {
  VAR_4.treat_data(VAR_0, ((void*)0), ((void*)0));
  if (FUNC_1(&VAR_7->sid, VAR_2, VAR_7)) {
   VAR_7->apply_trans_sid = 0;
   return;
  }
 }
 if (FUNC_0(VAR_6)) {
  return;
 }
 VAR_4.treat_data(VAR_1, ((void*)0), ((void*)0));
 FUNC_1(&VAR_7->sid, VAR_3, VAR_7);
}
