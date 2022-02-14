
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int rows; int total_cost; int startup_cost; TYPE_1__* pathtarget; } ;
struct TYPE_15__ {double tuple_fraction; } ;
struct TYPE_14__ {int width; } ;
typedef double Size ;
typedef TYPE_2__ PlannerInfo ;
typedef TYPE_3__ Path ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_3__*,double) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ,int *,int,double,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int,double,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,int ,int ,int ,int ,double,long,double) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 long VAR_6 ;

__attribute__((used)) static bool
FUNC_12(PlannerInfo *VAR_7, List *VAR_8,
     Path *VAR_9,
     double VAR_10, double VAR_11,
     const char *VAR_12)
{
 int VAR_13 = FUNC_11(VAR_8);
 bool VAR_14;
 bool VAR_15;
 Size VAR_16;
 Path VAR_17;
 Path VAR_18;
 double VAR_19;


 VAR_14 = FUNC_10(VAR_8);
 VAR_15 = FUNC_9(VAR_8);
 if (VAR_15 && VAR_14)
 {

 }
 else if (VAR_15)
  return 1;
 else if (VAR_14)
  return 0;
 else
  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),

     FUNC_8("could not implement %s", VAR_12),
     FUNC_7("Some of the datatypes only support hashing, while others only support sorting.")));


 if (!VAR_5)
  return 0;





 VAR_16 = FUNC_0(VAR_9->pathtarget->width) + FUNC_0(VAR_4);

 if (VAR_16 * VAR_10 > VAR_6 * 1024L)
  return 0;
 FUNC_2(&VAR_17, VAR_7, VAR_0, ((void*)0),
    VAR_13, VAR_10,
    VAR_3,
    VAR_9->startup_cost, VAR_9->total_cost,
    VAR_9->rows);





 VAR_18.startup_cost = VAR_9->startup_cost;
 VAR_18.total_cost = VAR_9->total_cost;

 FUNC_4(&VAR_18, VAR_7, VAR_3, VAR_18.total_cost,
     VAR_9->rows, VAR_9->pathtarget->width,
     0.0, VAR_6, -1.0);
 FUNC_3(&VAR_18, VAR_7, VAR_13, VAR_10,
      VAR_3,
      VAR_18.startup_cost, VAR_18.total_cost,
      VAR_9->rows);





 VAR_19 = VAR_7->tuple_fraction;
 if (VAR_19 >= 1.0)
  VAR_19 /= VAR_11;

 if (FUNC_1(&VAR_17, &VAR_18,
           VAR_19) < 0)
 {

  return 1;
 }
 return 0;
}
