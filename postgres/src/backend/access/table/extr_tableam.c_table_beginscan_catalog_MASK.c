
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct ScanKeyData {int dummy; } ;
typedef int TableScanDesc ;
struct TYPE_7__ {TYPE_1__* rd_tableam; } ;
struct TYPE_6__ {int (* scan_begin ) (TYPE_2__*,int ,int,struct ScanKeyData*,int *,int) ;} ;
typedef int Snapshot ;
typedef TYPE_2__* Relation ;
typedef int Oid ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,int ,int,struct ScanKeyData*,int *,int) ;

TableScanDesc
FUNC_4(Relation VAR_5, int VAR_6, struct ScanKeyData *VAR_7)
{
 uint32 VAR_8 = VAR_4 |
 VAR_1 | VAR_2 | VAR_0 | VAR_3;
 Oid VAR_9 = FUNC_2(VAR_5);
 Snapshot VAR_10 = FUNC_1(FUNC_0(VAR_9));

 return VAR_5->rd_tableam->scan_begin(VAR_5, VAR_10, VAR_6, VAR_7,
           ((void*)0), VAR_8);
}
