
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shared_info {unsigned long amr1; unsigned long amr2; unsigned long amr3; unsigned long expected_iamr; unsigned long expected_uamor; unsigned long new_iamr; unsigned long new_uamor; int child_sync; } ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (char*,char*,unsigned long,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct shared_info *VAR_5)
{
 unsigned long VAR_6;
 bool VAR_7 = 1;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11;


 VAR_11 = FUNC_8(&VAR_5->child_sync);
 if (VAR_11)
  return VAR_11;


 VAR_8 = FUNC_6(0, VAR_0);
 if (VAR_8 < 0) {
  VAR_8 = FUNC_6(0, 0);
  FUNC_0(VAR_8 < 0, &VAR_5->child_sync);

  VAR_7 = 0;
 }

 VAR_9 = FUNC_6(0, 0);
 FUNC_0(VAR_9 < 0, &VAR_5->child_sync);

 VAR_10 = FUNC_6(0, 0);
 FUNC_0(VAR_10 < 0, &VAR_5->child_sync);

 VAR_5->amr1 |= 3ul << FUNC_3(VAR_8);
 VAR_5->amr2 |= 3ul << FUNC_3(VAR_9);
 VAR_5->amr3 |= VAR_5->amr2 | 3ul << FUNC_3(VAR_10);

 if (VAR_7)
  VAR_5->expected_iamr |= 1ul << FUNC_3(VAR_8);
 else
  VAR_5->expected_iamr &= ~(1ul << FUNC_3(VAR_8));

 VAR_5->expected_iamr &= ~(1ul << FUNC_3(VAR_9) | 1ul << FUNC_3(VAR_10));

 VAR_5->expected_uamor |= 3ul << FUNC_3(VAR_8) |
    3ul << FUNC_3(VAR_9);
 VAR_5->new_iamr |= 1ul << FUNC_3(VAR_8) | 1ul << FUNC_3(VAR_9);
 VAR_5->new_uamor |= 3ul << FUNC_3(VAR_8);
 FUNC_7(VAR_10);

 FUNC_4("%-30s AMR: %016lx pkey1: %d pkey2: %d pkey3: %d\n",
        VAR_4, VAR_5->amr1, VAR_8, VAR_9, VAR_10);

 FUNC_2(VAR_1, VAR_5->amr1);


 VAR_11 = FUNC_5(&VAR_5->child_sync);
 FUNC_0(VAR_11, &VAR_5->child_sync);

 VAR_11 = FUNC_8(&VAR_5->child_sync);
 if (VAR_11)
  return VAR_11;

 VAR_6 = FUNC_1(VAR_1);

 FUNC_4("%-30s AMR: %016lx\n", VAR_3, VAR_6);

 FUNC_0(VAR_6 != VAR_5->amr2, &VAR_5->child_sync);




 VAR_11 = FUNC_5(&VAR_5->child_sync);
 FUNC_0(VAR_11, &VAR_5->child_sync);

 VAR_11 = FUNC_8(&VAR_5->child_sync);
 if (VAR_11)
  return VAR_11;

 VAR_6 = FUNC_1(VAR_1);

 FUNC_4("%-30s AMR: %016lx\n", VAR_3, VAR_6);

 FUNC_0(VAR_6 != VAR_5->amr2, &VAR_5->child_sync);





 VAR_11 = FUNC_5(&VAR_5->child_sync);
 FUNC_0(VAR_11, &VAR_5->child_sync);

 VAR_11 = FUNC_8(&VAR_5->child_sync);
 if (VAR_11)
  return VAR_11;

 VAR_6 = FUNC_1(VAR_1);

 FUNC_4("%-30s AMR: %016lx\n", VAR_3, VAR_6);

 FUNC_0(VAR_6 != VAR_5->amr2, &VAR_5->child_sync);



 VAR_11 = FUNC_5(&VAR_5->child_sync);
 FUNC_0(VAR_11, &VAR_5->child_sync);

 return VAR_2;
}
