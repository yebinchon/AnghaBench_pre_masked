
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct write_data {int f; TYPE_1__* io; } ;
typedef int strm_value ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_2__ strm_stream ;
struct TYPE_4__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct write_data*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_2, strm_value VAR_3)
{
  struct write_data *VAR_4 = (struct write_data*)VAR_2->data;


  FUNC_3(FUNC_1(VAR_4->f), 1);

  if ((VAR_4->io->mode & VAR_0) == 0) {
    FUNC_0(VAR_4->f);
  }
  FUNC_2(VAR_4);
  return VAR_1;
}
