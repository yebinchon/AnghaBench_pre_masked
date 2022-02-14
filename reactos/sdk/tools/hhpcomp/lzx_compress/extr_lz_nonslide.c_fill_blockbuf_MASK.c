
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int block_buf_size; int chars_in_buf; int (* get_chars ) (TYPE_1__*,int,int *) ;scalar_t__ eofcount; int * block_buf; } ;
typedef TYPE_1__ lz_info ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int *) ;

__attribute__((used)) static void
FUNC_2(lz_info *VAR_0, int VAR_1)
{
  int VAR_2;
  u_char *VAR_3;
  int VAR_4;

  if (VAR_0->eofcount) return;
  VAR_1 -= FUNC_0(VAR_0);
  VAR_2 = VAR_0->block_buf_size - VAR_0->chars_in_buf;
  if (VAR_2 > VAR_1) VAR_2 = VAR_1;
  VAR_3 = VAR_0->block_buf + VAR_0->chars_in_buf;
  VAR_4 = VAR_0->get_chars(VAR_0, VAR_2, VAR_3);
  VAR_0->chars_in_buf += VAR_4;
  if (VAR_4 != VAR_2)
    VAR_0->eofcount++;
}
