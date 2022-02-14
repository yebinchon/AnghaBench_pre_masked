
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ execs; int lineno; char const* connection; int * stmtID; int ecpgQuery; } ;
typedef TYPE_1__ stmtCacheEntry ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int *,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_5(int VAR_3,
      const char *VAR_4,
      const char *VAR_5,
      int VAR_6,
      const char *VAR_7)
{
 int VAR_8,
    VAR_9,
    VAR_10,
    VAR_11;
 stmtCacheEntry *VAR_12;


 if (VAR_2 == ((void*)0))
 {
  VAR_2 = (stmtCacheEntry *)
   FUNC_1(sizeof(stmtCacheEntry) * VAR_0, VAR_3);
  if (VAR_2 == ((void*)0))
   return -1;
 }


 VAR_9 = FUNC_0(VAR_7);


 VAR_11 = VAR_9;

 VAR_10 = VAR_9;
 for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8)
 {
  VAR_12 = &VAR_2[VAR_11];
  if (!VAR_12->stmtID[0])
   break;
  if (VAR_12->execs < VAR_2[VAR_10].execs)
   VAR_10 = VAR_11;
  ++VAR_11;
 }





 if (VAR_8 >= VAR_1)
  VAR_11 = VAR_10;


 if (FUNC_2(VAR_3, VAR_6, VAR_11) < 0)
  return -1;


 VAR_12 = &VAR_2[VAR_11];
 VAR_12->lineno = VAR_3;
 VAR_12->ecpgQuery = FUNC_3(VAR_7, VAR_3);
 VAR_12->connection = VAR_5;
 VAR_12->execs = 0;
 FUNC_4(VAR_12->stmtID, VAR_4, sizeof(VAR_12->stmtID));

 return VAR_11;
}
