
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgque_data {int key; int msq_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msgque_data*) ;
 int FUNC_1 (struct msgque_data*) ;
 int VAR_3 ;
 int FUNC_2 (struct msgque_data*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int,int ,int *) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (struct msgque_data*) ;

int FUNC_12(int VAR_4, char **VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct msgque_data VAR_9;

 if (FUNC_4() != 0)
  return FUNC_7(
    "Please run the test as root - Exiting.\n");

 VAR_9.key = FUNC_3(VAR_5[0], 822155650);
 if (VAR_9.key == -1) {
  FUNC_10("Can't make key: %d\n", -VAR_3);
  return FUNC_5();
 }

 VAR_9.msq_id = FUNC_9(VAR_9.key, VAR_0 | VAR_1 | 0666);
 if (VAR_9.msq_id == -1) {
  VAR_8 = -VAR_3;
  FUNC_10("Can't create queue: %d\n", VAR_8);
  goto err_out;
 }

 VAR_8 = FUNC_2(&VAR_9);
 if (VAR_8) {
  FUNC_10("Failed to fill queue: %d\n", VAR_8);
  goto err_destroy;
 }

 VAR_8 = FUNC_1(&VAR_9);
 if (VAR_8) {
  FUNC_10("Failed to dump queue: %d\n", VAR_8);
  goto err_destroy;
 }

 VAR_8 = FUNC_0(&VAR_9);
 if (VAR_8) {
  FUNC_10("Failed to check and destroy queue: %d\n", VAR_8);
  goto err_out;
 }

 VAR_8 = FUNC_11(&VAR_9);
 if (VAR_8) {
  FUNC_10("Failed to restore queue: %d\n", VAR_8);
  goto err_destroy;
 }

 VAR_8 = FUNC_0(&VAR_9);
 if (VAR_8) {
  FUNC_10("Failed to test queue: %d\n", VAR_8);
  goto err_out;
 }
 return FUNC_6();

err_destroy:
 if (FUNC_8(VAR_9.msq_id, VAR_2, ((void*)0))) {
  FUNC_10("Failed to destroy queue: %d\n", -VAR_3);
  return FUNC_5();
 }
err_out:
 return FUNC_5();
}
