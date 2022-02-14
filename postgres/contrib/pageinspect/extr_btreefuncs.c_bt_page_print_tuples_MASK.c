
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int attinmeta; } ;
struct TYPE_7__ {int t_info; int t_tid; } ;
typedef int Page ;
typedef char OffsetNumber ;
typedef int ItemId ;
typedef TYPE_1__* IndexTuple ;
typedef int HeapTuple ;
typedef TYPE_2__ FuncCallContext ;
typedef int Datum ;


 int FUNC_0 (int ,char**) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char) ;
 int FUNC_11 (int ,char*) ;
 char* FUNC_12 (int) ;
 char* FUNC_13 (char*,char,...) ;
 int FUNC_14 (char*,char*,char) ;

__attribute__((used)) static Datum
FUNC_15(FuncCallContext *VAR_1, Page VAR_2, OffsetNumber VAR_3)
{
 char *VAR_4[6];
 HeapTuple VAR_5;
 ItemId VAR_6;
 IndexTuple VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 char *VAR_11;
 char *VAR_12;

 VAR_6 = FUNC_10(VAR_2, VAR_3);

 if (!FUNC_6(VAR_6))
  FUNC_11(VAR_0, "invalid ItemId");

 VAR_7 = (IndexTuple) FUNC_9(VAR_2, VAR_6);

 VAR_8 = 0;
 VAR_4[VAR_8++] = FUNC_13("%d", VAR_3);
 VAR_4[VAR_8++] = FUNC_13("(%u,%u)",
         FUNC_7(&VAR_7->t_tid),
         FUNC_8(&VAR_7->t_tid));
 VAR_4[VAR_8++] = FUNC_13("%d", (int) FUNC_5(VAR_7));
 VAR_4[VAR_8++] = FUNC_13("%c", FUNC_3(VAR_7) ? 't' : 'f');
 VAR_4[VAR_8++] = FUNC_13("%c", FUNC_4(VAR_7) ? 't' : 'f');

 VAR_12 = (char *) VAR_7 + FUNC_2(VAR_7->t_info);
 VAR_10 = FUNC_5(VAR_7) - FUNC_2(VAR_7->t_info);
 VAR_11 = FUNC_12(VAR_10 * 3 + 1);
 VAR_4[VAR_8] = VAR_11;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
 {
  if (VAR_9 > 0)
   *VAR_11++ = ' ';
  FUNC_14(VAR_11, "%02x", *(VAR_12 + VAR_9) & 0xff);
  VAR_11 += 2;
 }

 VAR_5 = FUNC_0(VAR_1->attinmeta, VAR_4);

 return FUNC_1(VAR_5);
}
