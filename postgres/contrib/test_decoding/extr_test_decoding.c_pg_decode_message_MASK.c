
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_5__ {int out; } ;
typedef int Size ;
typedef int ReorderBufferTXN ;
typedef TYPE_1__ LogicalDecodingContext ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,char const*,int ) ;
 int FUNC_3 (int ,char*,int,char const*,int ) ;

__attribute__((used)) static void
FUNC_4(LogicalDecodingContext *VAR_0,
      ReorderBufferTXN *VAR_1, XLogRecPtr VAR_2, bool VAR_3,
      const char *VAR_4, Size VAR_5, const char *VAR_6)
{
 FUNC_0(VAR_0, 1);
 FUNC_3(VAR_0->out, "message: transactional: %d prefix: %s, sz: %zu content:",
      VAR_3, VAR_4, VAR_5);
 FUNC_2(VAR_0->out, VAR_6, VAR_5);
 FUNC_1(VAR_0, 1);
}
