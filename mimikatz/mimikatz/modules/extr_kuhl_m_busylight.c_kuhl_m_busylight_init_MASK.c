
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; struct TYPE_5__* next; } ;
typedef TYPE_1__* PBUSYLIGHT_DEVICE ;
typedef int NTSTATUS ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__**,int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int) ;

NTSTATUS FUNC_5()
{
 PBUSYLIGHT_DEVICE VAR_8;
 BOOL VAR_9 = (FUNC_2(FUNC_1(0)) >> 16) == 0x40c, VAR_10 = VAR_1;
 if((VAR_4 = FUNC_3(&VAR_5, ((void*)0), VAR_0, VAR_3)))
 {
  for(VAR_8 = VAR_5; VAR_8; VAR_8 = VAR_8->next)
  {
   VAR_10 = ((!(VAR_8->id % 2) && VAR_9) || ((VAR_8->id % 2) && !VAR_9));
   FUNC_4(VAR_8, VAR_10 ? VAR_6 : VAR_7, VAR_10 ? FUNC_0(VAR_6) : FUNC_0(VAR_7), VAR_1);
  }
 }
 return VAR_2;
}
