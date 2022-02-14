
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_event {int dummy; } ;
typedef enum tep_event_sort_type { ____Placeholder_tep_event_sort_type } tep_event_sort_type ;





 int FUNC_0 (void const*,void const*) ;
 int FUNC_1 (void const*,void const*) ;
 int FUNC_2 (void const*,void const*) ;
 int FUNC_3 (struct tep_event**,int,int,int (*) (void const*,void const*)) ;

__attribute__((used)) static void FUNC_4(struct tep_event **VAR_0, int VAR_1,
        enum tep_event_sort_type VAR_2)
{
 int (*VAR_3)(const void *VAR_4, const void *VAR_5);

 switch (VAR_2) {
 case 130:
  VAR_3 = FUNC_0;
  break;
 case 129:
  VAR_3 = FUNC_1;
  break;
 case 128:
  VAR_3 = FUNC_2;
  break;
 default:
  VAR_3 = ((void*)0);
 }

 if (VAR_3)
  FUNC_3(VAR_0, VAR_1, sizeof(*VAR_0), VAR_3);
}
