
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nData; int pData; } ;
struct TYPE_5__ {scalar_t__ iType; } ;
struct TYPE_7__ {TYPE_2__ b; TYPE_1__ dlw; } ;
typedef int DataBuffer ;
typedef TYPE_3__ DLCollector ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ,char*,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(DLCollector *VAR_3, DataBuffer *VAR_4){
  if( VAR_3->dlw.iType>VAR_0 ){
    char VAR_5[VAR_2];
    int VAR_6 = FUNC_2(VAR_5, VAR_1);
    FUNC_1(VAR_4, VAR_3->b.pData, VAR_3->b.nData, VAR_5, VAR_6);
  }else{
    FUNC_0(VAR_4, VAR_3->b.pData, VAR_3->b.nData);
  }
}
