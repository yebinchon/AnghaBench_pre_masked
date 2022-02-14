
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* name; int jitarr; int dsmarr; int filearr; int snapshotarr; int tupdescarr; int planrefarr; int relrefarr; int catlistrefarr; int catrefarr; int bufferarr; struct TYPE_4__* firstchild; struct TYPE_4__* nextchild; struct TYPE_4__* parent; } ;
typedef int ResourceOwnerData ;
typedef TYPE_1__* ResourceOwner ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;

ResourceOwner
FUNC_5(ResourceOwner VAR_2, const char *VAR_3)
{
 ResourceOwner VAR_4;

 VAR_4 = (ResourceOwner) FUNC_2(VAR_1,
               sizeof(ResourceOwnerData));
 VAR_4->name = VAR_3;

 if (VAR_2)
 {
  VAR_4->parent = VAR_2;
  VAR_4->nextchild = VAR_2->firstchild;
  VAR_2->firstchild = VAR_4;
 }

 FUNC_4(&(VAR_4->bufferarr), FUNC_0(VAR_0));
 FUNC_4(&(VAR_4->catrefarr), FUNC_3(((void*)0)));
 FUNC_4(&(VAR_4->catlistrefarr), FUNC_3(((void*)0)));
 FUNC_4(&(VAR_4->relrefarr), FUNC_3(((void*)0)));
 FUNC_4(&(VAR_4->planrefarr), FUNC_3(((void*)0)));
 FUNC_4(&(VAR_4->tupdescarr), FUNC_3(((void*)0)));
 FUNC_4(&(VAR_4->snapshotarr), FUNC_3(((void*)0)));
 FUNC_4(&(VAR_4->filearr), FUNC_1(-1));
 FUNC_4(&(VAR_4->dsmarr), FUNC_3(((void*)0)));
 FUNC_4(&(VAR_4->jitarr), FUNC_3(((void*)0)));

 return VAR_4;
}
