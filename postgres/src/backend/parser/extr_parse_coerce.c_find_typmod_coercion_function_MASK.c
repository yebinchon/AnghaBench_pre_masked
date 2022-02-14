
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int Type ;
struct TYPE_4__ {scalar_t__ castfunc; } ;
struct TYPE_3__ {scalar_t__ typelem; int typlen; } ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;
typedef TYPE_2__* Form_pg_cast ;
typedef int CoercionPathType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (scalar_t__) ;

CoercionPathType
FUNC_7(Oid VAR_5,
         Oid *VAR_6)
{
 CoercionPathType VAR_7;
 Type VAR_8;
 Form_pg_type VAR_9;
 HeapTuple VAR_10;

 *VAR_6 = VAR_4;
 VAR_7 = VAR_2;

 VAR_8 = FUNC_6(VAR_5);
 VAR_9 = (Form_pg_type) FUNC_0(VAR_8);


 if (VAR_9->typelem != VAR_4 && VAR_9->typlen == -1)
 {

  VAR_5 = VAR_9->typelem;
  VAR_7 = VAR_1;
 }
 FUNC_4(VAR_8);


 VAR_10 = FUNC_5(VAR_0,
       FUNC_2(VAR_5),
       FUNC_2(VAR_5));

 if (FUNC_1(VAR_10))
 {
  Form_pg_cast VAR_11 = (Form_pg_cast) FUNC_0(VAR_10);

  *VAR_6 = VAR_11->castfunc;
  FUNC_4(VAR_10);
 }

 if (!FUNC_3(*VAR_6))
  VAR_7 = VAR_3;

 return VAR_7;
}
