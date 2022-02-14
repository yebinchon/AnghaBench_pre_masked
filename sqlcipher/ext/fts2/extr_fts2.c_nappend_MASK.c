
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nData; } ;
struct TYPE_4__ {TYPE_3__ b; } ;
typedef TYPE_1__ StringBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,char const*,int,char*,int) ;

__attribute__((used)) static void FUNC_2(StringBuffer *VAR_0, const char *VAR_1, int VAR_2){
  FUNC_0( VAR_0->b.nData>0 );
  if( VAR_2>0 ){
    VAR_0->b.nData--;
    FUNC_1(&VAR_0->b, VAR_1, VAR_2, "", 1);
  }
}
