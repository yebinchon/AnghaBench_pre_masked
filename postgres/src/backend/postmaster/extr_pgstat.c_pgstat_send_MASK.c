
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_size; } ;
typedef TYPE_1__ PgStat_MsgHdr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,void*,int,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_4 == VAR_2)
  return;

 ((PgStat_MsgHdr *) VAR_5)->m_size = VAR_6;


 do
 {
  VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6, 0);
 } while (VAR_7 < 0 && VAR_3 == VAR_0);






}
