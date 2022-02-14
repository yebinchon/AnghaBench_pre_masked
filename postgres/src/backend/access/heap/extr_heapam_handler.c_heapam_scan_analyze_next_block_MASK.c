
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* TableScanDesc ;
struct TYPE_5__ {int rs_cbuf; int rs_cindex; int rs_cblock; } ;
struct TYPE_4__ {int rs_rd; } ;
typedef TYPE_2__* HeapScanDesc ;
typedef int BufferAccessStrategy ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_2(TableScanDesc VAR_4, BlockNumber VAR_5,
          BufferAccessStrategy VAR_6)
{
 HeapScanDesc VAR_7 = (HeapScanDesc) VAR_4;
 VAR_7->rs_cblock = VAR_5;
 VAR_7->rs_cindex = VAR_1;
 VAR_7->rs_cbuf = FUNC_1(VAR_4->rs_rd, VAR_2,
          VAR_5, VAR_3, VAR_6);
 FUNC_0(VAR_7->rs_cbuf, VAR_0);


 return 1;
}
