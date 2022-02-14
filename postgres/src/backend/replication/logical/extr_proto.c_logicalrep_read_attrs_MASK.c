
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {char** attnames; int natts; int * attkeys; scalar_t__* atttyps; } ;
typedef int StringInfo ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ LogicalRepRelation ;
typedef int Bitmapset ;


 int VAR_0 ;
 int * FUNC_0 (int *,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(StringInfo VAR_1, LogicalRepRelation *VAR_2)
{
 int VAR_3;
 int VAR_4;
 char **VAR_5;
 Oid *VAR_6;
 Bitmapset *VAR_7 = ((void*)0);

 VAR_4 = FUNC_3(VAR_1, 2);
 VAR_5 = FUNC_1(VAR_4 * sizeof(char *));
 VAR_6 = FUNC_1(VAR_4 * sizeof(Oid));


 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
 {
  uint8 VAR_8;


  VAR_8 = FUNC_2(VAR_1);
  if (VAR_8 & VAR_0)
   VAR_7 = FUNC_0(VAR_7, VAR_3);


  VAR_5[VAR_3] = FUNC_5(FUNC_4(VAR_1));


  VAR_6[VAR_3] = (Oid) FUNC_3(VAR_1, 4);


  (void) FUNC_3(VAR_1, 4);
 }

 VAR_2->attnames = VAR_5;
 VAR_2->atttyps = VAR_6;
 VAR_2->attkeys = VAR_7;
 VAR_2->natts = VAR_4;
}
