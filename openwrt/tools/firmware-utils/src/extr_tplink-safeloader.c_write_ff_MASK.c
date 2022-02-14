
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (char*,size_t,int,int *) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_1, size_t VAR_2)
{
 char VAR_3[4096];
 size_t VAR_4;

 FUNC_2(VAR_3, 0xff, sizeof(VAR_3));

 for (VAR_4 = 0; VAR_4 + sizeof(VAR_3) < VAR_2 ; VAR_4 += sizeof(VAR_3)) {
  if (FUNC_1(VAR_3, sizeof(VAR_3), 1, VAR_1) != 1)
   FUNC_0(1, VAR_0, "Can not write 0xff to output_file");
 }


 if (VAR_4 < VAR_2) {
  VAR_4 = VAR_2 - VAR_4;
  if (FUNC_1(VAR_3, VAR_4, 1, VAR_1) != 1)
   FUNC_0(1, VAR_0, "Can not write partition to output_file");
 }
}
