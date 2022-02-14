
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct varlena {int dummy; } ;
typedef int bytea ;
struct TYPE_3__ {int pageno; int loid; int data; } ;
typedef TYPE_1__* Form_pg_largeobject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct varlena*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(Form_pg_largeobject VAR_4,
    bytea **VAR_5,
    int *VAR_6,
    bool *VAR_7)
{
 bytea *VAR_8;
 int VAR_9;
 bool VAR_10;

 VAR_8 = &(VAR_4->data);
 VAR_10 = 0;
 if (FUNC_0(VAR_8))
 {
  VAR_8 = (bytea *)
   FUNC_2((struct varlena *) VAR_8);
  VAR_10 = 1;
 }
 VAR_9 = FUNC_1(VAR_8) - VAR_3;
 if (VAR_9 < 0 || VAR_9 > VAR_2)
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("pg_largeobject entry for OID %u, page %d has invalid data field size %d",
      VAR_4->loid, VAR_4->pageno, VAR_9)));
 *VAR_5 = VAR_8;
 *VAR_6 = VAR_9;
 *VAR_7 = VAR_10;
}
