
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void const* extnodemethods; } ;
struct TYPE_5__ {int entrysize; scalar_t__ keysize; } ;
typedef int HTAB ;
typedef TYPE_1__ HASHCTL ;
typedef TYPE_2__ ExtensibleNodeEntry ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 int * FUNC_4 (char const*,int,TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int *,char const*,int ,int*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static void
FUNC_8(HTAB **VAR_5, const char *VAR_6,
       const char *VAR_7,
       const void *VAR_8)
{
 ExtensibleNodeEntry *VAR_9;
 bool VAR_10;

 if (*VAR_5 == ((void*)0))
 {
  HASHCTL VAR_11;

  FUNC_6(&VAR_11, 0, sizeof(HASHCTL));
  VAR_11.keysize = VAR_2;
  VAR_11.entrysize = sizeof(ExtensibleNodeEntry);

  *VAR_5 = FUNC_4(VAR_6, 100, &VAR_11, VAR_3);
 }

 if (FUNC_7(VAR_7) >= VAR_2)
  FUNC_0(VAR_1, "extensible node name is too long");

 VAR_9 = (ExtensibleNodeEntry *) FUNC_5(*VAR_5,
            VAR_7,
            VAR_4, &VAR_10);
 if (VAR_10)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("extensible node type \"%s\" already exists",
      VAR_7)));

 VAR_9->extnodemethods = VAR_8;
}
