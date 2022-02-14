
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ format; int str; } ;
typedef int ScanDirection ;
typedef int Oid ;
typedef TYPE_1__ ExplainState ;



 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,TYPE_1__*) ;


 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(Oid VAR_1, ScanDirection VAR_2,
      ExplainState *VAR_3)
{
 const char *VAR_4 = FUNC_4(VAR_1);

 if (VAR_3->format == VAR_0)
 {
  if (FUNC_1(VAR_2))
   FUNC_3(VAR_3->str, " Backward");
  FUNC_2(VAR_3->str, " using %s", VAR_4);
 }
 else
 {
  const char *VAR_5;

  switch (VAR_2)
  {
   case 130:
    VAR_5 = "Backward";
    break;
   case 128:
    VAR_5 = "NoMovement";
    break;
   case 129:
    VAR_5 = "Forward";
    break;
   default:
    VAR_5 = "???";
    break;
  }
  FUNC_0("Scan Direction", VAR_5, VAR_3);
  FUNC_0("Index Name", VAR_4, VAR_3);
 }
}
