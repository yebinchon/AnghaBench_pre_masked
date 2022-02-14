
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_frequencies {struct cpufreq_frequencies* next; int frequency; struct cpufreq_frequencies* first; } ;
typedef int linebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpufreq_frequencies*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 int FUNC_4 (char*,char*,int *) ;
 unsigned int FUNC_5 (unsigned int,char*,char*,int) ;

struct cpufreq_frequencies
*FUNC_6(const char *VAR_2, unsigned int VAR_3)
{
 struct cpufreq_frequencies *VAR_4 = ((void*)0);
 struct cpufreq_frequencies *VAR_5 = ((void*)0);
 char VAR_6[VAR_1];
 char VAR_7[VAR_0];
 char VAR_8[VAR_0];
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11;

 FUNC_3(VAR_8, VAR_0, "scaling_%s_frequencies", VAR_2);

 VAR_11 = FUNC_5(VAR_3, VAR_8,
    VAR_7, sizeof(VAR_7));
 if (VAR_11 == 0)
  return ((void*)0);

 VAR_9 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  if (VAR_7[VAR_10] == ' ' || VAR_7[VAR_10] == '\n') {
   if (VAR_10 - VAR_9 < 2)
    continue;
   if (VAR_10 - VAR_9 >= VAR_1)
    goto error_out;
   if (VAR_5) {
    VAR_5->next = FUNC_1(sizeof(*VAR_5));
    if (!VAR_5->next)
     goto error_out;
    VAR_5 = VAR_5->next;
   } else {
    VAR_4 = FUNC_1(sizeof(*VAR_4));
    if (!VAR_4)
     goto error_out;
    VAR_5 = VAR_4;
   }
   VAR_5->first = VAR_4;
   VAR_5->next = ((void*)0);

   FUNC_2(VAR_6, VAR_7 + VAR_9, VAR_10 - VAR_9);
   VAR_6[VAR_10 - VAR_9] = '\0';
   if (FUNC_4(VAR_6, "%lu", &VAR_5->frequency) != 1)
    goto error_out;

   VAR_9 = VAR_10 + 1;
  }
 }

 return VAR_4;

 error_out:
 while (VAR_4) {
  VAR_5 = VAR_4->next;
  FUNC_0(VAR_4);
  VAR_4 = VAR_5;
 }
 return ((void*)0);
}
