
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_8__ {int attinmeta; void* user_fctx; int multi_call_memory_ctx; } ;
struct TYPE_7__ {int lextypeOid; } ;
struct TYPE_6__ {int * list; scalar_t__ cur; } ;
typedef TYPE_1__ TSTokenTypeStorage ;
typedef TYPE_2__ TSParserCacheEntry ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int LexDescr ;
typedef TYPE_3__ FuncCallContext ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,char*,int ,int,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 TYPE_2__* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(FuncCallContext *VAR_3, Oid VAR_4)
{
 TupleDesc VAR_5;
 MemoryContext VAR_6;
 TSTokenTypeStorage *VAR_7;
 TSParserCacheEntry *VAR_8 = FUNC_8(VAR_4);

 if (!FUNC_4(VAR_8->lextypeOid))
  FUNC_7(VAR_0, "method lextype isn't defined for text search parser %u",
    VAR_4);

 VAR_6 = FUNC_2(VAR_3->multi_call_memory_ctx);

 VAR_7 = (TSTokenTypeStorage *) FUNC_9(sizeof(TSTokenTypeStorage));
 VAR_7->cur = 0;

 VAR_7->list = (LexDescr *) FUNC_1(FUNC_3(VAR_8->lextypeOid,
                (Datum) 0));
 VAR_3->user_fctx = (void *) VAR_7;

 VAR_5 = FUNC_0(3);
 FUNC_6(VAR_5, (AttrNumber) 1, "tokid",
        VAR_1, -1, 0);
 FUNC_6(VAR_5, (AttrNumber) 2, "alias",
        VAR_2, -1, 0);
 FUNC_6(VAR_5, (AttrNumber) 3, "description",
        VAR_2, -1, 0);

 VAR_3->attinmeta = FUNC_5(VAR_5);
 FUNC_2(VAR_6);
}
