
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int maxlen; char* data; } ;
typedef TYPE_1__* StringInfo ;
typedef scalar_t__ Size ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int,...) ;
 scalar_t__ FUNC_8 (char*,int) ;
 int VAR_4 ;

void
FUNC_9(StringInfo VAR_5, int VAR_6)
{
 int VAR_7;





 if (VAR_6 < 0)
 {

  FUNC_1(VAR_1, "invalid string enlargement request size: %d", VAR_6);




 }
 if (((Size) VAR_6) >= (VAR_3 - (Size) VAR_5->len))
 {

  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_5("out of memory"),
     FUNC_4("Cannot enlarge string buffer containing %d bytes by %d more bytes.",
         VAR_5->len, VAR_6)));






 }

 VAR_6 += VAR_5->len + 1;



 if (VAR_6 <= VAR_5->maxlen)
  return;






 VAR_7 = 2 * VAR_5->maxlen;
 while (VAR_6 > VAR_7)
  VAR_7 = 2 * VAR_7;






 if (VAR_7 > (int) VAR_3)
  VAR_7 = (int) VAR_3;

 VAR_5->data = (char *) FUNC_8(VAR_5->data, VAR_7);

 VAR_5->maxlen = VAR_7;
}
