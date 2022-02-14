
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_5__ {int pbMask; int rc; scalar_t__ writeEndMark; int finished; } ;
typedef int SRes ;
typedef TYPE_1__ CLzmaEnc ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static SRes FUNC_4(CLzmaEnc *VAR_1, UInt32 VAR_2)
{

  VAR_1->finished = VAR_0;
  if (VAR_1->writeEndMark)
    FUNC_3(VAR_1, VAR_2 & VAR_1->pbMask);
  FUNC_1(&VAR_1->rc);
  FUNC_2(&VAR_1->rc);
  return FUNC_0(VAR_1);
}
