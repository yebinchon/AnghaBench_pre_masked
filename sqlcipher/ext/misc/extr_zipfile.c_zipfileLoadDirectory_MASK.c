
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
typedef int i64 ;
struct TYPE_13__ {int pWriteFd; } ;
typedef TYPE_2__ ZipfileTab ;
struct TYPE_12__ {scalar_t__ nComment; scalar_t__ nFile; scalar_t__ nExtra; } ;
struct TYPE_14__ {TYPE_1__ cds; } ;
typedef TYPE_3__ ZipfileEntry ;
struct TYPE_15__ {int nEntry; int iOffset; } ;
typedef TYPE_4__ ZipfileEOCD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,int const*,int,int ,int ,TYPE_3__**) ;
 int FUNC_2 (TYPE_2__*,int const*,int,int ,TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(ZipfileTab *VAR_2, const u8 *VAR_3, int VAR_4){
  ZipfileEOCD VAR_5;
  int VAR_6;
  int VAR_7;
  i64 VAR_8;

  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_2->pWriteFd, &VAR_5);
  VAR_8 = VAR_5.iOffset;
  for(VAR_7=0; VAR_6==VAR_0 && VAR_7<VAR_5.nEntry; VAR_7++){
    ZipfileEntry *VAR_9 = 0;
    VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_2->pWriteFd, VAR_8, &VAR_9);

    if( VAR_6==VAR_0 ){
      FUNC_0(VAR_2, 0, VAR_9);
      VAR_8 += VAR_1;
      VAR_8 += (int)VAR_9->cds.nExtra + VAR_9->cds.nFile + VAR_9->cds.nComment;
    }
  }
  return VAR_6;
}
