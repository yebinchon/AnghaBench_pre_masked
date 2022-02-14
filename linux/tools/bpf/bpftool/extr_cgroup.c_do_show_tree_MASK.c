
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 () ;
 int FUNC_1 () ;


 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,int,int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,char*,char*,char*,char*,char*) ;
 int VAR_6 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(int VAR_7, char **VAR_8)
{
 char *VAR_9, *VAR_10 = ((void*)0);
 int VAR_11;

 VAR_6 = 0;

 if (!VAR_7) {
  VAR_10 = FUNC_2();
  if (!VAR_10) {
   FUNC_8("cgroup v2 isn't mounted");
   return -1;
  }
  VAR_9 = VAR_10;
 } else {
  VAR_9 = FUNC_0();

  while (VAR_7) {
   if (FUNC_4(*VAR_8, "effective")) {
    if (VAR_6 & VAR_0) {
     FUNC_8("duplicated argument: %s", *VAR_8);
     return -1;
    }
    VAR_6 |= VAR_0;
    FUNC_1();
   } else {
    FUNC_8("expected no more arguments, 'effective', got: '%s'?",
          *VAR_8);
    return -1;
   }
  }
 }

 if (VAR_4)
  FUNC_6(VAR_5);
 else
  FUNC_9("%s\n"
         "%-8s %-15s %-15s %-15s\n",
         "CgroupPath",
         "ID", "AttachType", "AttachFlags", "Name");

 switch (FUNC_7(VAR_9, VAR_2, 1024, VAR_1)) {
 case 129:
  FUNC_8("can't iterate over %s: %s", VAR_9,
        FUNC_10(VAR_3));
  VAR_11 = -1;
  break;
 case 128:
  VAR_11 = -1;
  break;
 default:
  VAR_11 = 0;
 }

 if (VAR_4)
  FUNC_5(VAR_5);

 FUNC_3(VAR_10);

 return VAR_11;
}
