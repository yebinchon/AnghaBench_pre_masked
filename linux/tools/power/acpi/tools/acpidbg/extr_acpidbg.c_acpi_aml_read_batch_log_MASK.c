
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct circ_buf {char* buf; size_t head; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct circ_buf*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static int FUNC_4(int VAR_9, struct circ_buf *VAR_10)
{
 char *VAR_11;
 int VAR_12;
 int VAR_13 = 0;

 VAR_11 = &VAR_10->buf[VAR_10->head];
 VAR_12 = FUNC_1(VAR_10);
 while (VAR_13 < VAR_12 && VAR_8 != VAR_1) {
  if (VAR_8 == VAR_2) {
   *VAR_11 = VAR_6;
   VAR_12 = 1;
   VAR_10->head = (VAR_10->head + 1) & (VAR_0 - 1);
   VAR_13 += 1;
   VAR_8 = 130;
  } else {
   VAR_12 = FUNC_3(VAR_9, VAR_11, 1);
   if (VAR_12 <= 0) {
    if (VAR_12 < 0)
     FUNC_2("read");
    VAR_13 = VAR_12;
    break;
   }
  }
  switch (VAR_8) {
  case 130:
   if (*VAR_11 == '\n')
    VAR_8 = 129;
   VAR_10->head = (VAR_10->head + 1) & (VAR_0 - 1);
   VAR_13 += 1;
   break;
  case 129:
   if (*VAR_11 == VAR_3 ||
       *VAR_11 == VAR_4) {
    VAR_5 = *VAR_11;
    VAR_8 = 128;
   } else {
    if (*VAR_11 != '\n')
     VAR_8 = 130;
    VAR_10->head = (VAR_10->head + 1) & (VAR_0 - 1);
    VAR_13 += 1;
   }
   break;
  case 128:
   if (*VAR_11 == ' ') {
    VAR_8 = VAR_1;
    VAR_7 = 1;
   } else {

    VAR_8 = VAR_2;
    VAR_6 = *VAR_11;
    *VAR_11 = VAR_5;
    VAR_10->head = (VAR_10->head + 1) & (VAR_0 - 1);
    VAR_13 += 1;
   }
   break;
  default:
   FUNC_0(0);
   break;
  }
 }
 return VAR_13;
}
