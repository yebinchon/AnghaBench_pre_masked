
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int TestDb ;
struct TYPE_3__ {int nRow; scalar_t__ cksum2; scalar_t__ cksum1; } ;
typedef TYPE_1__ Cksum ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int,int,int) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int *,void*,int ,int ,int ,int ,int ,int ) ;

int FUNC_5(
  TestDb *VAR_2,
  char *VAR_3
){
  Cksum VAR_4;
  FUNC_1(&VAR_4, 0, sizeof(Cksum));
  FUNC_4(VAR_2, (void *)&VAR_4, 0, 0, 0, 0, 0, VAR_1);
  FUNC_2(VAR_3, "%d %x %x",
      VAR_4.nRow, (u32)VAR_4.cksum1, (u32)VAR_4.cksum2
  );
  FUNC_0( FUNC_3(VAR_3)<VAR_0 );
  return VAR_4.nRow;
}
