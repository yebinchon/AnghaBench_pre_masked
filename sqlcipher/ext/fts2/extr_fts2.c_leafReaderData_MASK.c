
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nData; } ;
struct TYPE_5__ {char const* pData; TYPE_1__ term; } ;
typedef TYPE_2__ LeafReader ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int*) ;

__attribute__((used)) static const char *FUNC_2(LeafReader *VAR_0){
  int VAR_1, VAR_2;
  FUNC_0( VAR_0->term.nData>0 );
  VAR_1 = FUNC_1(VAR_0->pData, &VAR_2);
  return VAR_0->pData+VAR_1;
}
