
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct vtunnel_info {scalar_t__ flags; scalar_t__ vid; int tunid; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct vtunnel_info*,int ,int) ;
 scalar_t__ FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int VAR_7 ;

int FUNC_4(struct nlattr *VAR_8,
         struct vtunnel_info *VAR_9)
{
 struct nlattr *VAR_10[VAR_4 + 1];
 u32 VAR_11;
 u16 VAR_12, VAR_13 = 0;
 int VAR_14;

 FUNC_0(VAR_9, 0, sizeof(*VAR_9));

 VAR_14 = FUNC_3(VAR_10, VAR_4,
       VAR_8, VAR_7, ((void*)0));
 if (VAR_14 < 0)
  return VAR_14;

 if (!VAR_10[VAR_3] ||
     !VAR_10[VAR_5])
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_10[VAR_3]);
 VAR_12 = FUNC_1(VAR_10[VAR_5]);
 if (VAR_12 >= VAR_6)
  return -VAR_1;

 if (VAR_10[VAR_2])
  VAR_13 = FUNC_1(VAR_10[VAR_2]);

 VAR_9->tunid = VAR_11;
 VAR_9->vid = VAR_12;
 VAR_9->flags = VAR_13;

 return 0;
}
