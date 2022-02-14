
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int entries_bytes; int tail_page; } ;
struct ring_buffer_event {int dummy; } ;
struct buffer_page {void* page; int write; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct buffer_page* FUNC_0 (int ) ;
 unsigned long FUNC_1 (int *,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (unsigned long,int *) ;
 unsigned long FUNC_4 (struct ring_buffer_event*) ;
 unsigned long FUNC_5 (struct ring_buffer_event*) ;
 unsigned long FUNC_6 (struct ring_buffer_event*) ;
 unsigned long FUNC_7 (struct buffer_page*) ;

__attribute__((used)) static inline int
FUNC_8(struct ring_buffer_per_cpu *VAR_2,
    struct ring_buffer_event *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 struct buffer_page *VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;

 VAR_4 = FUNC_4(VAR_3);
 VAR_5 = VAR_4 + FUNC_6(VAR_3);
 VAR_8 = (unsigned long)VAR_3;
 VAR_8 &= VAR_0;

 VAR_6 = FUNC_0(VAR_2->tail_page);

 if (VAR_6->page == (void *)VAR_8 && FUNC_7(VAR_6) == VAR_5) {
  unsigned long VAR_9 =
   FUNC_2(&VAR_6->write) & ~VAR_1;
  unsigned long VAR_10 = FUNC_5(VAR_3);






  VAR_5 += VAR_9;
  VAR_4 += VAR_9;
  VAR_7 = FUNC_1(&VAR_6->write, VAR_5, VAR_4);
  if (VAR_7 == VAR_5) {

   FUNC_3(VAR_10, &VAR_2->entries_bytes);
   return 1;
  }
 }


 return 0;
}
