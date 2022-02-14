
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s; int i; } ;
struct switch_val {scalar_t__ err; TYPE_1__ value; } ;
struct nl_msg {int dummy; } ;
struct genlmsghdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct genlmsghdr*,int ) ;
 int FUNC_1 (struct genlmsghdr*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__,int ,int ,int *) ;
 struct genlmsghdr* FUNC_5 (int ) ;
 int FUNC_6 (struct nl_msg*) ;
 scalar_t__ FUNC_7 (struct nl_msg*,scalar_t__,struct switch_val*) ;
 scalar_t__ FUNC_8 (struct nl_msg*,scalar_t__,struct switch_val*) ;
 int FUNC_9 (int ) ;
 scalar_t__* VAR_6 ;

__attribute__((used)) static int
FUNC_10(struct nl_msg *VAR_7, void *VAR_8)
{
 struct genlmsghdr *VAR_9 = FUNC_5(FUNC_6(VAR_7));
 struct switch_val *VAR_10 = VAR_8;

 if (!VAR_10)
  goto error;

 if (FUNC_4(VAR_6, VAR_1 - 1, FUNC_0(VAR_9, 0),
   FUNC_1(VAR_9, 0), ((void*)0)) < 0) {
  goto error;
 }

 if (VAR_6[VAR_2])
  VAR_10->value.i = FUNC_3(VAR_6[VAR_2]);
 else if (VAR_6[VAR_5])
  VAR_10->value.s = FUNC_9(FUNC_2(VAR_6[VAR_5]));
 else if (VAR_6[VAR_4])
  VAR_10->err = FUNC_8(VAR_7, VAR_6[VAR_4], VAR_10);
 else if (VAR_6[VAR_3])
  VAR_10->err = FUNC_7(VAR_7, VAR_6[VAR_3], VAR_10);

 VAR_10->err = 0;
 return 0;

error:
 return VAR_0;
}
