
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bytea ;
typedef int * amoptions_function ;
struct TYPE_7__ {int * rd_options; TYPE_2__* rd_indam; TYPE_1__* rd_rel; } ;
struct TYPE_6__ {int * amoptions; } ;
struct TYPE_5__ {int relkind; } ;
typedef TYPE_3__* Relation ;
typedef int HeapTuple ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ) ;







 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(Relation VAR_1, HeapTuple VAR_2)
{
 bytea *VAR_3;
 amoptions_function VAR_4;

 VAR_1->rd_options = ((void*)0);





 switch (VAR_1->rd_rel->relkind)
 {
  case 130:
  case 129:
  case 128:
  case 133:
  case 131:
   VAR_4 = ((void*)0);
   break;
  case 134:
  case 132:
   VAR_4 = VAR_1->rd_indam->amoptions;
   break;
  default:
   return;
 }






 VAR_3 = FUNC_3(VAR_2, FUNC_0(), VAR_4);







 if (VAR_3)
 {
  VAR_1->rd_options = FUNC_1(VAR_0,
              FUNC_2(VAR_3));
  FUNC_4(VAR_1->rd_options, VAR_3, FUNC_2(VAR_3));
  FUNC_5(VAR_3);
 }
}
