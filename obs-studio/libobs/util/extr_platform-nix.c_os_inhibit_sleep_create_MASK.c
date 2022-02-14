
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_inhibit_info {int reason; int attr; int stop_event; int dbus; } ;
typedef int sigset_t ;
typedef struct os_inhibit_info os_inhibit_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 struct os_inhibit_info* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;

os_inhibit_t *FUNC_10(const char *VAR_4)
{
 struct os_inhibit_info *VAR_5 = FUNC_1(sizeof(*VAR_5));
 sigset_t VAR_6;





 FUNC_3(&VAR_5->stop_event, VAR_0);
 FUNC_4(&VAR_5->attr);

 FUNC_9(&VAR_6);
 FUNC_7(&VAR_5->attr, &VAR_6);
 FUNC_8(&VAR_6, VAR_3);
 FUNC_6(&VAR_5->attr, &VAR_6);
 FUNC_5(&VAR_5->attr, VAR_1 |
            VAR_2);

 VAR_5->reason = FUNC_0(VAR_4);
 return VAR_5;
}
