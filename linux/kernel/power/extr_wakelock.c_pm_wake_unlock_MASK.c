
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakelock {int ws; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct wakelock*) ;
 int FUNC_1 (struct wakelock*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (char const*) ;
 struct wakelock* FUNC_7 (char const*,size_t,int) ;
 int FUNC_8 () ;
 int VAR_3 ;
 int FUNC_9 (struct wakelock*) ;

int FUNC_10(const char *VAR_4)
{
 struct wakelock *VAR_5;
 size_t VAR_6;
 int VAR_7 = 0;

 if (!FUNC_3(VAR_0))
  return -VAR_2;

 VAR_6 = FUNC_6(VAR_4);
 if (!VAR_6)
  return -VAR_1;

 if (VAR_4[VAR_6-1] == '\n')
  VAR_6--;

 if (!VAR_6)
  return -VAR_1;

 FUNC_4(&VAR_3);

 VAR_5 = FUNC_7(VAR_4, VAR_6, 0);
 if (FUNC_0(VAR_5)) {
  VAR_7 = FUNC_1(VAR_5);
  goto out;
 }
 FUNC_2(VAR_5->ws);

 FUNC_9(VAR_5);
 FUNC_8();

 out:
 FUNC_5(&VAR_3);
 return VAR_7;
}
