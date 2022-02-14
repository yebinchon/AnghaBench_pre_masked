
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp ;
typedef int interval ;
typedef scalar_t__ date ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (char*,char**) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__* FUNC_5 () ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (scalar_t__,char**) ;
 int * FUNC_10 () ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 (char*,int *) ;
 char* FUNC_14 (int ) ;
 char** VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_15 (char*) ;
 scalar_t__* VAR_3 ;
 char* FUNC_16 (int) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (char*,char*,char*,char*) ;
 int VAR_4 ;
 int FUNC_19 (char*) ;
 char** VAR_5 ;

int
FUNC_20(void)
{
 date VAR_6 ;
 timestamp VAR_7 , VAR_8 ;
 char * VAR_9 ;
 interval * VAR_10 ;
 date * VAR_11 ;


 int VAR_12, VAR_13;
 char *VAR_14;

 FUNC_0(1, VAR_4);

 VAR_7 = FUNC_13("2003-12-04 17:34:29", ((void*)0));
 VAR_9 = FUNC_14(VAR_7);

 FUNC_17("timestamp: %s\n", VAR_9);
 FUNC_1(VAR_9);

 VAR_6 = FUNC_4(VAR_7);
 VAR_11 = FUNC_5();
 *VAR_11 = VAR_6;
 VAR_9 = FUNC_6(*VAR_11);
 FUNC_17("Date of timestamp: %s\n", VAR_9);
 FUNC_1(VAR_9);
 FUNC_2(VAR_11);

 for (VAR_12 = 0; VAR_1[VAR_12]; VAR_12++)
 {
  bool VAR_15 = 0;
  VAR_6 = FUNC_3(VAR_1[VAR_12], &VAR_14);
  if (VAR_6 == VAR_0) {
   VAR_15 = 1;
  }
  VAR_9 = FUNC_6(VAR_6);
  FUNC_17("Date[%d]: %s (%c - %c)\n",
     VAR_12, VAR_15 ? "-" : VAR_9,
     VAR_14 ? 'N' : 'Y',
     VAR_15 ? 'T' : 'F');
  FUNC_1(VAR_9);
  if (!VAR_15)
  {
   for (VAR_13 = 0; VAR_5[VAR_13]; VAR_13++)
   {
    int VAR_16 = FUNC_19(VAR_1[VAR_12])
      + 1
      + FUNC_19(VAR_5[VAR_13])
      + 1;
    char* VAR_17 = FUNC_16(VAR_16);
    FUNC_18(VAR_17, "%s %s", VAR_1[VAR_12], VAR_5[VAR_13]);
    VAR_7 = FUNC_13(VAR_17, ((void*)0));
    VAR_9 = FUNC_14(VAR_7);
    FUNC_17("TS[%d,%d]: %s\n",
           VAR_12, VAR_13, VAR_2 ? "-" : VAR_9);
    FUNC_1(VAR_9);
    FUNC_15(VAR_17);
   }
  }
 }

 VAR_7 = FUNC_13("2004-04-04 23:23:23", ((void*)0));

 for (VAR_12 = 0; VAR_3[VAR_12]; VAR_12++)
 {
  interval *VAR_18;
  VAR_10 = FUNC_9(VAR_3[VAR_12], &VAR_14);
  if (*VAR_14)
   FUNC_17("endptr set to %s\n", VAR_14);
  if (!VAR_10)
  {
   FUNC_17("Error parsing interval %d\n", VAR_12);
   continue;
  }
  VAR_13 = FUNC_12(&VAR_7, VAR_10, &VAR_8);
  if (VAR_13 < 0)
   continue;
  VAR_9 = FUNC_11(VAR_10);
  FUNC_17("interval[%d]: %s\n", VAR_12, VAR_9 ? VAR_9 : "-");
  FUNC_1(VAR_9);

  VAR_18 = FUNC_10();
  FUNC_7(VAR_10, VAR_18);
  VAR_9 = FUNC_11(VAR_10);
  FUNC_17("interval_copy[%d]: %s\n", VAR_12, VAR_9 ? VAR_9 : "-");
  FUNC_1(VAR_9);
  FUNC_8(VAR_18);
  FUNC_8(VAR_10);
 }

 return 0;
}
