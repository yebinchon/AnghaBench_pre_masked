
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ system_identifier; scalar_t__ pg_control_version; scalar_t__ catalog_version_no; scalar_t__ state; } ;
struct TYPE_3__ {scalar_t__ system_identifier; scalar_t__ pg_control_version; scalar_t__ catalog_version_no; scalar_t__ data_checksum_version; scalar_t__ state; int wal_log_hints; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(void)
{



 if (VAR_2.system_identifier != VAR_1.system_identifier)
  FUNC_0("source and target clusters are from different systems");


 if (VAR_2.pg_control_version != VAR_5 ||
  VAR_1.pg_control_version != VAR_5 ||
  VAR_2.catalog_version_no != VAR_0 ||
  VAR_1.catalog_version_no != VAR_0)
 {
  FUNC_0("clusters are not compatible with this version of pg_rewind");
 }





 if (VAR_2.data_checksum_version != VAR_6 &&
  !VAR_2.wal_log_hints)
 {
  FUNC_0("target server needs to use either data checksums or \"wal_log_hints = on\"");
 }







 if (VAR_2.state != VAR_3 &&
  VAR_2.state != VAR_4)
  FUNC_0("target server must be shut down cleanly");






 if (VAR_7 &&
  VAR_1.state != VAR_3 &&
  VAR_1.state != VAR_4)
  FUNC_0("source data directory must be shut down cleanly");
}
