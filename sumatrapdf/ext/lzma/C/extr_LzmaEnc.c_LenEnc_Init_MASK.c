
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** high; void** mid; void** low; void* choice2; void* choice; } ;
typedef TYPE_1__ CLenEnc ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static void FUNC_0(CLenEnc *VAR_5)
{
  unsigned VAR_6;
  VAR_5->choice = VAR_5->choice2 = VAR_4;
  for (VAR_6 = 0; VAR_6 < (VAR_0 << VAR_2); VAR_6++)
    VAR_5->low[VAR_6] = VAR_4;
  for (VAR_6 = 0; VAR_6 < (VAR_0 << VAR_3); VAR_6++)
    VAR_5->mid[VAR_6] = VAR_4;
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
    VAR_5->high[VAR_6] = VAR_4;
}
