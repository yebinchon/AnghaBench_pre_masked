
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int namespaceName ;
struct TYPE_2__ {void* tempNamespaceId; } ;
typedef void* Oid ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 () ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 void* FUNC_6 (char*,int ,int) ;
 int FUNC_7 (void*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (void*) ;
 int VAR_11 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int ) ;
 void* FUNC_14 (char*,int) ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 scalar_t__ FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_17(void)
{
 char VAR_15[VAR_10];
 Oid VAR_16;
 Oid VAR_17;

 FUNC_0(!FUNC_7(VAR_12));
 if (FUNC_15(VAR_8, FUNC_4(),
        VAR_1) != VAR_0)
  FUNC_10(VAR_5,
    (FUNC_11(VAR_3),
     FUNC_12("permission denied to create temporary tables in database \"%s\"",
      FUNC_13(VAR_8))));
 if (FUNC_8())
  FUNC_10(VAR_5,
    (FUNC_11(VAR_4),
     FUNC_12("cannot create temporary tables during recovery")));


 if (FUNC_5())
  FUNC_10(VAR_5,
    (FUNC_11(VAR_4),
     FUNC_12("cannot create temporary tables during a parallel operation")));

 FUNC_16(VAR_15, sizeof(VAR_15), "pg_temp_%d", VAR_7);

 VAR_16 = FUNC_14(VAR_15, 1);
 if (!FUNC_7(VAR_16))
 {
  VAR_16 = FUNC_6(VAR_15, VAR_2,
           1);

  FUNC_2();
 }
 else
 {




  FUNC_9(VAR_16);
 }






 FUNC_16(VAR_15, sizeof(VAR_15), "pg_toast_temp_%d",
    VAR_7);

 VAR_17 = FUNC_14(VAR_15, 1);
 if (!FUNC_7(VAR_17))
 {
  VAR_17 = FUNC_6(VAR_15, VAR_2,
            1);

  FUNC_2();
 }






 VAR_12 = VAR_16;
 VAR_14 = VAR_17;
 VAR_9->tempNamespaceId = VAR_16;


 FUNC_1(VAR_13 == VAR_6);
 VAR_13 = FUNC_3();

 VAR_11 = 0;
}
