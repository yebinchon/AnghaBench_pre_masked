
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ i64 ;
struct TYPE_3__ {scalar_t__ iLsmId; int iTreeId; } ;
typedef TYPE_1__ ShmReader ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(ShmReader *VAR_0, i64 VAR_1, u32 VAR_2, u32 VAR_3){
  return(
      VAR_0->iLsmId && VAR_0->iLsmId<=VAR_1
      && FUNC_0(VAR_3, VAR_0->iTreeId)
      && FUNC_0(VAR_0->iTreeId, VAR_2)
  );
}
