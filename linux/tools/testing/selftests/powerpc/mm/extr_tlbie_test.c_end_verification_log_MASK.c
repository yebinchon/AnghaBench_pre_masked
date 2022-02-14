
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int ** VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (char*,unsigned int,unsigned int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,unsigned int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static inline void FUNC_6(unsigned int VAR_4, unsigned VAR_5)
{
 FILE *VAR_6 = VAR_1[VAR_4];
 char VAR_7[30];
 char VAR_8[VAR_0 + 30];
 char VAR_9[] = "/";

 FUNC_0(VAR_6);

 if (VAR_5 == 0) {
  FUNC_2(VAR_8);
  return;
 }

 FUNC_3(VAR_7, VAR_3, VAR_4);
 FUNC_5(VAR_8, VAR_2);
 FUNC_4(VAR_8, VAR_9);
 FUNC_4(VAR_8, VAR_7);

 FUNC_1("Thread %02d chunk has %d corrupted words. For details check %s\n",
  VAR_4, VAR_5, VAR_8);
}
