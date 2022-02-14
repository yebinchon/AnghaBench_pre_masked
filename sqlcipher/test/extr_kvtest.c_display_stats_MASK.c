
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ,int*,int*,int) ;
 int FUNC_3 (int ,int*,int*,int) ;
 int * VAR_10 ;

__attribute__((used)) static int FUNC_4(
  sqlite3 *VAR_11,
  int VAR_12
){
  int VAR_13;
  int VAR_14;
  FILE *VAR_15 = VAR_10;

  FUNC_1(VAR_15, "\n");

  VAR_14 = VAR_13 = -1;
  FUNC_3(VAR_6, &VAR_13, &VAR_14, VAR_12);
  FUNC_1(VAR_15,
          "Memory Used:                         %d (max %d) bytes\n",
          VAR_13, VAR_14);
  VAR_14 = VAR_13 = -1;
  FUNC_3(VAR_4, &VAR_13, &VAR_14, VAR_12);
  FUNC_1(VAR_15, "Number of Outstanding Allocations:   %d (max %d)\n",
          VAR_13, VAR_14);
  VAR_14 = VAR_13 = -1;
  FUNC_3(VAR_9, &VAR_13, &VAR_14, VAR_12);
  FUNC_1(VAR_15,
      "Number of Pcache Pages Used:         %d (max %d) pages\n",
      VAR_13, VAR_14);
  VAR_14 = VAR_13 = -1;
  FUNC_3(VAR_7, &VAR_13, &VAR_14, VAR_12);
  FUNC_1(VAR_15,
          "Number of Pcache Overflow Bytes:     %d (max %d) bytes\n",
          VAR_13, VAR_14);
  VAR_14 = VAR_13 = -1;
  FUNC_3(VAR_5, &VAR_13, &VAR_14, VAR_12);
  FUNC_1(VAR_15, "Largest Allocation:                  %d bytes\n",
          VAR_14);
  VAR_14 = VAR_13 = -1;
  FUNC_3(VAR_8, &VAR_13, &VAR_14, VAR_12);
  FUNC_1(VAR_15, "Largest Pcache Allocation:           %d bytes\n",
          VAR_14);

  VAR_14 = VAR_13 = -1;
  FUNC_2(VAR_11, VAR_2, &VAR_13, &VAR_14, VAR_12);
  FUNC_1(VAR_15, "Pager Heap Usage:                    %d bytes\n",
      VAR_13);
  VAR_14 = VAR_13 = -1;
  FUNC_2(VAR_11, VAR_0, &VAR_13, &VAR_14, 1);
  FUNC_1(VAR_15, "Page cache hits:                     %d\n", VAR_13);
  VAR_14 = VAR_13 = -1;
  FUNC_2(VAR_11, VAR_1, &VAR_13, &VAR_14, 1);
  FUNC_1(VAR_15, "Page cache misses:                   %d\n", VAR_13);
  VAR_14 = VAR_13 = -1;
  FUNC_2(VAR_11, VAR_3, &VAR_13, &VAR_14, 1);
  FUNC_1(VAR_15, "Page cache writes:                   %d\n", VAR_13);
  VAR_14 = VAR_13 = -1;


  FUNC_0(VAR_15);


  return 0;
}
