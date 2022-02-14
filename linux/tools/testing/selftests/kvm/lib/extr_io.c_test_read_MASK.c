
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,size_t,...) ;
 int VAR_2 ;
 size_t FUNC_1 (int,char*,size_t) ;

ssize_t FUNC_2(int VAR_3, void *VAR_4, size_t VAR_5)
{
 ssize_t VAR_6;
 ssize_t VAR_7 = 0;
 size_t VAR_8 = VAR_5;
 char *VAR_9 = VAR_4;




 FUNC_0(VAR_5 >= 0, "Unexpected count, count: %li", VAR_5);

 do {
  VAR_6 = FUNC_1(VAR_3, VAR_9, VAR_8);

  switch (VAR_6) {
  case -1:
   FUNC_0(VAR_2 == VAR_0 || VAR_2 == VAR_1,
        "Unexpected read failure,\n"
        "  rc: %zi errno: %i", VAR_6, VAR_2);
   break;

  case 0:
   FUNC_0(0, "Unexpected EOF,\n"
        "  rc: %zi num_read: %zi num_left: %zu",
        VAR_6, VAR_7, VAR_8);
   break;

  default:
   FUNC_0(VAR_6 > 0, "Unexpected ret from read,\n"
        "  rc: %zi errno: %i", VAR_6, VAR_2);
   VAR_7 += VAR_6;
   VAR_8 -= VAR_6;
   VAR_9 += VAR_6;
   break;
  }
 } while (VAR_7 < VAR_5);

 return VAR_7;
}
