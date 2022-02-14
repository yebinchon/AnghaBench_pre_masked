
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int * data; int * read_pos; int * data_end; int * buf_end; } ;
typedef TYPE_1__ MBuf ;


 int VAR_0 ;
 int * FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static void
FUNC_1(MBuf *VAR_1, int VAR_2)
{
 uint8 *VAR_3;
 unsigned VAR_4;

 if (VAR_1->data_end + VAR_2 <= VAR_1->buf_end)
  return;

 VAR_4 = (VAR_1->buf_end - VAR_1->data)
  + ((VAR_2 + VAR_0 + VAR_0 - 1) & -VAR_0);

 VAR_3 = FUNC_0(VAR_1->data, VAR_4);

 VAR_1->buf_end = VAR_3 + VAR_4;
 VAR_1->data_end = VAR_3 + (VAR_1->data_end - VAR_1->data);
 VAR_1->read_pos = VAR_3 + (VAR_1->read_pos - VAR_1->data);
 VAR_1->data = VAR_3;

 return;
}
