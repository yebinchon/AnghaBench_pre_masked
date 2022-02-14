
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*,char const*) ;
 int FUNC_1 (char*,char*,unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 unsigned char FUNC_5 (struct nlattr*) ;
 scalar_t__ FUNC_6 (struct nlattr**,int ,struct nlattr*,int *) ;
 int FUNC_7 (struct nlattr**,int ,char*,int) ;

__attribute__((used)) static int FUNC_8(struct nlattr *VAR_15, unsigned int VAR_16,
      const char *VAR_17)
{
 struct nlattr *VAR_18[VAR_3 + 1];
 unsigned char VAR_19;

 if (FUNC_6(VAR_18, VAR_3, VAR_15, ((void*)0)) < 0)
  return -1;

 if (!VAR_18[VAR_0])
  return 0;

 VAR_19 = FUNC_5(VAR_18[VAR_0]);
 if (VAR_19 == VAR_11)
  return 0;

 VAR_7;
 if (VAR_17)
  FUNC_0("devname", "%s", VAR_17);
 FUNC_1("ifindex", "(%d)", VAR_16);

 if (VAR_19 == VAR_10) {
  if (VAR_13) {
   FUNC_3(VAR_14, "multi_attachments");
   FUNC_4(VAR_14);
  }
  FUNC_7(VAR_18, VAR_5, "generic", 1);
  FUNC_7(VAR_18, VAR_1, "driver", 1);
  FUNC_7(VAR_18, VAR_2, "offload", 1);
  if (VAR_13)
   FUNC_2(VAR_14);
 } else if (VAR_19 == VAR_8) {
  FUNC_7(VAR_18, VAR_4, "driver", 0);
 } else if (VAR_19 == VAR_12) {
  FUNC_7(VAR_18, VAR_4, "generic", 0);
 } else if (VAR_19 == VAR_9) {
  FUNC_7(VAR_18, VAR_4, "offload", 0);
 }

 VAR_6;
 return 0;
}
