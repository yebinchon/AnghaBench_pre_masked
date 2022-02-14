
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,int *,scalar_t__) ;
 int FUNC_6 (char*,struct stat*) ;
 int FUNC_7 (int,int *,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_8(int VAR_1, char *VAR_2)
{
 ssize_t VAR_3;
 struct stat VAR_4;
 int VAR_5;
 uint8_t *VAR_6;
 uint8_t *VAR_7;

 if (FUNC_6(VAR_2, &VAR_4) == -1)
  FUNC_4("can't stat input file");

 VAR_5 = FUNC_3(VAR_2, VAR_0);
 if (VAR_5 < 0)
  FUNC_4("can't open input file");

 VAR_6 = FUNC_2(VAR_4.st_size);
 if (!VAR_6)
  FUNC_4("can't allocate tx buffer");

 VAR_7 = FUNC_2(VAR_4.st_size);
 if (!VAR_7)
  FUNC_4("can't allocate rx buffer");

 VAR_3 = FUNC_5(VAR_5, VAR_6, VAR_4.st_size);
 if (VAR_3 != VAR_4.st_size)
  FUNC_4("failed to read input file");

 FUNC_7(VAR_1, VAR_6, VAR_7, VAR_4.st_size);
 FUNC_1(VAR_7);
 FUNC_1(VAR_6);
 FUNC_0(VAR_5);
}
