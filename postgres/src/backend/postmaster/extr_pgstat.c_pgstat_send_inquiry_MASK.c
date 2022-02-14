
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int msg ;
typedef void* TimestampTz ;
struct TYPE_3__ {int databaseid; void* cutoff_time; void* clock_time; int m_hdr; } ;
typedef TYPE_1__ PgStat_MsgInquiry ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(TimestampTz VAR_1, TimestampTz VAR_2, Oid VAR_3)
{
 PgStat_MsgInquiry VAR_4;

 FUNC_1(&VAR_4.m_hdr, VAR_0);
 VAR_4.clock_time = VAR_1;
 VAR_4.cutoff_time = VAR_2;
 VAR_4.databaseid = VAR_3;
 FUNC_0(&VAR_4, sizeof(VAR_4));
}
