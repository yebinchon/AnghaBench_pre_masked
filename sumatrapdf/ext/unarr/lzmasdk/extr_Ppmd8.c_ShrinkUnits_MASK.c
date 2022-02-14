
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* FreeList; } ;
typedef TYPE_1__ CPpmd8 ;


 int FUNC_0 (TYPE_1__*,void*,unsigned int) ;
 int FUNC_1 (void*,void*,unsigned int) ;
 void* FUNC_2 (TYPE_1__*,unsigned int) ;
 int FUNC_3 (TYPE_1__*,void*,unsigned int,unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;

__attribute__((used)) static void *FUNC_5(CPpmd8 *VAR_0, void *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
  unsigned VAR_4 = FUNC_4(VAR_2);
  unsigned VAR_5 = FUNC_4(VAR_3);
  if (VAR_4 == VAR_5)
    return VAR_1;
  if (VAR_0->FreeList[VAR_5] != 0)
  {
    void *VAR_6 = FUNC_2(VAR_0, VAR_5);
    FUNC_1(VAR_6, VAR_1, VAR_3);
    FUNC_0(VAR_0, VAR_1, VAR_4);
    return VAR_6;
  }
  FUNC_3(VAR_0, VAR_1, VAR_4, VAR_5);
  return VAR_1;
}
