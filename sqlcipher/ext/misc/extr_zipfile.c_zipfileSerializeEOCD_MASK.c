
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int iOffset; int nSize; int nEntryTotal; int nEntry; int iFirstDisk; int iDisk; } ;
typedef TYPE_1__ ZipfileEOCD ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(ZipfileEOCD *VAR_1, u8 *VAR_2){
  u8 *VAR_3 = VAR_2;
  FUNC_1(VAR_3, VAR_0);
  FUNC_0(VAR_3, VAR_1->iDisk);
  FUNC_0(VAR_3, VAR_1->iFirstDisk);
  FUNC_0(VAR_3, VAR_1->nEntry);
  FUNC_0(VAR_3, VAR_1->nEntryTotal);
  FUNC_1(VAR_3, VAR_1->nSize);
  FUNC_1(VAR_3, VAR_1->iOffset);
  FUNC_0(VAR_3, 0);

  return VAR_3-VAR_2;
}
