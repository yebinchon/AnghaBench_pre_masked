
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int raw_buf_index; int raw_buf_len; char* raw_buf; } ;
typedef TYPE_1__* CopyState ;


 int FUNC_0 (TYPE_1__*,char*,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static bool
FUNC_2(CopyState VAR_1)
{
 int VAR_2;
 int VAR_3;

 if (VAR_1->raw_buf_index < VAR_1->raw_buf_len)
 {

  VAR_2 = VAR_1->raw_buf_len - VAR_1->raw_buf_index;
  FUNC_1(VAR_1->raw_buf, VAR_1->raw_buf + VAR_1->raw_buf_index,
    VAR_2);
 }
 else
  VAR_2 = 0;

 VAR_3 = FUNC_0(VAR_1, VAR_1->raw_buf + VAR_2,
        1, VAR_0 - VAR_2);
 VAR_2 += VAR_3;
 VAR_1->raw_buf[VAR_2] = '\0';
 VAR_1->raw_buf_index = 0;
 VAR_1->raw_buf_len = VAR_2;
 return (VAR_3 > 0);
}
