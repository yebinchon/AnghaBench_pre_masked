
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_8__ {int pages; double ntuples; int filename; scalar_t__ is_program; } ;
struct TYPE_7__ {scalar_t__ pages; double tuples; double rows; int baserestrictinfo; TYPE_1__* reltarget; } ;
struct TYPE_6__ {int width; } ;
typedef TYPE_2__ RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_3__ FileFdwPlanState ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 double FUNC_1 (double) ;
 double FUNC_2 (int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,struct stat*) ;

__attribute__((used)) static void
FUNC_4(PlannerInfo *VAR_3, RelOptInfo *VAR_4,
     FileFdwPlanState *VAR_5)
{
 struct stat VAR_6;
 BlockNumber VAR_7;
 double VAR_8;
 double VAR_9;






 if (VAR_5->is_program || FUNC_3(VAR_5->filename, &VAR_6) < 0)
  VAR_6.st_size = 10 * VAR_0;




 VAR_7 = (VAR_6.st_size + (VAR_0 - 1)) / VAR_0;
 if (VAR_7 < 1)
  VAR_7 = 1;
 VAR_5->pages = VAR_7;




 if (VAR_4->pages > 0)
 {





  double VAR_10;

  VAR_10 = VAR_4->tuples / (double) VAR_4->pages;
  VAR_8 = FUNC_1(VAR_10 * (double) VAR_7);
 }
 else
 {
  int VAR_11;

  VAR_11 = FUNC_0(VAR_4->reltarget->width) +
   FUNC_0(VAR_2);
  VAR_8 = FUNC_1((double) VAR_6.st_size /
        (double) VAR_11);
 }
 VAR_5->ntuples = VAR_8;





 VAR_9 = VAR_8 *
  FUNC_2(VAR_3,
          VAR_4->baserestrictinfo,
          0,
          VAR_1,
          ((void*)0));

 VAR_9 = FUNC_1(VAR_9);


 VAR_4->rows = VAR_9;
}
