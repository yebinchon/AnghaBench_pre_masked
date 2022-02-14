
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_11__ {scalar_t__ pos; scalar_t__ len; scalar_t__ haspos; } ;
typedef TYPE_1__ WordEntry ;
struct TYPE_13__ {int ndoc; int nentry; struct TYPE_13__* right; struct TYPE_13__* left; scalar_t__ lenlexeme; int lexeme; } ;
struct TYPE_12__ {int maxdepth; TYPE_3__* root; int weight; } ;
typedef TYPE_2__ TSVectorStat ;
typedef int TSVector ;
typedef TYPE_3__ StatEntry ;
typedef int MemoryContext ;


 TYPE_1__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*,int ) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(MemoryContext VAR_1, TSVectorStat *VAR_2, TSVector VAR_3, uint32 VAR_4)
{
 WordEntry *VAR_5 = FUNC_0(VAR_3) + VAR_4;
 StatEntry *VAR_6 = VAR_2->root,
      *VAR_7 = ((void*)0);
 int VAR_8,
    VAR_9 = 0;
 uint32 VAR_10 = 1;

 if (VAR_2->weight == 0)
  VAR_8 = (VAR_5->haspos) ? FUNC_2(VAR_3, VAR_5) : 1;
 else
  VAR_8 = (VAR_5->haspos) ? FUNC_4(VAR_3, VAR_5, VAR_2->weight) : 0;

 if (VAR_8 == 0)
  return;

 while (VAR_6)
 {
  VAR_9 = FUNC_5(VAR_6, VAR_5, VAR_3);

  if (VAR_9 == 0)
  {
   break;
  }
  else
  {
   VAR_7 = VAR_6;
   VAR_6 = (VAR_9 < 0) ? VAR_6->left : VAR_6->right;
  }
  VAR_10++;
 }

 if (VAR_10 > VAR_2->maxdepth)
  VAR_2->maxdepth = VAR_10;

 if (VAR_6 == ((void*)0))
 {
  VAR_6 = FUNC_1(VAR_1, VAR_0 + VAR_5->len);
  VAR_6->left = VAR_6->right = ((void*)0);
  VAR_6->ndoc = 1;
  VAR_6->nentry = VAR_8;
  VAR_6->lenlexeme = VAR_5->len;
  FUNC_6(VAR_6->lexeme, FUNC_3(VAR_3) + VAR_5->pos, VAR_6->lenlexeme);

  if (VAR_7 == ((void*)0))
  {
   VAR_2->root = VAR_6;
  }
  else
  {
   if (VAR_9 < 0)
    VAR_7->left = VAR_6;
   else
    VAR_7->right = VAR_6;
  }

 }
 else
 {
  VAR_6->ndoc++;
  VAR_6->nentry += VAR_8;
 }
}
