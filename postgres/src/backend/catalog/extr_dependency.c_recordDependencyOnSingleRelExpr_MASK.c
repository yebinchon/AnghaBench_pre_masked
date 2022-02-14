
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int rte ;
struct TYPE_18__ {TYPE_3__* addrs; TYPE_2__* rtables; } ;
typedef TYPE_1__ find_expr_references_context ;
struct TYPE_21__ {scalar_t__ classId; scalar_t__ objectId; } ;
struct TYPE_20__ {scalar_t__ numrefs; TYPE_4__* refs; } ;
struct TYPE_19__ {int rellockmode; int relkind; scalar_t__ relid; int rtekind; int type; } ;
typedef TYPE_2__ RangeTblEntry ;
typedef scalar_t__ Oid ;
typedef TYPE_3__ ObjectAddresses ;
typedef TYPE_4__ ObjectAddress ;
typedef int Node ;
typedef int DependencyType ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 void* FUNC_6 () ;
 int FUNC_7 (TYPE_4__*,TYPE_4__ const*,int ) ;
 int FUNC_8 (TYPE_4__ const*,TYPE_4__*,int,int ) ;

void
FUNC_9(const ObjectAddress *VAR_5,
        Node *VAR_6, Oid VAR_7,
        DependencyType VAR_8,
        DependencyType VAR_9,
        bool VAR_10)
{
 find_expr_references_context VAR_11;
 RangeTblEntry VAR_12;

 VAR_11.addrs = FUNC_6();


 FUNC_0(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.type = VAR_4;
 VAR_12.rtekind = VAR_2;
 VAR_12.relid = VAR_7;
 VAR_12.relkind = VAR_1;
 VAR_12.rellockmode = VAR_0;

 VAR_11.rtables = FUNC_5(FUNC_5(&VAR_12));


 FUNC_3(VAR_6, &VAR_11);


 FUNC_2(VAR_11.addrs);


 if ((VAR_8 != VAR_9 || VAR_10) &&
  VAR_11.addrs->numrefs > 0)
 {
  ObjectAddresses *VAR_13;
  ObjectAddress *VAR_14;
  int VAR_15,
     VAR_16;

  VAR_13 = FUNC_6();

  VAR_14 = VAR_11.addrs->refs;
  VAR_16 = 0;
  for (VAR_15 = 0; VAR_15 < VAR_11.addrs->numrefs; VAR_15++)
  {
   ObjectAddress *VAR_17 = VAR_11.addrs->refs + VAR_15;

   if (VAR_17->classId == VAR_3 &&
    VAR_17->objectId == VAR_7)
   {

    FUNC_1(VAR_17, VAR_13);
   }
   else
   {

    *VAR_14 = *VAR_17;
    VAR_14++;
    VAR_16++;
   }
  }
  VAR_11.addrs->numrefs = VAR_16;


  if (!VAR_10)
   FUNC_8(VAR_5,
            VAR_13->refs, VAR_13->numrefs,
            VAR_9);
  else
  {

   int VAR_18;

   for (VAR_18 = 0; VAR_18 < VAR_13->numrefs; VAR_18++)
   {
    ObjectAddress *VAR_19 = VAR_13->refs + VAR_18;

    FUNC_7(VAR_19, VAR_5, VAR_9);
   }
  }

  FUNC_4(VAR_13);
 }


 FUNC_8(VAR_5,
          VAR_11.addrs->refs, VAR_11.addrs->numrefs,
          VAR_8);

 FUNC_4(VAR_11.addrs);
}
