
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char** VAR_8 ;
 int FUNC_0 (int,int,int *,int,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char const*,int,int,int,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (char const*,int ,int ,int ,int) ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (char*,...) ;

void FUNC_9(const char *VAR_9, bool VAR_10, bool VAR_11,
   bool VAR_12, bool VAR_13)
{
 FUNC_5(VAR_9, VAR_3,
       VAR_6, VAR_0, VAR_10);

 FUNC_5(VAR_9, VAR_5,
       VAR_7, VAR_1, VAR_10);
 FUNC_6(VAR_9, VAR_10);

 FUNC_2(VAR_9, VAR_10);

 FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12,
   VAR_13);

 if (VAR_9 != ((void*)0))
  return;

 if (!VAR_10) {
  FUNC_8("  %-50s [%s]\n",
         "rNNN",
         VAR_8[VAR_4]);
  FUNC_8("  %-50s [%s]\n",
         "cpu/t1=v1[,t2=v2,t3 ...]/modifier",
         VAR_8[VAR_4]);
  if (FUNC_1())
   FUNC_8("   (see 'man perf-list' on how to encode it)\n\n");

  FUNC_8("  %-50s [%s]\n",
         "mem:<addr>[/len][:access]",
   VAR_8[VAR_2]);
  if (FUNC_1())
   FUNC_8("\n");
 }

 FUNC_7(((void*)0), ((void*)0), VAR_10);

 FUNC_4(((void*)0), ((void*)0), VAR_10);

 FUNC_0(1, 1, ((void*)0), VAR_10, VAR_13);
}
