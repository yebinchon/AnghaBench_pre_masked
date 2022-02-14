
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct circ_buf {char* buf; size_t head; } ;


 int VAR_0 ;
 int FUNC_0 (struct circ_buf*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_1, struct circ_buf *VAR_2)
{
 char *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_2->buf[VAR_2->head];
 VAR_4 = FUNC_0(VAR_2);
 VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_4);
 if (VAR_4 < 0)
  FUNC_1("read");
 else if (VAR_4 > 0)
  VAR_2->head = (VAR_2->head + VAR_4) & (VAR_0 - 1);
 return VAR_4;
}
