
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef enum trivalue { ____Placeholder_trivalue } trivalue ;
struct TYPE_7__ {int data; } ;
typedef TYPE_1__ PQExpBufferData ;
typedef int PGconn ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char const*,int *,int) ;
 int * FUNC_6 (char const*,char const*,char const*,char const*,int,char const*,int,int,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*,char const*,int ,...) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_12(const char *VAR_0, bool VAR_1, const char *VAR_2,
      const char *VAR_3, const char *VAR_4,
      const char *VAR_5, enum trivalue VAR_6,
      const char *VAR_7, bool VAR_8)
{
 PQExpBufferData VAR_9;

 PGconn *VAR_10;

 VAR_10 = FUNC_6(VAR_0, VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7, VAR_8, 0, 0);

 FUNC_9(&VAR_9);

 FUNC_4(&VAR_9, "CLUSTER");
 if (VAR_1)
  FUNC_4(&VAR_9, " VERBOSE");
 if (VAR_2)
 {
  FUNC_3(&VAR_9, ' ');
  FUNC_5(&VAR_9, VAR_2, VAR_10, VAR_8);
 }
 FUNC_3(&VAR_9, ';');

 if (!FUNC_7(VAR_10, VAR_9.data, VAR_8))
 {
  if (VAR_2)
   FUNC_10("clustering of table \"%s\" in database \"%s\" failed: %s",
       VAR_2, FUNC_0(VAR_10), FUNC_1(VAR_10));
  else
   FUNC_10("clustering of database \"%s\" failed: %s",
       FUNC_0(VAR_10), FUNC_1(VAR_10));
  FUNC_2(VAR_10);
  FUNC_8(1);
 }
 FUNC_2(VAR_10);
 FUNC_11(&VAR_9);
}
