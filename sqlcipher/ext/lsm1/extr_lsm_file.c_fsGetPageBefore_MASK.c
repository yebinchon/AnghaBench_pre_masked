
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int i64 ;
typedef int aSz ;
struct TYPE_5__ {int pCompress; } ;
typedef int Segment ;
typedef int LsmPgno ;
typedef TYPE_1__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int*,int) ;
 int FUNC_2 (TYPE_1__*,int *,int ,int,int *) ;
 int FUNC_3 (int*,int*) ;

__attribute__((used)) static int FUNC_4(
  FileSystem *VAR_1,
  Segment *VAR_2,
  LsmPgno VAR_3,
  LsmPgno *VAR_4
){
  u8 VAR_5[3];
  int VAR_6;
  i64 VAR_7;

  FUNC_0( VAR_1->pCompress );

  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, sizeof(VAR_5), &VAR_7);
  if( VAR_6==VAR_0 ) VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_7, VAR_5, sizeof(VAR_5));

  if( VAR_6==VAR_0 ){
    int VAR_8;
    int VAR_9;
    if( VAR_5[2] & 0x80 ){
      VAR_9 = FUNC_3(VAR_5, &VAR_8) + sizeof(VAR_5)*2;
    }else{
      VAR_9 = (int)(VAR_5[2] & 0x7F);
      VAR_8 = 1;
    }
    VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_9, VAR_4);
  }

  return VAR_6;
}
