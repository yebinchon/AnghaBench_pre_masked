
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nData; char const* pData; } ;
struct TYPE_5__ {TYPE_1__ term; } ;
typedef TYPE_2__ LeafReader ;


 int FUNC_0 (int) ;

__attribute__((used)) static const char *FUNC_1(LeafReader *VAR_0){
  FUNC_0( VAR_0->term.nData>0 );
  return VAR_0->term.pData;
}
