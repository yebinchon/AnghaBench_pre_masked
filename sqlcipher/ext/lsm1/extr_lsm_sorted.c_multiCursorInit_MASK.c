
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef int Snapshot ;
typedef TYPE_1__ MultiCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static int FUNC_2(MultiCursor *VAR_4, Snapshot *VAR_5){
  int VAR_6;
  VAR_6 = FUNC_0(VAR_4, VAR_5);
  if( VAR_6==VAR_2 ){
    VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_3);
  }
  VAR_4->flags |= (VAR_1 | VAR_0);
  return VAR_6;
}
