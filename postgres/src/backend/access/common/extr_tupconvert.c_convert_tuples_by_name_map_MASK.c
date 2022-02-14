
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {scalar_t__ atttypid; scalar_t__ atttypmod; scalar_t__ attnum; int attname; scalar_t__ attisdropped; } ;
struct TYPE_7__ {int natts; int tdtypeid; } ;
typedef scalar_t__ Oid ;
typedef TYPE_2__* Form_pg_attribute ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char*,char*) ;

AttrNumber *
FUNC_9(TupleDesc VAR_2,
         TupleDesc VAR_3)
{
 AttrNumber *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8 = -1;

 VAR_5 = VAR_3->natts;
 VAR_6 = VAR_2->natts;

 VAR_4 = (AttrNumber *) FUNC_7(VAR_5 * sizeof(AttrNumber));
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
 {
  Form_pg_attribute VAR_9 = FUNC_1(VAR_3, VAR_7);
  char *VAR_10;
  Oid VAR_11;
  int32 VAR_12;
  int VAR_13;

  if (VAR_9->attisdropped)
   continue;
  VAR_10 = FUNC_0(VAR_9->attname);
  VAR_11 = VAR_9->atttypid;
  VAR_12 = VAR_9->atttypmod;
  for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
  {
   Form_pg_attribute VAR_14;

   VAR_8++;
   if (VAR_8 >= VAR_6)
    VAR_8 = 0;

   VAR_14 = FUNC_1(VAR_2, VAR_8);
   if (VAR_14->attisdropped)
    continue;
   if (FUNC_8(VAR_10, FUNC_0(VAR_14->attname)) == 0)
   {

    if (VAR_11 != VAR_14->atttypid || VAR_12 != VAR_14->atttypmod)
     FUNC_2(VAR_1,
       (FUNC_3(VAR_0),
        FUNC_5("could not convert row type"),
        FUNC_4("Attribute \"%s\" of type %s does not match corresponding attribute of type %s.",
            VAR_10,
            FUNC_6(VAR_3->tdtypeid),
            FUNC_6(VAR_2->tdtypeid))));
    VAR_4[VAR_7] = VAR_14->attnum;
    break;
   }
  }
  if (VAR_4[VAR_7] == 0)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_5("could not convert row type"),
      FUNC_4("Attribute \"%s\" of type %s does not exist in type %s.",
          VAR_10,
          FUNC_6(VAR_3->tdtypeid),
          FUNC_6(VAR_2->tdtypeid))));
 }
 return VAR_4;
}
