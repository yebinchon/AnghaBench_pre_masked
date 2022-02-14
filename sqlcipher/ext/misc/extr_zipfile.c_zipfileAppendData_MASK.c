
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int zErrMsg; } ;
struct TYPE_5__ {scalar_t__ szCurrent; TYPE_1__ base; int pWriteFd; } ;
typedef TYPE_2__ ZipfileTab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,long,int ) ;
 size_t FUNC_1 (int const*,int,int,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(
  ZipfileTab *VAR_3,
  const u8 *VAR_4,
  int VAR_5
){
  size_t VAR_6;
  FUNC_0(VAR_3->pWriteFd, (long)VAR_3->szCurrent, VAR_0);
  VAR_6 = FUNC_1(VAR_4, 1, VAR_5, VAR_3->pWriteFd);
  if( (int)VAR_6!=VAR_5 ){
    VAR_3->base.zErrMsg = FUNC_2("error in fwrite()");
    return VAR_1;
  }
  VAR_3->szCurrent += VAR_5;
  return VAR_2;
}
