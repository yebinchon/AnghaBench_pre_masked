
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_struct {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct event_struct*) ;
 int FUNC_2 (int *,int *) ;
 struct event_struct* FUNC_3 (int) ;
 int FUNC_4 (struct event_struct*,int ,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_4, char *VAR_5, char *VAR_6,
    char *VAR_7, char *VAR_8, char *VAR_9,
    char *VAR_10, char *VAR_11, char *VAR_12,
    char *VAR_13, char *VAR_14)
{
 struct event_struct *VAR_15;

 VAR_15 = FUNC_3(sizeof(*VAR_15));
 if (!VAR_15)
  return -VAR_1;
 FUNC_4(VAR_15, 0, sizeof(*VAR_15));
 FUNC_0(VAR_0);
 FUNC_2(&VAR_15->list, &VAR_3);
 return 0;
out_free:
 FUNC_0(VAR_2);
 FUNC_1(VAR_15);
 return -VAR_1;
}
