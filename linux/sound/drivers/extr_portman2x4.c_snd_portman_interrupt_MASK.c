
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {struct portman* private_data; } ;
struct portman {int* mode; int reg_lock; int * midi_input; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct portman*,int) ;
 unsigned char FUNC_1 (struct portman*,int) ;
 int FUNC_2 (struct portman*) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_2)
{
 unsigned char VAR_3 = 0;
 struct portman *VAR_4 = ((struct snd_card*)VAR_2)->private_data;

 FUNC_4(&VAR_4->reg_lock);


 while ((FUNC_2(VAR_4) & VAR_0) == VAR_0) {


  if (FUNC_0(VAR_4, 0)) {

   VAR_3 = FUNC_1(VAR_4, 0);

   if (VAR_4->mode[0] & VAR_1)
    FUNC_3(VAR_4->midi_input[0],
          &VAR_3, 1);

  }


  if (FUNC_0(VAR_4, 1)) {

   VAR_3 = FUNC_1(VAR_4, 1);

   if (VAR_4->mode[1] & VAR_1)
    FUNC_3(VAR_4->midi_input[1],
          &VAR_3, 1);
  }

 }

 FUNC_5(&VAR_4->reg_lock);
}
