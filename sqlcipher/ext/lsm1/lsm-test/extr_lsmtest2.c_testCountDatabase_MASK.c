
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_3__ {int nRow; } ;
typedef TYPE_1__ Cksum ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,void*,int ,int ,int ,int ,int ,int ) ;

int FUNC_2(TestDb *VAR_1){
  Cksum VAR_2;
  FUNC_0(&VAR_2, 0, sizeof(Cksum));
  FUNC_1(VAR_1, (void *)&VAR_2, 0, 0, 0, 0, 0, VAR_0);
  return VAR_2.nRow;
}
