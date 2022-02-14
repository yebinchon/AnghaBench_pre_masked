
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct kprobe_blacklist_node {int symbol; int end; int start; int list; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 char* FUNC_1 () ;
 int FUNC_2 (char*,int,char*,char const*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (struct list_head*) ;
 int FUNC_7 (int *,struct list_head*) ;
 int FUNC_8 (char*,int ,int ,int ) ;
 int FUNC_9 (char*,char*,int *,int *) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 struct kprobe_blacklist_node* FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct list_head *VAR_5)
{
 struct kprobe_blacklist_node *VAR_6;
 const char *VAR_7 = FUNC_1();
 char VAR_8[VAR_3], *VAR_9;
 FILE *VAR_10;
 int VAR_11;

 if (VAR_7 == ((void*)0))
  return -VAR_2;

 VAR_11 = FUNC_2(VAR_8, VAR_3, "%s/kprobes/blacklist", VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10 = FUNC_5(VAR_8, "r");
 if (!VAR_10)
  return -VAR_4;

 VAR_11 = 0;
 while (FUNC_4(VAR_8, VAR_3, VAR_10)) {
  VAR_6 = FUNC_13(sizeof(*VAR_6));
  if (!VAR_6) {
   VAR_11 = -VAR_1;
   break;
  }
  FUNC_0(&VAR_6->list);
  FUNC_7(&VAR_6->list, VAR_5);
  if (FUNC_9(VAR_8, "0x%lx-0x%lx", &VAR_6->start, &VAR_6->end) != 2) {
   VAR_11 = -VAR_0;
   break;
  }
  VAR_9 = FUNC_10(VAR_8, '\t');
  if (VAR_9) {
   VAR_9++;
   if (VAR_9[FUNC_12(VAR_9) - 1] == '\n')
    VAR_9[FUNC_12(VAR_9) - 1] = '\0';
  } else
   VAR_9 = (char *)"unknown";
  VAR_6->symbol = FUNC_11(VAR_9);
  if (!VAR_6->symbol) {
   VAR_11 = -VAR_1;
   break;
  }
  FUNC_8("Blacklist: 0x%lx-0x%lx, %s\n",
     VAR_6->start, VAR_6->end, VAR_6->symbol);
  VAR_11++;
 }
 if (VAR_11 < 0)
  FUNC_6(VAR_5);
 FUNC_3(VAR_10);

 return VAR_11;
}
