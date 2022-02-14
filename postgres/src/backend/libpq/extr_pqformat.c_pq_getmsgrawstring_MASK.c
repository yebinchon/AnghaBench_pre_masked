
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; size_t cursor; int len; } ;
typedef TYPE_1__* StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

const char *
FUNC_4(StringInfo VAR_2)
{
 char *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_2->data[VAR_2->cursor];






 VAR_4 = FUNC_3(VAR_3);
 if (VAR_2->cursor + VAR_4 >= VAR_2->len)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("invalid string in message")));
 VAR_2->cursor += VAR_4 + 1;

 return VAR_3;
}
