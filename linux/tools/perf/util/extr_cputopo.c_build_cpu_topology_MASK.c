
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct cpu_topology {size_t core_sib; char** core_siblings; char** die_siblings; size_t die_sib; size_t thread_sib; char** thread_siblings; } ;
typedef scalar_t__ ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char**,size_t*,int *) ;
 int FUNC_5 (char*,int,int ,int ,int) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct cpu_topology *VAR_6, int VAR_7)
{
 FILE *VAR_8;
 char VAR_9[VAR_3];
 char *VAR_10 = ((void*)0), *VAR_11;
 size_t VAR_12 = 0;
 ssize_t VAR_13;
 u32 VAR_14 = 0;
 int VAR_15 = -1;

 FUNC_5(VAR_9, VAR_3, VAR_0,
    FUNC_8(), VAR_7);
 VAR_8 = FUNC_2(VAR_9, "r");
 if (!VAR_8)
  goto try_dies;

 VAR_13 = FUNC_4(&VAR_10, &VAR_12, VAR_8);
 FUNC_1(VAR_8);
 if (VAR_13 <= 0)
  goto try_dies;

 VAR_11 = FUNC_6(VAR_10, '\n');
 if (VAR_11)
  *VAR_11 = '\0';

 for (VAR_14 = 0; VAR_14 < VAR_6->core_sib; VAR_14++) {
  if (!FUNC_7(VAR_10, VAR_6->core_siblings[VAR_14]))
   break;
 }
 if (VAR_14 == VAR_6->core_sib) {
  VAR_6->core_siblings[VAR_14] = VAR_10;
  VAR_6->core_sib++;
  VAR_10 = ((void*)0);
  VAR_12 = 0;
 }
 VAR_15 = 0;

try_dies:
 if (!VAR_6->die_siblings)
  goto try_threads;

 FUNC_5(VAR_9, VAR_3, VAR_1,
    FUNC_8(), VAR_7);
 VAR_8 = FUNC_2(VAR_9, "r");
 if (!VAR_8)
  goto try_threads;

 VAR_13 = FUNC_4(&VAR_10, &VAR_12, VAR_8);
 FUNC_1(VAR_8);
 if (VAR_13 <= 0)
  goto try_threads;

 VAR_11 = FUNC_6(VAR_10, '\n');
 if (VAR_11)
  *VAR_11 = '\0';

 for (VAR_14 = 0; VAR_14 < VAR_6->die_sib; VAR_14++) {
  if (!FUNC_7(VAR_10, VAR_6->die_siblings[VAR_14]))
   break;
 }
 if (VAR_14 == VAR_6->die_sib) {
  VAR_6->die_siblings[VAR_14] = VAR_10;
  VAR_6->die_sib++;
  VAR_10 = ((void*)0);
  VAR_12 = 0;
 }
 VAR_15 = 0;

try_threads:
 FUNC_5(VAR_9, VAR_3, VAR_5,
    FUNC_8(), VAR_7);
 if (FUNC_0(VAR_9, VAR_2) == -1) {
  FUNC_5(VAR_9, VAR_3, VAR_4,
     FUNC_8(), VAR_7);
 }
 VAR_8 = FUNC_2(VAR_9, "r");
 if (!VAR_8)
  goto done;

 if (FUNC_4(&VAR_10, &VAR_12, VAR_8) <= 0)
  goto done;

 VAR_11 = FUNC_6(VAR_10, '\n');
 if (VAR_11)
  *VAR_11 = '\0';

 for (VAR_14 = 0; VAR_14 < VAR_6->thread_sib; VAR_14++) {
  if (!FUNC_7(VAR_10, VAR_6->thread_siblings[VAR_14]))
   break;
 }
 if (VAR_14 == VAR_6->thread_sib) {
  VAR_6->thread_siblings[VAR_14] = VAR_10;
  VAR_6->thread_sib++;
  VAR_10 = ((void*)0);
 }
 VAR_15 = 0;
done:
 if (VAR_8)
  FUNC_1(VAR_8);
 FUNC_3(VAR_10);
 return VAR_15;
}
