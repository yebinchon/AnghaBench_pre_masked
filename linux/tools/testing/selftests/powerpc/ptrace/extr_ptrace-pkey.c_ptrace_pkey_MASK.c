
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shared_info {int child_sync; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct shared_info*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct shared_info*,scalar_t__) ;
 int FUNC_5 (char*) ;
 struct shared_info* FUNC_6 (int,int *,int ) ;
 int FUNC_7 (int,int ,int *) ;
 int FUNC_8 (struct shared_info*) ;
 int FUNC_9 (int ,int,int) ;

__attribute__((used)) static int FUNC_10(void)
{
 struct shared_info *VAR_4;
 int VAR_5;
 int VAR_6;
 pid_t VAR_7;

 VAR_5 = FUNC_9(VAR_1, sizeof(*VAR_4), 0777 | VAR_0);
 VAR_4 = FUNC_6(VAR_5, ((void*)0), 0);

 VAR_6 = FUNC_3(&VAR_4->child_sync);
 if (VAR_6)
  return VAR_6;

 VAR_7 = FUNC_2();
 if (VAR_7 < 0) {
  FUNC_5("fork() failed");
  VAR_6 = VAR_3;
 } else if (VAR_7 == 0)
  VAR_6 = FUNC_0(VAR_4);
 else
  VAR_6 = FUNC_4(VAR_4, VAR_7);

 FUNC_8(VAR_4);

 if (VAR_7) {
  FUNC_1(&VAR_4->child_sync);
  FUNC_7(VAR_5, VAR_2, ((void*)0));
 }

 return VAR_6;
}
