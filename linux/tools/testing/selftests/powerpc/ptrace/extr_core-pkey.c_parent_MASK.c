
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shared_info {unsigned long amr; unsigned long iamr; unsigned long uamor; int child_sync; } ;
typedef int pid_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct shared_info*,void*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int) ;
 void* FUNC_8 (int *,int,int ,int ,int,int ) ;
 int FUNC_9 (void*,int) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int,int ,unsigned long*,int) ;
 int FUNC_15 (char*,int,char*,int) ;
 int FUNC_16 (char*,struct shared_info*,int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int*) ;

__attribute__((used)) static int FUNC_19(struct shared_info *VAR_6, pid_t VAR_7)
{
 char *VAR_8, *VAR_9[3];
 int VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14[3];
 off_t VAR_15;
 void *VAR_16;





 VAR_12 = FUNC_14(VAR_7, VAR_1, VAR_14, 3);
 FUNC_1(VAR_12, &VAR_6->child_sync);
 FUNC_0(VAR_12, &VAR_6->child_sync);

 VAR_6->amr = VAR_14[0];
 VAR_6->iamr = VAR_14[1];
 VAR_6->uamor = VAR_14[2];


 VAR_12 = FUNC_13(&VAR_6->child_sync);
 FUNC_0(VAR_12, &VAR_6->child_sync);

 VAR_12 = FUNC_18(&VAR_13);
 if (VAR_12 != VAR_7) {
  FUNC_12("Child's exit status not captured\n");
  return VAR_5;
 } else if (!FUNC_3(VAR_13) || !FUNC_2(VAR_13)) {
  FUNC_12("Child didn't dump core\n");
  return VAR_5;
 }



 VAR_9[0] = VAR_8 = FUNC_7(VAR_3);
 if (!VAR_8) {
  FUNC_11("Error allocating memory");
  return VAR_5;
 }

 VAR_12 = FUNC_15(VAR_9[0], VAR_3, "core-pkey.%d", VAR_7);
 if (VAR_12 < 0 || VAR_12 >= VAR_3) {
  VAR_12 = VAR_5;
  goto out;
 }

 VAR_9[1] = VAR_9[0] + VAR_12 + 1;
 VAR_12 = FUNC_15(VAR_9[1], VAR_3 - VAR_12 - 1, "core.%d", VAR_7);
 if (VAR_12 < 0 || VAR_12 >= VAR_3 - VAR_12 - 1) {
  VAR_12 = VAR_5;
  goto out;
 }
 VAR_9[2] = "core";

 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  VAR_15 = FUNC_16(VAR_9[VAR_11], VAR_6, VAR_7);
  if (VAR_15 != VAR_5)
   break;
 }

 if (VAR_11 == 3) {
  FUNC_12("Couldn't find core file\n");
  VAR_12 = VAR_5;
  goto out;
 }

 VAR_10 = FUNC_10(VAR_9[VAR_11], VAR_2);
 if (VAR_10 == -1) {
  FUNC_11("Error opening core file");
  VAR_12 = VAR_5;
  goto out;
 }

 VAR_16 = FUNC_8(((void*)0), VAR_15, VAR_4, VAR_0, VAR_10, 0);
 if (VAR_16 == (void *) -1) {
  FUNC_11("Error mmaping core file");
  VAR_12 = VAR_5;
  goto out;
 }

 VAR_12 = FUNC_4(VAR_6, VAR_16, VAR_15);

 FUNC_9(VAR_16, VAR_15);
 FUNC_5(VAR_10);
 FUNC_17(VAR_9[VAR_11]);

 out:
 FUNC_6(VAR_8);

 return VAR_12;
}
