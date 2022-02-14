
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oprcode; int oid; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_operator ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static Oid
FUNC_7(const char *VAR_2,
   Oid VAR_3,
   Oid VAR_4,
   Oid VAR_5,
   bool *VAR_6)
{
 HeapTuple VAR_7;
 Oid VAR_8;

 VAR_7 = FUNC_6(VAR_1,
        FUNC_3(VAR_2),
        FUNC_2(VAR_4),
        FUNC_2(VAR_5),
        FUNC_2(VAR_3));
 if (FUNC_1(VAR_7))
 {
  Form_pg_operator VAR_9 = (Form_pg_operator) FUNC_0(VAR_7);

  VAR_8 = VAR_9->oid;
  *VAR_6 = FUNC_4(VAR_9->oprcode);
  FUNC_5(VAR_7);
 }
 else
 {
  VAR_8 = VAR_0;
  *VAR_6 = 0;
 }

 return VAR_8;
}
