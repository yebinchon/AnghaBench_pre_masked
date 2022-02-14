
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8 ;
typedef scalar_t__ uint32 ;
typedef int XLogReaderState ;
struct TYPE_7__ {TYPE_2__** record_stats; TYPE_1__* rmgr_stats; int count; } ;
typedef TYPE_3__ XLogDumpStats ;
typedef int XLogDumpConfig ;
struct TYPE_6__ {int fpi_len; int rec_len; int count; } ;
struct TYPE_5__ {int fpi_len; int rec_len; int count; } ;
typedef size_t RmgrId ;


 int FUNC_0 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(XLogDumpConfig *VAR_0, XLogDumpStats *VAR_1,
     XLogReaderState *VAR_2)
{
 RmgrId VAR_3;
 uint8 VAR_4;
 uint32 VAR_5;
 uint32 VAR_6;

 VAR_1->count++;

 VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_2, &VAR_5, &VAR_6);



 VAR_1->rmgr_stats[VAR_3].count++;
 VAR_1->rmgr_stats[VAR_3].rec_len += VAR_5;
 VAR_1->rmgr_stats[VAR_3].fpi_len += VAR_6;
 VAR_4 = FUNC_1(VAR_2) >> 4;

 VAR_1->record_stats[VAR_3][VAR_4].count++;
 VAR_1->record_stats[VAR_3][VAR_4].rec_len += VAR_5;
 VAR_1->record_stats[VAR_3][VAR_4].fpi_len += VAR_6;
}
