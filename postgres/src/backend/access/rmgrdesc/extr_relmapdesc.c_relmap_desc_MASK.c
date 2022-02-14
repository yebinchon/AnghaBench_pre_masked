
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nbytes; int tsid; int dbid; } ;
typedef TYPE_1__ xl_relmap_update ;
typedef scalar_t__ uint8 ;
typedef int XLogReaderState ;
typedef int StringInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;

void
FUNC_3(StringInfo VAR_2, XLogReaderState *VAR_3)
{
 char *VAR_4 = FUNC_0(VAR_3);
 uint8 VAR_5 = FUNC_1(VAR_3) & ~VAR_1;

 if (VAR_5 == VAR_0)
 {
  xl_relmap_update *VAR_6 = (xl_relmap_update *) VAR_4;

  FUNC_2(VAR_2, "database %u tablespace %u size %u",
       VAR_6->dbid, VAR_6->tsid, VAR_6->nbytes);
 }
}
