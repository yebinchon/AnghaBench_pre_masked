
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nr_hugepages ;
typedef int initial_nr_hugepages ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (int,char*,int) ;
 int VAR_3 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char*,int) ;

int FUNC_10(unsigned long VAR_4, unsigned int VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 char VAR_8[10] = {0};
 char VAR_9[10] = {0};



 VAR_4 = VAR_4 * 0.8;

 VAR_6 = FUNC_4("/proc/sys/vm/nr_hugepages", VAR_1 | VAR_0);
 if (VAR_6 < 0) {
  FUNC_5("Failed to open /proc/sys/vm/nr_hugepages");
  return -1;
 }

 if (FUNC_7(VAR_6, VAR_8, sizeof(VAR_8)) <= 0) {
  FUNC_5("Failed to read from /proc/sys/vm/nr_hugepages");
  goto close_fd;
 }


 if (FUNC_9(VAR_6, "0", sizeof(char)) != sizeof(char)) {
  FUNC_5("Failed to write 0 to /proc/sys/vm/nr_hugepages\n");
  goto close_fd;
 }

 FUNC_3(VAR_6, 0, VAR_2);



 if (FUNC_9(VAR_6, "100000", (6*sizeof(char))) != (6*sizeof(char))) {
  FUNC_5("Failed to write 100000 to /proc/sys/vm/nr_hugepages\n");
  goto close_fd;
 }

 FUNC_3(VAR_6, 0, VAR_2);

 if (FUNC_7(VAR_6, VAR_9, sizeof(VAR_9)) <= 0) {
  FUNC_5("Failed to re-read from /proc/sys/vm/nr_hugepages\n");
  goto close_fd;
 }



 VAR_7 = VAR_4/(FUNC_0(VAR_9) * VAR_5);

 if (VAR_7 > 3) {
  FUNC_6("No of huge pages allocated = %d\n",
         (FUNC_0(VAR_9)));
  FUNC_2(VAR_3, "ERROR: Less that 1/%d of memory is available\n"
   "as huge pages\n", VAR_7);
  goto close_fd;
 }

 FUNC_6("No of huge pages allocated = %d\n",
        (FUNC_0(VAR_9)));

 FUNC_3(VAR_6, 0, VAR_2);

 if (FUNC_9(VAR_6, VAR_8, FUNC_8(VAR_8))
     != FUNC_8(VAR_8)) {
  FUNC_5("Failed to write value to /proc/sys/vm/nr_hugepages\n");
  goto close_fd;
 }

 FUNC_1(VAR_6);
 return 0;

 close_fd:
 FUNC_1(VAR_6);
 FUNC_6("Not OK. Compaction test failed.");
 return -1;
}
