
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
struct TYPE_4__ {scalar_t__ seq_keysym; scalar_t__ scancode; struct TYPE_4__* next; } ;
typedef TYPE_1__ key_translation ;
typedef int RDPCLIENT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__,TYPE_1__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;
 TYPE_1__ FUNC_6 (int *,scalar_t__,unsigned int,unsigned int) ;

void
FUNC_7(RDPCLIENT * VAR_4, uint32 VAR_5, unsigned int VAR_6, unsigned int VAR_7, uint32 VAR_8,
    BOOL VAR_9, uint8 VAR_10)
{
 key_translation VAR_11, *VAR_12;
 VAR_11 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7);

 if (VAR_11.seq_keysym == 0)
 {

  if (VAR_11.scancode == 0)
   return;

  if (VAR_9)
  {
   FUNC_5(VAR_4, VAR_11.scancode);
   FUNC_1(VAR_4, VAR_8, VAR_11);
   FUNC_3(VAR_4, VAR_8, VAR_1, VAR_11.scancode);
   FUNC_4(VAR_4, VAR_8, VAR_11.scancode);
  }
  else
  {
   FUNC_3(VAR_4, VAR_8, VAR_2, VAR_11.scancode);
  }
  return;
 }


 if (VAR_9)
 {
  VAR_12 = &VAR_11;
  do
  {
   FUNC_0(("Handling sequence element, keysym=0x%x\n",
       (unsigned int) VAR_12->seq_keysym));

   if (VAR_10++ > 32)
   {
    FUNC_2("Sequence nesting too deep\n");
    return;
   }

   FUNC_7(VAR_4, VAR_12->seq_keysym, VAR_6, VAR_7, VAR_8, VAR_3, VAR_10);
   FUNC_7(VAR_4, VAR_12->seq_keysym, VAR_6, VAR_7, VAR_8, VAR_0, VAR_10);
   VAR_12 = VAR_12->next;
  }
  while (VAR_12);
 }
}
