
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread_data {int bind_node; } ;
struct TYPE_3__ {int nr_tasks; int nr_nodes; int node_list_str; } ;
struct TYPE_4__ {TYPE_1__ p; struct thread_data* threads; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,...) ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (char**,char*) ;
 char* FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int FUNC_10(void)
{
 struct thread_data *VAR_1;
 char *VAR_2, *VAR_3;
 int VAR_4;

 if (!VAR_0->p.node_list_str)
  return 0;

 FUNC_2("g->p.nr_tasks: %d\n", VAR_0->p.nr_tasks);

 VAR_2 = VAR_3 = FUNC_6(VAR_0->p.node_list_str);
 VAR_4 = 0;

 FUNC_0(!VAR_3);

 FUNC_9("# binding tasks to NODEs:\n");
 FUNC_9("# ");

 while (1) {
  int VAR_5, VAR_6, VAR_7;
  char *VAR_8, *VAR_9, *VAR_10, *VAR_11;
  int VAR_12;
  int VAR_13;

  VAR_8 = FUNC_7(&VAR_3, ",");
  if (!VAR_8)
   break;

  VAR_9 = FUNC_8(VAR_8, "-");

  FUNC_2("\ntoken: {%s}, end: {%s}\n", VAR_8, VAR_9);
  if (!VAR_9) {

   VAR_6 = VAR_7 = FUNC_1(VAR_8);
  } else {

   VAR_6 = FUNC_1(VAR_8);
   VAR_7 = FUNC_1(VAR_9 + 1);
  }

  VAR_12 = 1;
  VAR_10 = FUNC_8(VAR_8, "#");
  if (VAR_10) {
   VAR_12 = FUNC_1(VAR_10 + 1);
   FUNC_0(VAR_12 <= 0 || VAR_12 >= VAR_0->p.nr_nodes);
  }


  VAR_13 = 1;
  VAR_11 = FUNC_8(VAR_8, "x");
  if (VAR_11) {
   VAR_13 = FUNC_1(VAR_11 + 1);
   FUNC_0(VAR_13 <= 0);
  }

  FUNC_2("NODEs: %d-%d #%d\n", VAR_6, VAR_7, VAR_12);

  if (VAR_6 >= VAR_0->p.nr_nodes || VAR_7 >= VAR_0->p.nr_nodes) {
   FUNC_5("\nTest not applicable, system has only %d nodes.\n", VAR_0->p.nr_nodes);
   return -1;
  }

  FUNC_0(VAR_6 < 0 || VAR_7 < 0);
  FUNC_0(VAR_6 > VAR_7);

  for (VAR_5 = VAR_6; VAR_5 <= VAR_7; VAR_5 += VAR_12) {
   int VAR_14;

   for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
    if (VAR_4 >= VAR_0->p.nr_tasks || !FUNC_4(VAR_5)) {
     FUNC_5("\n# NOTE: ignoring bind NODEs starting at NODE#%d\n", VAR_5);
     goto out;
    }
    VAR_1 = VAR_0->threads + VAR_4;

    if (!VAR_4)
     FUNC_9(" %2d", VAR_5);
    else
     FUNC_9(",%2d", VAR_5);

    VAR_1->bind_node = VAR_5;
    VAR_4++;
   }
  }
 }
out:

 FUNC_9("\n");

 if (VAR_4 < VAR_0->p.nr_tasks)
  FUNC_5("# NOTE: %d tasks mem-bound, %d tasks unbound\n", VAR_4, VAR_0->p.nr_tasks - VAR_4);

 FUNC_3(VAR_2);
 return 0;
}
