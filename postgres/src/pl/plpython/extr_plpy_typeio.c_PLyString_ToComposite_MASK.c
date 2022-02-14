
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int fn_oid; } ;
struct TYPE_8__ {TYPE_4__ recinfunc; } ;
struct TYPE_7__ {TYPE_2__ tuple; } ;
struct TYPE_9__ {int typmod; int typoid; TYPE_1__ u; int mcxt; } ;
typedef int PyObject ;
typedef TYPE_3__ PLyObToDatum ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,TYPE_4__*,int ) ;
 scalar_t__ FUNC_9 (unsigned char) ;

__attribute__((used)) static Datum
FUNC_10(PLyObToDatum *VAR_3, PyObject *VAR_4, bool VAR_5)
{
 char *VAR_6;





 if (!FUNC_1(VAR_3->u.tuple.recinfunc.fn_oid))
  FUNC_8(VAR_2, &VAR_3->u.tuple.recinfunc, VAR_3->mcxt);

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_5)
 {
  char *VAR_7 = VAR_6;


  while (*VAR_7 && FUNC_9((unsigned char) *VAR_7))
   VAR_7++;
  if (*VAR_7++ != '(')
   FUNC_3(VAR_1,
     (FUNC_4(VAR_0),
      FUNC_7("malformed record literal: \"%s\"", VAR_6),
      FUNC_5("Missing left parenthesis."),
      FUNC_6("To return a composite type in an array, return the composite type as a Python tuple, e.g., \"[('foo',)]\".")));
 }

 return FUNC_0(&VAR_3->u.tuple.recinfunc,
        VAR_6,
        VAR_3->typoid,
        VAR_3->typmod);
}
