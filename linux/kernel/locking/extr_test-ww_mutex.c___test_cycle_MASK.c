
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_cycle {int a_mutex; scalar_t__ result; int work; int b_signal; int * a_signal; int * b_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct test_cycle*) ;
 struct test_cycle* FUNC_4 (unsigned int,int,int ) ;
 int FUNC_5 (char*,unsigned int,unsigned int,scalar_t__) ;
 int FUNC_6 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(unsigned int VAR_6)
{
 struct test_cycle *VAR_7;
 unsigned int VAR_8, VAR_9 = VAR_6 - 1;
 int VAR_10;

 VAR_7 = FUNC_4(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  struct test_cycle *VAR_11 = &VAR_7[VAR_8];

  FUNC_8(&VAR_11->a_mutex, &VAR_5);
  if (VAR_8 == VAR_9)
   VAR_11->b_mutex = &VAR_7[0].a_mutex;
  else
   VAR_11->b_mutex = &VAR_7[VAR_8 + 1].a_mutex;

  if (VAR_8 == 0)
   VAR_11->a_signal = &VAR_7[VAR_9].b_signal;
  else
   VAR_11->a_signal = &VAR_7[VAR_8 - 1].b_signal;
  FUNC_2(&VAR_11->b_signal);

  FUNC_0(&VAR_11->work, VAR_3);
  VAR_11->result = 0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  FUNC_6(VAR_4, &VAR_7[VAR_8].work);

 FUNC_1(VAR_4);

 VAR_10 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  struct test_cycle *VAR_12 = &VAR_7[VAR_8];

  if (!VAR_12->result)
   continue;

  FUNC_5("cyclic deadlock not resolved, ret[%d/%d] = %d\n",
         VAR_8, VAR_6, VAR_12->result);
  VAR_10 = -VAR_0;
  break;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  FUNC_7(&VAR_7[VAR_8].a_mutex);
 FUNC_3(VAR_7);
 return VAR_10;
}
