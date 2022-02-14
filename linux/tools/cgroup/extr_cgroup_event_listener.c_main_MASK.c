
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int result ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,int *,int) ;
 int FUNC_10 (char*,int,char*,...) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (int,char*,scalar_t__) ;

int FUNC_13(int VAR_9, char **VAR_10)
{
 int VAR_11 = -1;
 int VAR_12 = -1;
 int VAR_13 = -1;
 char VAR_14[VAR_5];
 char VAR_15[VAR_2];
 int VAR_16;

 if (VAR_9 != 3)
  FUNC_4(1, "%s", VAR_6);

 VAR_12 = FUNC_6(VAR_10[1], VAR_3);
 if (VAR_12 == -1)
  FUNC_3(1, "Cannot open %s", VAR_10[1]);

 VAR_16 = FUNC_10(VAR_14, VAR_5, "%s/cgroup.event_control",
   FUNC_2(VAR_10[1]));
 if (VAR_16 >= VAR_5)
  FUNC_4(1, "Path to cgroup.event_control is too long");

 VAR_13 = FUNC_6(VAR_14, VAR_4);
 if (VAR_13 == -1)
  FUNC_3(1, "Cannot open %s", VAR_14);

 VAR_11 = FUNC_5(0, 0);
 if (VAR_11 == -1)
  FUNC_3(1, "eventfd() failed");

 VAR_16 = FUNC_10(VAR_15, VAR_2, "%d %d %s", VAR_11, VAR_12, VAR_10[2]);
 if (VAR_16 >= VAR_2)
  FUNC_4(1, "Arguments string is too long");

 VAR_16 = FUNC_12(VAR_13, VAR_15, FUNC_11(VAR_15) + 1);
 if (VAR_16 == -1)
  FUNC_3(1, "Cannot write to cgroup.event_control");

 while (1) {
  uint64_t VAR_17;

  VAR_16 = FUNC_9(VAR_11, &VAR_17, sizeof(VAR_17));
  if (VAR_16 == -1) {
   if (VAR_8 == VAR_0)
    continue;
   FUNC_3(1, "Cannot read from eventfd");
  }
  FUNC_1(VAR_16 == sizeof(VAR_17));

  VAR_16 = FUNC_0(VAR_14, VAR_7);
  if ((VAR_16 == -1) && (VAR_8 == VAR_1)) {
   FUNC_8("The cgroup seems to have removed.");
   break;
  }

  if (VAR_16 == -1)
   FUNC_3(1, "cgroup.event_control is not accessible any more");

  FUNC_7("%s %s: crossed\n", VAR_10[1], VAR_10[2]);
 }

 return 0;
}
