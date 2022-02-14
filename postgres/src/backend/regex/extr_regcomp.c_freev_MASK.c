
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {scalar_t__ subs; scalar_t__ sub10; int err; int nlacons; int * lacons; int * cv2; int * cv; int * treechain; int * tree; int * nfa; int * re; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct vars*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vars*,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct vars *VAR_0,
   int VAR_1)
{
 if (VAR_0->re != ((void*)0))
  FUNC_7(VAR_0->re);
 if (VAR_0->subs != VAR_0->sub10)
  FUNC_1(VAR_0->subs);
 if (VAR_0->nfa != ((void*)0))
  FUNC_5(VAR_0->nfa);
 if (VAR_0->tree != ((void*)0))
  FUNC_6(VAR_0, VAR_0->tree);
 if (VAR_0->treechain != ((void*)0))
  FUNC_2(VAR_0);
 if (VAR_0->cv != ((void*)0))
  FUNC_3(VAR_0->cv);
 if (VAR_0->cv2 != ((void*)0))
  FUNC_3(VAR_0->cv2);
 if (VAR_0->lacons != ((void*)0))
  FUNC_4(VAR_0->lacons, VAR_0->nlacons);
 FUNC_0(VAR_1);

 return VAR_0->err;
}
