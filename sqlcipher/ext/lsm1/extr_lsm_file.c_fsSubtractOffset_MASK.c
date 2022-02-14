
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_7__ {int pCompress; } ;
typedef int Segment ;
typedef TYPE_1__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_5(
  FileSystem *VAR_1,
  Segment *VAR_2,
  i64 VAR_3,
  int VAR_4,
  i64 *VAR_5
){
  i64 VAR_6;
  int VAR_7 = 0;
  int VAR_8;

  FUNC_0( VAR_1->pCompress );

  VAR_6 = FUNC_2(VAR_1, FUNC_4(VAR_1, VAR_3));
  if( (VAR_3-VAR_4)>=VAR_6 ){
    *VAR_5 = (VAR_3-VAR_4);
    return VAR_0;
  }

  VAR_8 = FUNC_1(VAR_1, VAR_2, FUNC_4(VAR_1, VAR_3), &VAR_7);
  *VAR_5 = FUNC_3(VAR_1, VAR_7) - VAR_4 + (VAR_3 - VAR_6 + 1);
  return VAR_8;
}
