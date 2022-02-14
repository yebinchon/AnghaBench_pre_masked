
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shared_info {unsigned long amr1; unsigned long amr2; unsigned long amr3; unsigned long expected_iamr; unsigned long new_iamr; unsigned long expected_uamor; unsigned long new_uamor; int child_sync; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ,unsigned long*,int) ;
 char* VAR_3 ;
 int FUNC_7 (int,int ,unsigned long*,int) ;
 char* VAR_4 ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct shared_info *VAR_5, pid_t VAR_6)
{
 unsigned long VAR_7[3];
 int VAR_8, VAR_9;





 VAR_8 = FUNC_6(VAR_6, VAR_0, VAR_7, 3);
 FUNC_1(VAR_8, &VAR_5->child_sync);
 FUNC_0(VAR_8, &VAR_5->child_sync);

 VAR_5->amr1 = VAR_5->amr2 = VAR_5->amr3 = VAR_7[0];
 VAR_5->expected_iamr = VAR_5->new_iamr = VAR_7[1];
 VAR_5->expected_uamor = VAR_5->new_uamor = VAR_7[2];


 VAR_8 = FUNC_5(&VAR_5->child_sync);
 FUNC_0(VAR_8, &VAR_5->child_sync);

 VAR_8 = FUNC_9(&VAR_5->child_sync);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_6(VAR_6, VAR_0, VAR_7, 3);
 FUNC_0(VAR_8, &VAR_5->child_sync);

 FUNC_4("%-30s AMR: %016lx IAMR: %016lx UAMOR: %016lx\n",
        VAR_3, VAR_7[0], VAR_7[1], VAR_7[2]);

 FUNC_0(VAR_7[0] != VAR_5->amr1, &VAR_5->child_sync);
 FUNC_0(VAR_7[1] != VAR_5->expected_iamr, &VAR_5->child_sync);
 FUNC_0(VAR_7[2] != VAR_5->expected_uamor, &VAR_5->child_sync);


 VAR_8 = FUNC_7(VAR_6, VAR_0, &VAR_5->amr2, 1);
 FUNC_0(VAR_8, &VAR_5->child_sync);

 FUNC_4("%-30s AMR: %016lx\n", VAR_4, VAR_5->amr2);


 VAR_8 = FUNC_5(&VAR_5->child_sync);
 FUNC_0(VAR_8, &VAR_5->child_sync);

 VAR_8 = FUNC_9(&VAR_5->child_sync);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_7(VAR_6, VAR_0, &VAR_5->amr3, 1);
 FUNC_0(VAR_8, &VAR_5->child_sync);

 FUNC_4("%-30s AMR: %016lx\n", VAR_4, VAR_5->amr3);


 VAR_8 = FUNC_5(&VAR_5->child_sync);
 FUNC_0(VAR_8, &VAR_5->child_sync);

 VAR_8 = FUNC_9(&VAR_5->child_sync);
 if (VAR_8)
  return VAR_8;


 VAR_7[0] = VAR_5->amr1;
 VAR_7[1] = VAR_5->new_iamr;
 VAR_8 = FUNC_7(VAR_6, VAR_0, VAR_7, 2);
 FUNC_0(!VAR_8, &VAR_5->child_sync);

 FUNC_4("%-30s AMR: %016lx IAMR: %016lx\n",
        VAR_4, VAR_7[0], VAR_7[1]);


 VAR_7[2] = VAR_5->new_uamor;
 VAR_8 = FUNC_7(VAR_6, VAR_0, VAR_7, 3);
 FUNC_0(!VAR_8, &VAR_5->child_sync);

 FUNC_4("%-30s AMR: %016lx IAMR: %016lx UAMOR: %016lx\n",
        VAR_4, VAR_7[0], VAR_7[1], VAR_7[2]);


 VAR_8 = FUNC_6(VAR_6, VAR_0, VAR_7, 3);
 FUNC_0(VAR_8, &VAR_5->child_sync);

 FUNC_4("%-30s AMR: %016lx IAMR: %016lx UAMOR: %016lx\n",
        VAR_3, VAR_7[0], VAR_7[1], VAR_7[2]);

 FUNC_0(VAR_7[0] != VAR_5->amr2, &VAR_5->child_sync);
 FUNC_0(VAR_7[1] != VAR_5->expected_iamr, &VAR_5->child_sync);
 FUNC_0(VAR_7[2] != VAR_5->expected_uamor, &VAR_5->child_sync);


 VAR_8 = FUNC_5(&VAR_5->child_sync);
 FUNC_0(VAR_8, &VAR_5->child_sync);

 VAR_8 = FUNC_8(&VAR_9);
 if (VAR_8 != VAR_6) {
  FUNC_4("Child's exit status not captured\n");
  VAR_8 = VAR_2;
 } else if (!FUNC_3(VAR_9)) {
  FUNC_4("Child exited abnormally\n");
  VAR_8 = VAR_1;
 } else
  VAR_8 = FUNC_2(VAR_9) ? VAR_1 : VAR_2;

 return VAR_8;
}
