
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shared_info {unsigned long amr; unsigned long iamr; unsigned long uamor; int core_time; int child_sync; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,unsigned long) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (char*,char*,unsigned long,int,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 char* VAR_3 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct shared_info *VAR_4)
{
 bool VAR_5 = 1;
 int VAR_6, VAR_7, VAR_8;
 int *VAR_9, VAR_10;


 VAR_10 = FUNC_8(&VAR_4->child_sync);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_1();
 FUNC_0(VAR_10);


 VAR_6 = FUNC_5(0, VAR_0);
 if (VAR_6 < 0) {
  VAR_6 = FUNC_5(0, 0);
  FUNC_0(VAR_6 < 0);

  VAR_5 = 0;
 }

 VAR_7 = FUNC_5(0, 0);
 FUNC_0(VAR_7 < 0);

 VAR_8 = FUNC_5(0, 0);
 FUNC_0(VAR_8 < 0);

 VAR_4->amr |= 3ul << FUNC_3(VAR_6) | 2ul << FUNC_3(VAR_7);

 if (VAR_5)
  VAR_4->iamr |= 1ul << FUNC_3(VAR_6);
 else
  VAR_4->iamr &= ~(1ul << FUNC_3(VAR_6));

 VAR_4->iamr &= ~(1ul << FUNC_3(VAR_7) | 1ul << FUNC_3(VAR_8));

 VAR_4->uamor |= 3ul << FUNC_3(VAR_6) | 3ul << FUNC_3(VAR_7);

 FUNC_4("%-30s AMR: %016lx pkey1: %d pkey2: %d pkey3: %d\n",
        VAR_3, VAR_4->amr, VAR_6, VAR_7, VAR_8);

 FUNC_2(VAR_1, VAR_4->amr);





 FUNC_6(VAR_8);

 VAR_4->core_time = FUNC_7(((void*)0));


 VAR_9 = 0;
 *VAR_9 = 1;


 FUNC_0(1);

 return VAR_2;
}
