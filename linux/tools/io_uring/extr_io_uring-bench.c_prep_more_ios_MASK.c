
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_sq_ring {unsigned int* tail; unsigned int* head; unsigned int* array; } ;
struct submitter {struct io_sq_ring sq_ring; } ;


 int FUNC_0 (struct submitter*,unsigned int) ;
 int FUNC_1 () ;
 unsigned int VAR_0 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct submitter *VAR_1, unsigned VAR_2)
{
 struct io_sq_ring *VAR_3 = &VAR_1->sq_ring;
 unsigned VAR_4, VAR_5, VAR_6, VAR_7 = 0;

 VAR_6 = VAR_5 = *VAR_3->tail;
 do {
  VAR_6++;
  FUNC_1();
  if (VAR_6 == *VAR_3->head)
   break;

  VAR_4 = VAR_5 & VAR_0;
  FUNC_0(VAR_1, VAR_4);
  VAR_3->array[VAR_4] = VAR_4;
  VAR_7++;
  VAR_5 = VAR_6;
 } while (VAR_7 < VAR_2);

 if (*VAR_3->tail != VAR_5) {

  FUNC_2();
  *VAR_3->tail = VAR_5;
  FUNC_2();
 }
 return VAR_7;
}
