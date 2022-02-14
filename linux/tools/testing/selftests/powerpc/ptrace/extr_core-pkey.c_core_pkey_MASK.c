
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
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct shared_info*,scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char**,int*) ;
 struct shared_info* FUNC_8 (int,int *,int ) ;
 int FUNC_9 (int,int ,int *) ;
 int FUNC_10 (struct shared_info*) ;
 int FUNC_11 (int ,int,int) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int FUNC_13(void)
{
 char *VAR_4;
 bool VAR_5;
 struct shared_info *VAR_6;
 int VAR_7;
 int VAR_8;
 pid_t VAR_9;

 VAR_8 = FUNC_7(&VAR_4, &VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_11(VAR_1, sizeof(*VAR_6), 0777 | VAR_0);
 VAR_6 = FUNC_8(VAR_7, ((void*)0), 0);

 VAR_8 = FUNC_4(&VAR_6->child_sync);
 if (VAR_8)
  return VAR_8;

 VAR_9 = FUNC_2();
 if (VAR_9 < 0) {
  FUNC_6("fork() failed");
  VAR_8 = VAR_3;
 } else if (VAR_9 == 0)
  VAR_8 = FUNC_0(VAR_6);
 else
  VAR_8 = FUNC_5(VAR_6, VAR_9);

 FUNC_10(VAR_6);

 if (VAR_9) {
  FUNC_1(&VAR_6->child_sync);
  FUNC_9(VAR_7, VAR_2, ((void*)0));

  if (VAR_5)
   FUNC_12(VAR_4);
 }

 FUNC_3(VAR_4);

 return VAR_8;
}
