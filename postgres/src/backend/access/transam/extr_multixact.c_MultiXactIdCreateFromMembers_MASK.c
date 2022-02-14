
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nmembers; int moff; int mid; } ;
typedef TYPE_1__ xl_multixact_create ;
struct TYPE_9__ {int status; } ;
typedef int MultiXactOffset ;
typedef TYPE_2__ MultiXactMember ;
typedef int MultiXactId ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int,TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int,TYPE_2__*) ;
 int FUNC_12 (int ,int,TYPE_2__*) ;
 int FUNC_13 (int ,int,TYPE_2__*) ;

MultiXactId
FUNC_14(int VAR_6, MultiXactMember *VAR_7)
{
 MultiXactId VAR_8;
 MultiXactOffset VAR_9;
 xl_multixact_create VAR_10;

 FUNC_9(VAR_0, "Create: %s",
    FUNC_13(VAR_2, VAR_6, VAR_7));
 VAR_8 = FUNC_11(VAR_6, VAR_7);
 if (FUNC_3(VAR_8))
 {
  FUNC_8(VAR_0, "Create: in cache!");
  return VAR_8;
 }


 {
  int VAR_11;
  bool VAR_12 = 0;

  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
  {
   if (FUNC_2(VAR_7[VAR_11].status))
   {
    if (VAR_12)
     FUNC_10(VAR_1, "new multixact has more than one updating member");
    VAR_12 = 1;
   }
  }
 }
 VAR_8 = FUNC_1(VAR_6, &VAR_9);


 VAR_10.mid = VAR_8;
 VAR_10.moff = VAR_9;
 VAR_10.nmembers = VAR_6;







 FUNC_5();
 FUNC_7((char *) (&VAR_10), VAR_4);
 FUNC_7((char *) VAR_7, VAR_6 * sizeof(MultiXactMember));

 (void) FUNC_6(VAR_3, VAR_5);


 FUNC_4(VAR_8, VAR_9, VAR_6, VAR_7);


 FUNC_0();


 FUNC_12(VAR_8, VAR_6, VAR_7);

 FUNC_8(VAR_0, "Create: all done");

 return VAR_8;
}
