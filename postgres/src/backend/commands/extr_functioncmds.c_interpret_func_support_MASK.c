
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef int List ;
typedef int DefElem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,int,scalar_t__*,int) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *,int,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;

__attribute__((used)) static Oid
FUNC_10(DefElem *VAR_6)
{
 List *VAR_7 = FUNC_3(VAR_6);
 Oid VAR_8;
 Oid VAR_9[1];





 VAR_9[0] = VAR_4;

 VAR_8 = FUNC_0(VAR_7, 1, VAR_9, 1);
 if (!FUNC_2(VAR_8))
  FUNC_4(VAR_3,
    (FUNC_5(VAR_2),
     FUNC_6("function %s does not exist",
      FUNC_7(VAR_7, 1, VAR_5, VAR_9))));

 if (FUNC_8(VAR_8) != VAR_4)
  FUNC_4(VAR_3,
    (FUNC_5(VAR_1),
     FUNC_6("support function %s must return type %s",
      FUNC_1(VAR_7), "internal")));






 if (!FUNC_9())
  FUNC_4(VAR_3,
    (FUNC_5(VAR_0),
     FUNC_6("must be superuser to specify a support function")));

 return VAR_8;
}
