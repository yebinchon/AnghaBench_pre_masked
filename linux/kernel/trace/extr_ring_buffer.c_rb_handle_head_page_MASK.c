
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int tail_page; int entries_bytes; int overrun; } ;
struct buffer_page {int dummy; } ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (struct ring_buffer_per_cpu*,int) ;
 struct buffer_page* FUNC_1 (int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct ring_buffer_per_cpu*,struct buffer_page*,struct buffer_page*,int const) ;
 int FUNC_5 (struct ring_buffer_per_cpu*,struct buffer_page*,struct buffer_page*,int const) ;
 int FUNC_6 (struct ring_buffer_per_cpu*,struct buffer_page*,struct buffer_page*,int) ;
 int FUNC_7 (struct ring_buffer_per_cpu*,struct buffer_page**) ;
 int FUNC_8 (struct buffer_page*) ;

__attribute__((used)) static int
FUNC_9(struct ring_buffer_per_cpu *VAR_1,
      struct buffer_page *VAR_2,
      struct buffer_page *VAR_3)
{
 struct buffer_page *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_8(VAR_3);






 VAR_6 = FUNC_6(VAR_1, VAR_3, VAR_2,
           131);
 switch (VAR_6) {
 case 131:





  FUNC_2(VAR_5, &VAR_1->overrun);
  FUNC_3(VAR_0, &VAR_1->entries_bytes);







  break;

 case 128:




  break;
 case 129:





  return 1;
 case 130:





  return 1;
 default:
  FUNC_0(VAR_1, 1);
  return -1;
 }
 VAR_4 = VAR_3;
 FUNC_7(VAR_1, &VAR_4);

 VAR_7 = FUNC_4(VAR_1, VAR_4, VAR_3,
        129);
 switch (VAR_7) {
 case 131:
 case 129:

  break;
 default:
  FUNC_0(VAR_1, 1);
  return -1;
 }
 if (VAR_7 == 129) {
  struct buffer_page *VAR_8;

  VAR_8 = FUNC_1(VAR_1->tail_page);




  if (VAR_8 != VAR_2 &&
      VAR_8 != VAR_3)
   FUNC_5(VAR_1, VAR_4,
      VAR_3,
      131);
 }






 if (VAR_6 == 131) {
  VAR_7 = FUNC_5(VAR_1, VAR_3,
           VAR_2,
           128);
  if (FUNC_0(VAR_1,
          VAR_7 != 128))
   return -1;
 }

 return 0;
}
