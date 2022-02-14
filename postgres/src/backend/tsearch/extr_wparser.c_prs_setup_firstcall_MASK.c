
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int text ;
typedef int TupleDesc ;
struct TYPE_11__ {int attinmeta; void* user_fctx; int multi_call_memory_ctx; } ;
struct TYPE_10__ {char* lexeme; int type; } ;
struct TYPE_9__ {size_t cur; int len; TYPE_3__* list; } ;
struct TYPE_8__ {int prsend; int prstoken; int prsstart; } ;
typedef TYPE_1__ TSParserCacheEntry ;
typedef TYPE_2__ PrsStorage ;
typedef int Oid ;
typedef int MemoryContext ;
typedef TYPE_3__ LexemeEntry ;
typedef TYPE_4__ FuncCallContext ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 int VAR_1 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,char*,int ,int,int ) ;
 void* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (int ) ;
 int FUNC_14 (char*,char*,int) ;
 char* FUNC_15 (int) ;
 scalar_t__ FUNC_16 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_17(FuncCallContext *VAR_2, Oid VAR_3, text *VAR_4)
{
 TupleDesc VAR_5;
 MemoryContext VAR_6;
 PrsStorage *VAR_7;
 TSParserCacheEntry *VAR_8 = FUNC_13(VAR_3);
 char *VAR_9 = ((void*)0);
 int VAR_10 = 0,
    VAR_11 = 0;
 void *VAR_12;

 VAR_6 = FUNC_7(VAR_2->multi_call_memory_ctx);

 VAR_7 = (PrsStorage *) FUNC_15(sizeof(PrsStorage));
 VAR_7->cur = 0;
 VAR_7->len = 16;
 VAR_7->list = (LexemeEntry *) FUNC_15(sizeof(LexemeEntry) * VAR_7->len);

 VAR_12 = (void *) FUNC_2(FUNC_4(&VAR_8->prsstart,
              FUNC_8(FUNC_11(VAR_4)),
              FUNC_6(FUNC_12(VAR_4))));

 while ((VAR_11 = FUNC_1(FUNC_5(&VAR_8->prstoken,
              FUNC_8(VAR_12),
              FUNC_8(&VAR_9),
              FUNC_8(&VAR_10)))) != 0)
 {
  if (VAR_7->cur >= VAR_7->len)
  {
   VAR_7->len = 2 * VAR_7->len;
   VAR_7->list = (LexemeEntry *) FUNC_16(VAR_7->list, sizeof(LexemeEntry) * VAR_7->len);
  }
  VAR_7->list[VAR_7->cur].lexeme = FUNC_15(VAR_10 + 1);
  FUNC_14(VAR_7->list[VAR_7->cur].lexeme, VAR_9, VAR_10);
  VAR_7->list[VAR_7->cur].lexeme[VAR_10] = '\0';
  VAR_7->list[VAR_7->cur].type = VAR_11;
  VAR_7->cur++;
 }

 FUNC_3(&VAR_8->prsend, FUNC_8(VAR_12));

 VAR_7->len = VAR_7->cur;
 VAR_7->cur = 0;

 VAR_2->user_fctx = (void *) VAR_7;
 VAR_5 = FUNC_0(2);
 FUNC_10(VAR_5, (AttrNumber) 1, "tokid",
        VAR_0, -1, 0);
 FUNC_10(VAR_5, (AttrNumber) 2, "token",
        VAR_1, -1, 0);

 VAR_2->attinmeta = FUNC_9(VAR_5);
 FUNC_7(VAR_6);
}
