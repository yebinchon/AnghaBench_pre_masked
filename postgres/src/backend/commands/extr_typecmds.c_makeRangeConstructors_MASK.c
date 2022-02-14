
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int oidvector ;
struct TYPE_5__ {scalar_t__ objectSubId; int objectId; int classId; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 TYPE_1__ FUNC_1 (char const*,int ,int,int,int ,int ,int ,int ,char const* const,int *,int ,int,int,int,int ,int ,int *,int ,int ,int ,int ,int ,int ,int ,double,double) ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_2 (int *,int const) ;
 int FUNC_3 (char const* const*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_11, Oid VAR_12,
       Oid VAR_13, Oid VAR_14)
{
 static const char *const VAR_15[2] = {"range_constructor2",
 "range_constructor3"};
 static const int VAR_16[2] = {2, 3};

 Oid VAR_17[3];
 ObjectAddress VAR_18,
    VAR_19;
 int VAR_20;

 VAR_17[0] = VAR_14;
 VAR_17[1] = VAR_14;
 VAR_17[2] = VAR_9;

 VAR_19.classId = VAR_10;
 VAR_19.objectId = VAR_13;
 VAR_19.objectSubId = 0;

 for (VAR_20 = 0; VAR_20 < FUNC_3(VAR_15); VAR_20++)
 {
  oidvector *VAR_21;

  VAR_21 = FUNC_2(VAR_17,
               VAR_16[VAR_20]);

  VAR_18 = FUNC_1(VAR_11,
         VAR_12,
         0,
         0,
         VAR_13,
         VAR_0,
         VAR_3,
         VAR_2,
         VAR_15[VAR_20],
         ((void*)0),
         VAR_6,
         0,
         0,
         0,
         VAR_8,
         VAR_7,
         VAR_21,
         FUNC_0(((void*)0)),
         FUNC_0(((void*)0)),
         FUNC_0(((void*)0)),
         VAR_5,
         FUNC_0(((void*)0)),
         FUNC_0(((void*)0)),
         VAR_4,
         1.0,
         0.0);






  FUNC_4(&VAR_18, &VAR_19, VAR_1);
 }
}
