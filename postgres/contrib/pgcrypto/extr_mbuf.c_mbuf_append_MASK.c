
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int data_end; scalar_t__ no_write; } ;
typedef TYPE_1__ MBuf ;


 int VAR_0 ;
 int FUNC_0 (int,int const*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*) ;

int
FUNC_3(MBuf *VAR_1, const uint8 *VAR_2, int VAR_3)
{
 if (VAR_1->no_write)
 {
  FUNC_2("mbuf_append: no_write");
  return VAR_0;
 }

 FUNC_1(VAR_1, VAR_3);

 FUNC_0(VAR_1->data_end, VAR_2, VAR_3);
 VAR_1->data_end += VAR_3;

 return 0;
}
