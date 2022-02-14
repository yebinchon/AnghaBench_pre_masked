
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int no_write; int * read_pos; } ;
typedef TYPE_1__ MBuf ;


 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1(MBuf *VAR_0, int VAR_1, uint8 **VAR_2)
{
 if (VAR_1 > FUNC_0(VAR_0))
  VAR_1 = FUNC_0(VAR_0);

 VAR_0->no_write = 1;

 *VAR_2 = VAR_0->read_pos;
 VAR_0->read_pos += VAR_1;
 return VAR_1;
}
