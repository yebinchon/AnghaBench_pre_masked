
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int library_version ;
struct TYPE_11__ {int version; scalar_t__ funcmaxargs; scalar_t__ indexmaxkeys; scalar_t__ namedatalen; scalar_t__ float4byval; scalar_t__ float8byval; } ;
struct TYPE_10__ {int version; scalar_t__ funcmaxargs; scalar_t__ indexmaxkeys; scalar_t__ namedatalen; scalar_t__ float4byval; scalar_t__ float8byval; } ;
struct TYPE_9__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ Pg_magic_struct ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,char*) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int,char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_9 (char*,int,char*,int,...) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_2,
        const Pg_magic_struct *VAR_3)
{
 StringInfoData VAR_4;





 if (VAR_1.version != VAR_3->version)
 {
  char VAR_5[32];

  if (VAR_3->version >= 1000)
   FUNC_9(VAR_5, sizeof(VAR_5), "%d",
      VAR_3->version / 100);
  else
   FUNC_9(VAR_5, sizeof(VAR_5), "%d.%d",
      VAR_3->version / 100,
      VAR_3->version % 100);
  FUNC_4(VAR_0,
    (FUNC_7("incompatible library \"%s\": version mismatch",
      VAR_2),
     FUNC_5("Server is version %d, library is version %s.",
         VAR_1.version / 100, VAR_5)));
 }







 FUNC_8(&VAR_4);

 if (VAR_3->funcmaxargs != VAR_1.funcmaxargs)
 {
  if (VAR_4.len)
   FUNC_2(&VAR_4, '\n');
  FUNC_1(&VAR_4,
       FUNC_0("Server has FUNC_MAX_ARGS = %d, library has %d."),
       VAR_1.funcmaxargs,
       VAR_3->funcmaxargs);
 }
 if (VAR_3->indexmaxkeys != VAR_1.indexmaxkeys)
 {
  if (VAR_4.len)
   FUNC_2(&VAR_4, '\n');
  FUNC_1(&VAR_4,
       FUNC_0("Server has INDEX_MAX_KEYS = %d, library has %d."),
       VAR_1.indexmaxkeys,
       VAR_3->indexmaxkeys);
 }
 if (VAR_3->namedatalen != VAR_1.namedatalen)
 {
  if (VAR_4.len)
   FUNC_2(&VAR_4, '\n');
  FUNC_1(&VAR_4,
       FUNC_0("Server has NAMEDATALEN = %d, library has %d."),
       VAR_1.namedatalen,
       VAR_3->namedatalen);
 }
 if (VAR_3->float4byval != VAR_1.float4byval)
 {
  if (VAR_4.len)
   FUNC_2(&VAR_4, '\n');
  FUNC_1(&VAR_4,
       FUNC_0("Server has FLOAT4PASSBYVAL = %s, library has %s."),
       VAR_1.float4byval ? "true" : "false",
       VAR_3->float4byval ? "true" : "false");
 }
 if (VAR_3->float8byval != VAR_1.float8byval)
 {
  if (VAR_4.len)
   FUNC_2(&VAR_4, '\n');
  FUNC_1(&VAR_4,
       FUNC_0("Server has FLOAT8PASSBYVAL = %s, library has %s."),
       VAR_1.float8byval ? "true" : "false",
       VAR_3->float8byval ? "true" : "false");
 }

 if (VAR_4.len == 0)
  FUNC_3(&VAR_4,
          FUNC_0("Magic block has unexpected length or padding difference."));

 FUNC_4(VAR_0,
   (FUNC_7("incompatible library \"%s\": magic block mismatch",
     VAR_2),
    FUNC_6("%s", VAR_4.data)));
}
