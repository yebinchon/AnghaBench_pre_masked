
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct re_object {int entry; } ;
typedef char WCHAR ;
struct TYPE_12__ {struct re_object* reobj; } ;
struct TYPE_13__ {TYPE_1__ run; } ;
struct TYPE_15__ {TYPE_2__ member; } ;
struct TYPE_14__ {int reobj_list; } ;
typedef int REOBJECT ;
typedef TYPE_3__ ME_TextEditor ;
typedef int ME_Style ;
typedef TYPE_4__ ME_DisplayItem ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int * FUNC_1 (TYPE_3__*,int) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int,char*,int,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_4__**,int ) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 struct re_object* FUNC_6 (int const*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;

void FUNC_9(ME_TextEditor *VAR_2, const REOBJECT* VAR_3, int VAR_4)
{
  ME_Style *VAR_5 = FUNC_1(VAR_2, VAR_4);
  ME_DisplayItem *VAR_6;
  WCHAR VAR_7 = ' ';
  ME_DisplayItem *VAR_8 = ((void*)0);
  struct re_object *VAR_9 = ((void*)0);


  if (FUNC_3(VAR_2))
    FUNC_0(VAR_2);

  VAR_6 = FUNC_2(VAR_2, VAR_4, &VAR_7, 1, VAR_5,
                                       VAR_0);
  VAR_6->member.run.reobj = FUNC_6(VAR_3);

  VAR_8 = VAR_6;
  while (FUNC_4(((void*)0), &VAR_8, VAR_1))
  {
    if (VAR_8->member.run.reobj)
    {
      VAR_9 = VAR_8->member.run.reobj;
      break;
    }
  }
  if (VAR_9)
    FUNC_7(&VAR_9->entry, &VAR_6->member.run.reobj->entry);
  else
    FUNC_8(&VAR_2->reobj_list, &VAR_6->member.run.reobj->entry);

  FUNC_5(VAR_5);
}
