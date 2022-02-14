
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_attr {void* description; void* name; void* type; void* id; struct switch_attr* next; int atype; int dev; } ;
struct nl_msg {int dummy; } ;
struct genlmsghdr {int dummy; } ;
struct attrlist_arg {struct switch_attr** head; struct switch_attr* prev; int atype; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct genlmsghdr*,int ) ;
 int FUNC_1 (struct genlmsghdr*,int ) ;
 int FUNC_2 (scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__,int ,int ,int *) ;
 struct genlmsghdr* FUNC_5 (int ) ;
 int FUNC_6 (struct nl_msg*) ;
 void* FUNC_7 (int ) ;
 struct switch_attr* FUNC_8 (int) ;
 scalar_t__* VAR_6 ;

__attribute__((used)) static int
FUNC_9(struct nl_msg *VAR_7, void *VAR_8)
{
 struct genlmsghdr *VAR_9 = FUNC_5(FUNC_6(VAR_7));
 struct attrlist_arg *VAR_10 = VAR_8;
 struct switch_attr *VAR_11;

 if (FUNC_4(VAR_6, VAR_1 - 1, FUNC_0(VAR_9, 0),
   FUNC_1(VAR_9, 0), ((void*)0)) < 0)
  goto done;

 VAR_11 = FUNC_8(sizeof(struct switch_attr));
 if (!VAR_11)
  goto done;

 VAR_11->dev = VAR_10->dev;
 VAR_11->atype = VAR_10->atype;
 if (VAR_10->prev) {
  VAR_10->prev->next = VAR_11;
 } else {
  VAR_10->prev = *VAR_10->head;
 }
 *VAR_10->head = VAR_11;
 VAR_10->head = &VAR_11->next;

 if (VAR_6[VAR_3])
  VAR_11->id = FUNC_3(VAR_6[VAR_3]);
 if (VAR_6[VAR_5])
  VAR_11->type = FUNC_3(VAR_6[VAR_5]);
 if (VAR_6[VAR_4])
  VAR_11->name = FUNC_7(FUNC_2(VAR_6[VAR_4]));
 if (VAR_6[VAR_2])
  VAR_11->description = FUNC_7(FUNC_2(VAR_6[VAR_2]));

done:
 return VAR_0;
}
