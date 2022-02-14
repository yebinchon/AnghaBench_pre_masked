
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct circ_buf {char* buf; size_t head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct circ_buf*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(int VAR_2, struct circ_buf *VAR_3)
{
 char *VAR_4;
 int VAR_5;
 int VAR_6 = FUNC_2(VAR_1);

 VAR_4 = &VAR_3->buf[VAR_3->head];
 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 > VAR_6) {
  FUNC_1(VAR_4, VAR_1, VAR_6);
  VAR_1 += VAR_6;
  VAR_5 = VAR_6;
 } else {
  FUNC_1(VAR_4, VAR_1, VAR_5);
  VAR_1 += VAR_5;
 }
 if (VAR_5 > 0)
  VAR_3->head = (VAR_3->head + VAR_5) & (VAR_0 - 1);
 return VAR_5;
}
