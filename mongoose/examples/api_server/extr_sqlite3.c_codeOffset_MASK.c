
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_3__ {scalar_t__ iOffset; } ;
typedef TYPE_1__ Select ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(
  Vdbe *VAR_3,
  Select *VAR_4,
  int VAR_5
){
  if( VAR_4->iOffset && VAR_5!=0 ){
    int VAR_6;
    FUNC_2(VAR_3, VAR_0, VAR_4->iOffset, -1);
    VAR_6 = FUNC_1(VAR_3, VAR_2, VAR_4->iOffset);
    FUNC_2(VAR_3, VAR_1, 0, VAR_5);
    FUNC_0((VAR_3, "skip OFFSET records"));
    FUNC_3(VAR_3, VAR_6);
  }
}
