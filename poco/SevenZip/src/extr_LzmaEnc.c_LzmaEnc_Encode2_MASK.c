
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ finished; int rc; int nowPos64; } ;
struct TYPE_8__ {scalar_t__ (* Progress ) (TYPE_1__*,int ,int ) ;} ;
typedef scalar_t__ SRes ;
typedef TYPE_1__ ICompressProgress ;
typedef TYPE_2__ CLzmaEnc ;
typedef scalar_t__ Byte ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static SRes FUNC_4(CLzmaEnc *VAR_3, ICompressProgress *VAR_4)
{
  SRes VAR_5 = VAR_2;


  Byte VAR_6[0x300];
  int VAR_7 = 0;
  for (VAR_7 = 0; VAR_7 < 16; VAR_7++)
    VAR_6[VAR_7] = (Byte)VAR_7;


  for (;;)
  {
    VAR_5 = FUNC_0(VAR_3, VAR_0, 0, 0);
    if (VAR_5 != VAR_2 || VAR_3->finished != 0)
      break;
    if (VAR_4 != 0)
    {
      VAR_5 = VAR_4->Progress(VAR_4, VAR_3->nowPos64, FUNC_2(&VAR_3->rc));
      if (VAR_5 != VAR_2)
      {
        VAR_5 = VAR_1;
        break;
      }
    }
  }
  FUNC_1(VAR_3);
  return VAR_5;
}
